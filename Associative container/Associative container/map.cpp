#include <vector>
#include <map>
#include <string>
#include <istream>
#include <ostream>
#include <iostream>
#include "split.h"


using namespace std;
//Находим все строки , в которых есть каждое слова
//из исходного текста.
map<string, vector<int>> xref(istream in, vector<string> find_words(const string&) = split)
{
	string line;
	int line_number = 0;
	map<string, vector<int>> ret;
	//считываем следующую строку.
	while (getline(in, line)) {
		++line_number;
		//разбиваем строку на слова.
		vector<string>words = find_words(line);

		//помним, что каждое слова встречается 
		//на текущей строке
	}

}
