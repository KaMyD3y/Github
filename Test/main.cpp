#include <string>
#include <vector>
#include <cctype>
#include <iostream>

#include <algorithm>
#include <istream>
#include <iterator>


using namespace std;



int main() {
	/*vector<int> u{34,54};*/
	//vector<int> u(10, 100);
	//vector<int> v(10);
	//vector<int>v;
	//данный код равен если бы я сделал vector<int> u = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
	//vector<string> u(10, "Hello world");
	//vector<string> v[2];
	//copy(u.begin(), u.end(), v.begin());

	//for (auto i = v.begin();i != v.end();++i) {
	//	cout <<"1: " << *i << endl;
	//}
	//for (auto i = u.begin();i != u.end();++i) {
	//	cout <<"2: " << *i << endl;
	//}
	//vector<int> u(10, 100);
	//vector <int> v;
	//copy(u.begin(), u.end(), back_inserter(v));
	//for (auto i = v.begin();i != v.end();i++) {
	//	cout << "!: " << *i << endl;
	//}
	//vector<int> u(10, 100);
	//vector <int> v;
	//copy(u.begin(), u.end(), ostream_iterator<int>(cout," "));
	//vector <int> u(10, 100);
	//vector <int> v;
	//copy(u.begin(), u.end(), inserter(v,v.begin()));
	//for (auto i = v.begin();i != v.end();i++) {
	//	cout << "1: " << *i << endl;
	//}
	vector <int> u(10, 100);
	vector<int> v(u.size());
	vector <int>::iterator it = v.begin();
	copy(u.begin(), u.end(), it);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ""));
	//for (auto i = v.begin();i != v.end();i++) {
	//	cout << "1: " << *i << endl;
	//}

	return 0;
}