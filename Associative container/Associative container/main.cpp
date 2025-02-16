#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using  namespace std;





//int main() {
//	setlocale(LC_ALL, "RU");
//
//	string s;
//
//	map<string, int> counters; // храним значение и счетчик !
//
//	//считываем входные данные , отслеживая количество
//	//вхождений каждого слово
//
//	while (cin >> s)
//		++counters[s];
//
//	//выводим слова и соответствующие счетчики
//	for (map<string, int>::const_iterator it = counters.begin();it != counters.end();it++) {
//		cout << it->first << "\t" << it->second << endl;
//	}
//	return 0;
//
//
//}