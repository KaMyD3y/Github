//#include <stdexcept>
//#include <vector>
//
//#include "grade.h"
//#include "median.h"
//#include "Student_info.h"
//
//using std::domain_error;
//using std::vector;
//
//double grade(double midterm, double final, const vector<double>& hw)
//{
//	if (hw.size() == 0)
//		throw domain_error("student has done no homework");
//	return grade(midterm, final, median(hw));
//}
//
//double grade(double midt, double final, double hw)
//{
//	return 0.2 * midt + 0.4 * final + 0.4 * hw;
//}
//
//double grade(const Student_info& stdnt)
//{
//	return grade(stdnt.midterm, stdnt.final, stdnt.homework);
//}
//double grade_aux(const Student_info& s) {
//	try {
//		return grade(s);
//
//	}
//	catch (domain_error) {
//		return grade(s.midterm, s.final, 0);
//	}
//}
