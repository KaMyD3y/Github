#ifndef GUARD_man_h
#define GUARD_map_h
#pragma once
#include <map>
#include <string>
#include <vector>
#include "split.h"

std::map<std::string, std::vector<int>> 
xref(std::istream in,std::vector<std::string> find_words(const std::string&) = split);
#endif // !GUARD_man_h


