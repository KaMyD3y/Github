#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <stdexcept>  // Добавили для std::domain_error
#include <algorithm>  // Добавили для std::sort
#include <iterator>

template <class Ran , class X> 
bool binar_search(Ran begin, Ran end, const X& x) 
{
	while (begin < end) {
		Ran mid = begin + (end - begin) / 2;

		if (x < *mid) {
			end = mid;
		}
		else if (*mid < x) {
			begin = mid + 1;
		}
		else return true;
	}
	return false;
	

}
int main() {
	std::vector<int> numbers = { 1,2,3,4,5,6,7,8,9,10 };
	int target = 0;
	/*binar_search(numbers.begin(), numbers.end(), target);*/
	if (binar_search(numbers.begin(), numbers.end(), target)) {
		std::cout<<"Found: "<< target <<std::endl;
	}
	else {
		std::cout << "Not Found: " << target << std::endl;
	}
	return 0;
}
//template <class Bi> void my_reverse(Bi begin, Bi end)
//{
//	while (begin != end) {
//		--end;
//		if (begin != end) {
//			std::swap(*begin++, *end);
//		}
//	}
//}
//int main() {
//	std::vector<int> number = { 1, 2, 3, 4, 5, 6 };
//	my_reverse(number.begin(), number.end());
//	for (std::vector<int>::const_iterator iter = number.begin();iter != number.end();iter++) {
//		std::cout << *iter << ", ";
//	}
//
//}

//template<class T>
//T median(std::vector<T> v) {
//	typedef typename std::vector<T>::size_type vec_sz;
//
//	vec_sz size = v.size();
//	if (size == 0) {
//		throw std::domain_error("Median empty! vector");
//	}
//	std::sort(v.begin(), v.end());
//	vec_sz mid = size / 2;
//	std::cout << mid << std::endl;
//	return size % 2 == 0 ? (v[mid] + v[mid - 1]) / 2 : v[mid];
//}
//template <class T>
//T max(const T& left, const T& right) {
//	return left > right ? left : right;
//}
//template<class IN, class X> 
//IN my_find(IN begin, IN end, const X& x)
//{
//	while (begin != end && *begin != x) {
//		++begin;
//	}
//	return begin;
//}
//template<class IN , class X>
//IN my_find(IN begin, IN end, const X& x)
//{
//	if (begin == end || *begin == x) {
//		return begin;
//	}
//	begin++;
//	return my_find(begin, end, x);
//}
//template <class IN , class Out> 
//Out my_copy(IN begin, IN end, Out desk)
//{
//	while (begin != end) {
//		*desk++ = *begin++;
//	}
//	return desk;
//}
//int main()
//{
//	std::vector<std::string> lists = { "salut", "paca","grisa","vasea" };
//	std::vector<std::string> save;
//	my_copy(lists.begin(), lists.end(),std::back_inserter(save));
//	for (std::vector<std::string>::const_iterator iter =  save.begin(); iter != save.end();iter++) {
//		std::cout << "Save: " << *iter << std::endl;
//	}
//	for (std::vector<std::string>::const_iterator list = lists.begin();list != lists.end();list++) {
//	std::cout << "list:" << *list << std::endl;
//	}
//
//	return 0;
//}
//{
//	std::vector<std::string> numbers = { "salut","paca", "amini","grisa"};
//
//	std::vector<std::string>::const_iterator it = my_find(numbers.begin(), numbers.end(), "amini");
//	if (it != numbers.end()) {
//		std::cout << "Found: " << *it << std::endl;
//	}
//	else {
//		std::cout << "Not Found: " << std::endl;
//	}
//	return 0;
//}