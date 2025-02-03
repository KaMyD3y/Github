
//#include <string>
//#include <vector>
//#include <list>
//#include <iostream>
//#include <algorithm>
//#include <cctype>
//#include "rotation.h"
//#include "split.h"
//
//using namespace std;
//
//typedef string::size_type str_sz;
//typedef vector<Rotation>::size_type vec_str_sz;
//
//
//vector<Rotation> get_rotations(const string& line)
//{
//    vector<Rotation> rotations;
//    vector<string> words = split(line);
//
//    vec_str_sz size = words.size();
//
//    for (vec_str_sz i = 0; i < size; ++i) {
//        Rotation r;
//        r.start = (size - i) % size;
//        for (vec_str_sz j = 0; j < size; ++j)
//            r.words.push_back(words[(j + i) % size]);
//
//        rotations.push_back(r);
//    }
//
//    return rotations;
//}
