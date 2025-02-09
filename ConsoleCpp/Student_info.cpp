#include "Student_info.h"
#include "grade.h"
#include "median.h"


using namespace std;



bool compare(const Student_info& x, const Student_info& y)
{
	return x.name < y.name;
}

istream& read(istream& is, Student_info& s)
{
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework);
	return is;

}


istream& read_hw(istream& in, vector<double>& hw)
{
	if (in) {
		
		hw.clear();
		//peek() показывает следующий символ, но не извлекает его из потока.Мы можем посмотреть, что будет дальше.
		//eof() сообщает нам, что мы достигли конца потока(т.е.больше нет данных для чтения).
		double x;
		while (in >> x) {
			hw.push_back(x);
			//Вернуть если это нужно для моей функции тут не как в книге!
			if (in.peek() == '\n' || in.eof()) {
				break;
			}
		}

		in.clear();
	}

	return in;
}
bool fgrade(const Student_info& date) {
	return grade(date) < 60;
}
////vector<Student_info> extract_fails(vector<Student_info>& students) {
////	vector<Student_info> pass, fail;
////	for (vector<Student_info>::size_type i = 0; 
////		i != students.size();++i)
////		if (fgrade(students[i]))
////			fail.push_back(students[i]);
////		else pass.push_back(students[i]);
////	students = pass;
////	return fail;
////}
////vector<Student_info> extract_fails(vector<Student_info>& students) {
////	vector<Student_info> fail;
////	vector<Student_info>::iterator iter = students.begin();
////	while (iter != students.end()) {
////		if (fgrade(*iter)) {
////			fail.push_back(*iter);
////			iter = students.erase(iter);
////		}
////		else {
////			++iter;
////		}
////	}
////	return fail;
////}
////vector<Student_info> extract_fails(vector<Student_info>& students) {
////	vector<Student_info> fail;
////	vector<Student_info>::size_type i = 0;
////	while (i != students.size()) {
////		if (fgrade(students[i])) {
////			fail.push_back(students[i]);
////			students.erase(students.begin() + i);
////
////		}
////		else
////			++i;
////	}
////	return fail;
////}
////list<Student_info> extract_fails(list<Student_info>& students) {
////	list<Student_info> fail;
////	list<Student_info>::iterator iter = students.begin();
////	while (iter != students.end()) {
////		if (fgrade(*iter)) {
////			fail.push_back(*iter);
////			iter = students.erase(iter);
////		}
////		else {
////			++iter;
////		}
////	}
////	return fail;
////}
bool did_all_hw(const Student_info& s) {
	//if (s.homework.empty()) {
	//	return false; 
	//}
	//else
	//	return true;
	return !s.homework.empty() && find(s.homework.begin(), s.homework.end(), NULL) == s.homework.end();
	//return ((find(s.homework.begin(), s.homework.end(), 0)) == s.homework.end()); 
	//return find(s.homework.begin(), s.homework.end(), 0) == s.homework.end();
}


void write_analysis(ostream& out, const string& name,
	double analysis(const vector<Student_info>&),
	const vector<Student_info>& did,
	const vector<Student_info>& didnt)
{
	out << name << ": median(did) = " << analysis(did)
		<< ": median(didnt) = " << analysis(didnt) << endl;
}
//// вариантов в написанне этого кода зависит от прохода то есть от быстроты!
////vector<Student_info> extract_fails(vector<Student_info>& students) {
////	vector<Student_info> fail;
////	remove_copy(students.begin(),students.end(),back_inserter(fail),pgrade);
////
////	students.erase(remove_if(students.begin(), students.end(), fgrade), students.end());
////	return fail;
////}
vector<Student_info> extract_fails(vector<Student_info>& students) {
	// stable_partition сортирует от правильному к неправельному то есть а предикат (pgrade) который сравнивает боол значение с аргументом
	// потом интератор стартует от неправельного! теперь у нас students с теми кто сдал а fail с теми кто не сдал
	vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), pgrade);
	vector<Student_info>fail(iter, students.end());
	students.erase(iter, students.end());
	return fail;
}
bool pgrade(const Student_info& s) {
	return !fgrade(s);
}