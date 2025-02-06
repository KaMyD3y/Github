#include <vector>
#include <string>
#include "frame.h"



using std::vector;
using std::string;
using std::max;


string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;
    for (vector<string>::const_iterator it = v.begin(); it != v.end();it++) {
        maxlen = max(maxlen, it->size());
    }
    return maxlen;
}



// ��� �������� frame ��� �������!
vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');

    // ������� �������
    ret.push_back(border);

    // ���������� �����
    for (vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter) {
        ret.push_back("* " + *iter + string(maxlen - iter->size(), ' ') + " *");
    }

    // ������ �������
    ret.push_back(border);
    return ret;
}
//vector<string> frame(const vector<string>& v)
//{
//    vector<string> ret;
//    string::size_type maxlen = width(v);
//    string border(maxlen + 4, '*');
//
//    // write the top border
//    ret.push_back(border);
//
//    // write each interior row, bordered by an asterisk and a space
//    //auto in loock vector<string>::iterator
//    typedef vector<string> ::const_iterator iter;
//    iter i = v.begin();
//
//    for (; i != v.end(); ++i) {
//        ret.push_back("* " + *i +
//            string(maxlen - i->size(), ' ') + " *");
//    }
//
//    // write the bottom border
//    ret.push_back(border);
//    return ret;
//}