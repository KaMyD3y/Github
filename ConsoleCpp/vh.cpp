//#include "vh.h"
//#include "frame.h"
//#include <string>
//#include <vector>
//
//using namespace std;
//vector<string> vcat(const vector<string>& top, const vector<string>& bottom)
//{
//    vector<string> ret = top;
//    for (vector<string>::const_iterator it = bottom.begin();
//        it != bottom.end();++it)
//        ret.push_back(*it);
//    return ret;
//    // аналог ret.insert(ret.end(),bottom.begin(),bottom.end());
//}
//vector<string> hcat(const vector<string>& left, const vector<string>& right)
//{
//    vector<string>ret;
//
//    string::size_type width1 = width(left) + 1;
//    vector<string>::size_type i = 0, j = 0;
//    while (i != left.size() || j != right.size()) {
//        string s;
//        if (i != left.size())
//            s = left[i++];
//        s += string(width1 - s.size(), ' ');
//        if (j != right.size())
//            s += right[j++];
//        ret.push_back(s);
//    }
//    return ret;
//}