#ifndef GUARD_median_cpp
#define GUARD_median_cpp
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <numeric>
#include "Student_info.h"
#include "grade.h"


using std::sort;				using std::vector;
using std::domain_error;		using std::accumulate;
using std::remove_copy;


double median(vector<double> vec)
{
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if (size == 0)
		throw domain_error("���������� ������: ");

	sort(vec.begin(), vec.end());
	vec_sz mid = size / 2;
	return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

//double median_analysis(const vector<Student_info>& students) {
//
//	vector<double> grades;
//
//	transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
//	return median(grades);
//
//}

//��� ������ ������� ��� ��� �� �������� �������� ������� ��� ��� ���� ������� � ������ ��� ����� ������ !
double average(const vector<double>& v) 
{
	return accumulate(v.begin(), v.end(), 0.0) / v.size();
}

double average_grade(const Student_info& s) {
	return grade(s.midterm, s.final, average(s.homework));
}

//double average_analysis(const vector<Student_info>& students) {
//	
//	vector<double> grades;
//	transform(students.begin(), students.end(), back_inserter(grades), average_grade);
//
//	return median(grades);
//}

double optimistic_median(const Student_info& s) {
	vector<double> nonzero;

	remove_copy(s.homework.begin(), s.homework.end(), back_inserter(nonzero), 0);
	if (nonzero.empty())
		return grade(s.midterm, s.final, 0);
	else
		return grade(s.midterm, s.final, median(nonzero));
}

//double optimistic_median_analysis(const vector<Student_info>& students) 
//{
//	vector<double> grades;
//	transform(students.begin(), students.end(), back_inserter(grades), optimistic_median );
//
//	return median(grades);
//}
double analysis_together(const vector<Student_info>& students)
{
	vector<double> grades/*, grades1 , grades2*/;


	grades.reserve(students.size() * 3); // ������������ ������
	transform(students.begin(), students.end(), back_inserter(grades), optimistic_median);
	transform(students.begin(), students.end(), back_inserter(grades), average_grade);
	transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
	

	//grades.insert(grades.end(), grades1.begin(), grades1.end());
	//grades.insert(grades.end(), grades2.begin(), grades2.end());
	return median(grades);
}


#endif