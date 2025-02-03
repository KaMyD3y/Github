//#include "split.h"
//#include <string>
//#include <vector>
//using namespace std;

//vector<string> split(const string& wordRot) {
//	vector<string> ret;
//	typedef string::size_type string_size;
//	string_size i = 0;
//	while (i != wordRot.size()) {
//		while (i != wordRot.size() && isspace(wordRot[i]))
//			++i;
//		string_size j = i;
//		while (j != wordRot.size() && !isspace(wordRot[j]))
//			++j;
//		if (i != j) {
//			ret.push_back(wordRot.substr(i, j - i));
//			i = j;
//		}
//	}
//	return ret;
//
//}
//bool space(char c) {
//	return isspace(c);
//}
//bool not_space(char c) {
//	return !isspace(c);
//}
//vector<string> split(const string& str) {
//	typedef string::const_iterator  iter;
//	vector<string> ret;
//	iter i = str.begin();
//
//	while (i != str.end()) {
//		i = find_if(i, str.end(), not_space);
//		iter j = find_if(i, str.end(), space);
//		if (i != str.end()) {
//			ret.push_back(string(i,j));
//			i = j;
//		}
//	}
//	return ret;
//}

