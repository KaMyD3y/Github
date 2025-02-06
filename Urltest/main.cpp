#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>

#include "find_url.h"

using namespace std;

int main() {
	string url = "Here are some URLs: https://github.com/KaMyD3y/Github and http://example.com, also ftp://files.server.com";
	vector<string> get_link = find_urls(url);
	// так же можно сделать и через vector<string>::iterator i = get_link.begin();
	for (auto i = get_link.begin();i != get_link.end();i++) {
		cout << *i << endl;
	}
}

