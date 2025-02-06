#include "frame.h"
#include "diagram.h"
#include <string>
#include <vector>

using namespace std;

vector<string> vcat(const vector<string>& top, const vector<string>& bottom)
{
    vector<string> ret = top;
    for (vector<string>::const_iterator it = bottom.begin();
        it != bottom.end();++it)
        ret.push_back(*it);
    return ret;
    // аналог ret.insert(ret.end(),bottom.begin(),bottom.end());
}
vector<string> hcat(const vector<string>& left, const vector<string>& right)
{
    vector<string>ret;

    string::size_type width1 = width(left) + 1;
    //vector<string>::size_type i = 0, j = 0;
    vector<string>::const_iterator i = left.begin(), j = right.begin();
    while (i != left.end() || j != right.end()) {
        string s;
        if (i != left.end()) {
            s = *i;
            ++i;
        }
        s += string(width1 - s.size(), ' ');
        if (j != right.end()) {
            s += *j;
            ++j;
        }

        ret.push_back(s);
    }
    return ret;
}