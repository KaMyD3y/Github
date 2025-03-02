#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cctype>
#include <bitset>
#include "map.h"
#include "split.h"
#include "Grammar.h"

using  namespace std;


//int main()
//{
//	std::vector<std::string> sentence = gen_sentence(read_grammar(cin));
//
//	std::vector<std::string>::const_iterator it = sentence.begin();
//	if (!sentence.empty()) {
//		cout << *it;
//		++it;
//	}
//
//	while (it != sentence.end()) {
//		std::cout << " " << *it;
//		++it;
//	}
//	std::cout << endl;
//	return 0;
//}
//int main() { 
//
//
//	map<string, vector <int>> ret = xref(cin);
//	
//	for (map<string, vector<int>> ::const_iterator it = ret.begin();it != ret.end();++it) {
//		cout << it->first << " " << " Meets string: " << endl;
//		for (vector<int>::const_iterator line_it = it->second.begin();line_it != it->second.end();line_it++) {
//			cout <<it->first << " ," << *line_it;
//		}
//		cout << endl;
//	}
//		//vector<int>::const_iterator line_it = it->second.begin();
//		//cout << *line_it;
//
//		//++line_it;
//		//while (line_it != it->second.end()) {
//		//	cout << ", " << *line_it;
//		//	++line_it;
//		//}
//		//cout << endl;
//	return 0;
//}
//int main() {
//	int x = 5;
//
//	std::cout << std::bitset<8>(x) << endl;// without use the bit , in int are 4 bytes , one byte can use 8 bits ,
//	std::cout << sizeof(x) << endl;
//	int y = x << 1;
//
//	std::cout << std::bitset<8>(y) << endl;
//	y = y >> 2;
//	std::cout << std::bitset<8>(y) << endl;
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//
//	string s;
//
//	map<string, int> counters; // храним значение и счетчик !
//	map<int, vector<string>> findCounters; // sort!
//
//	//считываем входные данные , отслеживая количество
//	//вхождений каждого слово
//
//	while (cin >> s) {
//		++counters[s];
//	}
//
//	//выводим слова и соответствующие счетчики
//	for (map<string, int>::const_iterator it = counters.begin();it != counters.end();it++) {
//		cout << it->first << "\t" << it->second << endl;
//		findCounters[it->second].push_back(it->first); // new map!
//	}
//	for (map<int, vector<string>>::const_iterator iter = findCounters.begin();iter != findCounters.end();iter++) {
//		//cout << iter->first << ", ";// show time(s);
//	
//	for (vector<string>::const_iterator word_it = iter->second.begin(); word_it != iter->second.end();word_it++) {
//		cout << iter->first << " " << *word_it << " " << "here word!" << endl;
//	}
//	}
//	
//		//vector<string>::const_iterator word_it = iter->second.begin();// здесь обычный вариант я потом свой доделал)
//		//cout << *word_it << " " << "here word!";
//		//word_it++;
//		//while (word_it != iter->second.end()) {
//		//	cout << ", " << *word_it;
//		//	++word_it;
//		//}
//		//cout << endl;
//	return 0;
//
//
//}
