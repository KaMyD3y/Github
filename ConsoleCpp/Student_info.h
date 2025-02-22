#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <iostream>
#include <string>
#include <vector>
#include <list>

struct Student_info 
{
    std::string name;
    double midterm,final;
    std::vector<double> homework;

};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
bool fgrade(const Student_info&);
std::vector<Student_info> extract_fails(std::vector<Student_info>&);
//std::list<Student_info> extract_fails(std::list<Student_info>&);
bool did_all_hw(const Student_info&);
void write_analysis(std::ostream& out, const std::string& name,
	double analysis(const std::vector<Student_info>&),
	const std::vector<Student_info>& did,
	const std::vector<Student_info>& didnt);
bool pgrade(const Student_info&);

#endif