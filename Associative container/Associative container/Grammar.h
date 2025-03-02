#ifndef GUARD_Grammar_h
#define GUARD_Grammar_h

#include <istream>
#include <cstdlib>

typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;

Grammar read_grammar(std::istream&);
std::vector<std::string> gen_sentence(const Grammar&);
bool bracketed(const std::string&);
void get_aux(const Grammar&, const std::string&, std::vector<std::string>&);
int nrand(int);


#pragma once

#endif // !GUARD_Grammar_h

