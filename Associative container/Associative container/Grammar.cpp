
#include <vector>
#include <string>
#include <map>
#include <cstdlib>
#include "Grammar.h"
#include "split.h"


Grammar read_grammar(std::istream& in) {

	Grammar ret;
	std::string line;

	while (getline(in, line)) {
		std::vector<std::string> entry = split(line);

		if (!entry.empty()) {
			ret[entry[0]].push_back(Rule(entry.begin() + 1, entry.end()));
		}
	}
	return ret;
}
std::vector<std::string> gen_sentence(const Grammar& g) {
	std::vector<std::string> ret;
	get_aux(g, "<sentence>", ret);
	return ret;
}
bool bracketed(const std::string& s) {
	return s.size() > 1 && s[0] == '<' && s[s.size() - 1] == '>';
}

void get_aux(const Grammar& g, const std::string& word, std::vector<std::string>& ret) 
{
	if (!bracketed(word)) {
		ret.push_back(word);
	}
	else {
		Grammar::const_iterator it = g.find(word);
		if (it == g.end())
			throw std::logic_error("Empty Rule");

		const Rule_collection& c = it->second;

		const Rule& r = c[nrand(c.size())];

		for (Rule::const_iterator i = r.begin();i != r.end();i++)
			get_aux(g, *i, ret);
	}
}
int nrand(int n) {
	if (n <= 0 || n > RAND_MAX) {
		throw std::domain_error("Argument to nrand is out of range");

	}
	const int bucket_size = RAND_MAX / n;
	int r ;
	do r = rand() / bucket_size;
	while (r >= n);
	return r;
}



