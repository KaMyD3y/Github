
#include <iostream>// входными и выходными объектами пример cout
#include <vector> //
#include <algorithm>
#include <string>
#include <cctype>
#include <stdexcept>
#include <iomanip>
#include <iterator>
#include <sstream>
#include "diagram.h"
#include "frame.h"

#include "otsplit.h"



using namespace std; //означает, что мы можем использовать имена для объектов и переменных из стандартной библиотеки

//задание тут было поменять frame и hcat что бы в место индекс итератора был обычный итератор!
int main() {
    setlocale(LC_ALL, "RU");
    cout << "Введите строки (завершите ввод ';'): " << endl;
	string s;
    vector<string> all_word;
 
    while (getline(cin, s)) {
        //getline записываем сому строку целиков а сплит уже вырезает по одному слову!
        if (s == ";") {
            break;
        }
        vector<string> words = split(s); 
        all_word.insert(all_word.end(), words.begin(), words.end());
    }
    // это контейнеры из звездачек)
    vector<string> framed1 = frame(all_word); 
    vector<string> framed2 = frame(all_word); 
    // тут горизантально или вертикально!
    vector<string> framevcat = vcat(framed1, framed2);   
    vector<string> framehcat = hcat(framed1, framed2);


   
    cout << "Vertical concatenation:" << endl;
    for (vector<string>::iterator i = framevcat.begin(); i != framevcat.end(); ++i) {
        cout << *i << endl;
    }
    //// третий вариант это auto заменяет полностью vector<string>::iterator
    //for (auto i = framevcat.begin(); i != framevcat.end();i++) {
    //    cout << *i << endl;

    //}
    cout << "\nHorizontal concatenation:" << endl;
    typedef vector<string>::iterator iter;
    iter i = framehcat.begin();
    for (; i != framehcat.end(); ++i) {
        cout << *i  << endl;
    }


    return 0;
}

