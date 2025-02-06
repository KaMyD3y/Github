
#include <iostream>// �������� � ��������� ��������� ������ cout
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



using namespace std; //��������, ��� �� ����� ������������ ����� ��� �������� � ���������� �� ����������� ����������

//������� ��� ���� �������� frame � hcat ��� �� � ����� ������ ��������� ��� ������� ��������!
int main() {
    setlocale(LC_ALL, "RU");
    cout << "������� ������ (��������� ���� ';'): " << endl;
	string s;
    vector<string> all_word;
 
    while (getline(cin, s)) {
        if (s == ";") {
            break;
        }
        vector<string> words = split(s); 
        all_word.insert(all_word.end(), words.begin(), words.end());
    }

    vector<string> framed1 = frame(all_word); 
    vector<string> framed2 = frame(all_word); 

    vector<string> framevcat = vcat(framed1, framed2);   
    vector<string> framehcat = hcat(framed1, framed2);

   
    cout << "Vertical concatenation:" << endl;
    for (vector<string>::iterator i = framevcat.begin(); i != framevcat.end(); ++i) {
        cout << *i << endl;
    }

    cout << "\nHorizontal concatenation:" << endl;
    for (vector<string>::iterator i = framehcat.begin(); i != framehcat.end(); ++i) {
        cout << *i  << endl;
    }

    return 0;
}