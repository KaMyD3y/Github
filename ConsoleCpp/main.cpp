
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <stdexcept>
#include <sstream>
#include <iterator>


#include "Student_info.h"
#include "median.h"
#include "grade.h"
using namespace std;


int main() {
	// ���� ���� ���������� ��� ������ ��� ���������� ���
	setlocale(LC_ALL, "RU");
	vector<Student_info>students;
	string input;
	while (true) {
		cin.clear();
		cout << "������� ��� ��� 'stop' ��� ����������: ";
		cin >> input;
		if (input == "stop"|| input == ";") break;

		Student_info student;
		student.name = input;

		cout << "������� ������ �� ��� � �����: ";
		cin >> student.midterm >> student.final;

		cout << "������� ��� ������ �� ���������� �������� �������: ";
		vector<double> grades;
		read_hw(cin, grades);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.clear();
		student.homework = grades;
		students.push_back(student);

	}
	sort(students.begin(), students.end(), compare);

	vector<Student_info> result = extract_fails(students);
	

	for (int i = 0; i != result.size(); ++i) {
		cout<<"���:1 " << result[i].name  << ", �������� ������: " << median_analysis(result) << endl;
	}
	for (int i = 0; i != students.size();i++) {
		cout << "���:2 " << students[i].name << ", �������� ������: " << median(students[i].homework) << endl;

	}
	return 0;
	
}


//int main() {
//	setlocale(LC_ALL, "RU");
//	vector<Student_info> students = {
//		{"Mihail",76,76,{76,76,76}},
//		{"Ivan", 87, 90, {80, 85, 88}},
//		{"Vasea", 37, 50, {56, 45, 35}},
//		{ "Grisa", 27, 90, {20, 35, 48} },
//		{"Alex", 45, 54, {30, 25, 58}},
//	};
//	vector<Student_info> result = extract_fails(students);
//
//	for (int i = 0; i != result.size();i++) {
//		cout << "���: " << result[i].name
//			<< ", �������� ������: " << median(result[i].homework) << endl;
//	}
//	for (int i = 0; i != students.size();i++) {
//		cout << "���: " << students[i].name
//			<< ", �������� ������: " << median(students[i].homework) << endl;
//	}
//
//	return 0;
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	vector<Student_info> did, didnt;
//	Student_info students;
//	while (read(cin,students)) {
//		if (did_all_hw(students)) {
//			did.push_back(students);
//			did = extract_fails(did);
//		}
//		else
//			didnt.push_back(students);
//	}
//	
//	if (did.empty()) {
//		cout << "�� ���� ������� �� �������� ���� �������� �������! "
//			<< endl;
//		return 1;
//	}
//	if (didnt.empty()) {
//		cout << "��� �������� ��������� ��� �������� �������! "
//			<< endl;
//		return 1;
//	}
//
//	write_analysis(cout, "Median", median_analysis, did, didnt);
//	write_analysis(cout, "Average", average_analysis, did, didnt);
//	write_analysis(cout, "Optimistic Median", optimistic_median_analysis, did, didnt);
//
//	return 0;
//
//}

//int main() {
//	int *nums = new int[3];
//	nums[0] = 67;
//	nums[1] = 75;
//	cout << nums[0] << endl << nums[1] <<endl << *nums << endl;
//	delete[] nums;
//	cout << nums[0] << *nums << endl;
//	return 0;
//
//}

//void read_hw(vector<double>& hw)  //istream& removed !!!
//{
//    if (cin)
//        {
//        // get rid of previous contents
//        hw.clear();
//
//        // read homework grades
//        double x;
//        while (cin >> x)
//            hw.push_back(x);
//
//        // clear the stream so that input will work for the next student
//        cin.clear();
//        }
//    //istream& removed !!!,no return !
//}
//
//void read( Student_info& s)   //istream& removed !!!
//{
//    // read and store the student's name and midterm and final exam grades
//     cin >> s.name >> s.midterm >> s.final;
//
//    read_hw( s.homework);     // read and store all the student's homework grades
//
//}
//
//void print(Student_info& s)
//{
//    cout << "The student's name is :" << s.name << endl;
//    cout << "The student's midterm grade is :" << s.midterm << endl;
//    cout << "The student's final grade is :" << s.final << endl;
//    double sum = 0 ;
//    for(vector<double>::size_type i =0 ; i < s.homework.size() ;i++)
//        sum += s.homework[i] ;
//        cout << "The student's average homework grade is :" << sum /s.homework.size() << endl;
//
//}
//int main()
//{
//    Student_info S;
//    read (S);
//    print(S);
//}

//int main() {
//    setlocale(LC_ALL, "RU");
//    vector<Student_info> students;
//    Student_info student;
//
//    // ������ ��������� �� �����
//    while (true) {
//        cout << "������� ������ �������� (���, midterm, final, ������� ����� ������): ";
//        read(cin, student);
//        students.push_back(student);
//
//        // ��������� ����, ���� ��������� ����� ����� (��������, ��� ������� Ctrl+Z)
//        if (cin.eof()) break;
//    }
//
//    // ������� ����������� ������
//    for (const auto& s : students) {
//        cout << "������ ���������:" << endl;
//        cout << "���: " << s.name << endl;
//        cout << "Midterm: " << s.midterm << endl;
//        cout << "Final: " << s.final << endl;
//        cout << "�������: ";
//        for (double hw : s.homework) {
//            cout << hw << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}


//int main() {
//	vector<Student_info> did = {
//		{"Mihail", 87, 91, {85, 90, 88}},
//		{"Vasea", 75, 80, {70, 78, 72}}
//	};
//
//	vector<Student_info> didnt = {
//		{"Grisha", 50, 55, {40, 42, 45}},
//		{"Oleg", 60, 65, {58, 60, 62}}
//	};
//
//	// ����� �������
//	write_analysis(cout, "Median", median_analysis, did, didnt);
//	write_analysis(cout, "Average", average_analysis, did, didnt);
//	write_analysis(cout, "Optimistic Median", optimistic_median_analysis, did, didnt);
//
//	return 0;
//}

//int main() {
//	string str = "heloo" + string(", boss");
//	typedef string::const_iterator iter;
//	iter i = str.begin();
//	while (i != str.end()) {
//		cout << str << endl;
//		++i;
//	}
//	return 0;
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	
//	float Numbers[5];
//	
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter Number: " << i << endl;
//		cin >> Numbers[i];
//	}
//	float min = Numbers[0];
//
//	float summa = 0 ;
//	for (int i = 0; i < 5; i++) {
//		summa += Numbers[i];
//		if (Numbers[i] < min) 
//			min = Numbers[i];
//	}
//	cout << summa << endl;
//	cout << min << endl;
//
//	for (int i = 0; i < 5; i++) {
//		cout << "Number: " << Numbers[i] << endl;
//	}
//
//
//
//	//srand(time(NULL));
//	//int num_rand = 1 + rand() % 15;
//	//bool stop = false;
//	//int user_input;
//
//	//do {
//	//	cout << "Number: ";
//	//	cin >> user_input;
//	//	if (num_rand != user_input) {
//	//		cout << "�� �� �������! ";
//	//	}
//	//	else {
//	//		stop = true;
//	//		cout << "������� ";
//	//	}
//	//} while (!stop);
//}

//#include <iostream>
//#include <string>
//#include <list>
//#include <sstream>
//#include <vector>
//#include <stdexcept>
//#include <algorithm>
//#include <iomanip>
//#include <ios>
//#include <cctype>
//#include "rotation.h"
//#include "Student_info.h"
//#include "grade.h"
//
//
////#include "grade.h"
////#include "Student_info.h"
////#include "frame.h"
////#include "vh.h"
//
//using std::cin;                 using std::cout;
//using std::domain_error;        using std::endl;
//using std::max;                 using std::setprecision;
//using std::sort;                using std::streamsize;
//using std::string;              using std::vector;
//using std::setw;				using std::list;
//using std::isspace;             using std::getline;
//using std::istringstream;		using std::stringstream;
//using std::fixed;

//int main() {
//
//	setlocale(LC_ALL, "RU");
//	cout<<	"������� ���� ���:\n"
//			"����������, ������� ������ �� ��������� ,\n "
//			"����������� � �������� � � ����� ��������:\n "
//			"������� ��� ������ �� ���������� �������� ������� �����\n"
//			"Mihail 98 98 98 98 98 98 98\n"
//			"��� �� ���� �������� ������� "
//			"vasea 65 65\n"
//			"grisa 98 98 98 98 98 98 98\n"
//			"�������� ���� ��������� ����� �����:\n"
//			"��� ���������� ����� ������� ';' ��� 'stop'.\n";
//	list<Student_info> students;
//	string input;
//	while (getline(cin, input)) {
//		if (input == ";" || input == "stop")
//			break;
//		Student_info student;
//		stringstream ss(input);
//		ss >> student.name >> student.midterm >> student.final;
//
//		vector<double> grades;
//		read_hw(ss, grades);
//		student.homework = grades;
//
//		students.push_back(student);
//	}
//
//	cout << "\n��� ��������:\n";
//	for (list<Student_info>::iterator it = students.begin(); it != students.end(); ++it) {
//		try {
//			double final_grade = grade(it->midterm, it->final, it->homework);
//			streamsize prec = cout.precision();
//
//			cout << fixed << setprecision(2) << "�������: " << it->name << ", �������� ������: " << final_grade << endl;
//
//			cout.precision(prec);
//		}
//		catch (const domain_error& e) {
//			cout << "������� " << it->name << " �� ���� �������� �������: " << e.what() << endl;
//		}
//	}
//
//	list<Student_info> fails = extract_fails(students);
//	cout << "\n�������� � �������� ������� ���� 60:\n";
//	for (list<Student_info>::iterator it = fails.begin(); it != fails.end(); ++it) {
//		try {
//			double final_grade = grade(it->midterm, it->final, it->homework);
//			streamsize prec = cout.precision();
//			cout << setprecision(2) << "�������: " << it->name << ", �������� ������: " << final_grade << endl;
//		}
//		catch (const domain_error& e) {
//			cout << "������� " << it->name << " �� ���� �������� �������: " << e.what() << endl;
//		}
//	}
//
//	return 0;
//
//}

//int main() {
//
//	setlocale(LC_ALL, "RU");
//	cout << "Numele vostrul va rog: ";
//
//	list<Student_info> students;
//	string input;
//	while (getline(cin, input)) {
//		if (input == ";" || input == "stop")
//			break;
//		Student_info student;
//
//		student.name = input;
//
//		cout << "����������, ������� ������ �� ��������� , "
//			"����������� � �������� � � ����� ��������: ";
//
//		cin >> student.midterm >> student.final;
//
//		cout << "������� ��� ������ �� ���������� �������� ������� ,"
//			"�������� ���� ��������� ����� �����:\n"
//			"��� ���������� ����� ������� ';' ��� 'stop'."; 
//
//		vector<double> grades;
//		read_hw(cin, grades); 
//		student.homework = grades;
//
//		students.push_back(student);
//	}
//	students.sort(compare);
//
//	
//	for (list<Student_info>::iterator it = students.begin(); it != students.end(); ++it) {
//		try {
//			double final_grade = grade(*it); 
//			cout << "�������: " << it->name << " ������: " << final_grade << endl;
//		}
//		catch (const domain_error& e) {
//			cout << "������� " << it->name << " �� ���� �������� �������: " << e.what() << endl;
//		}
//	}
//	
//}

//int main() {
//
//    list<Student_info> students;
//    /*vector<Student_info> students;*/
//    Student_info record;
//    string::size_type maxlen = 0;
//
//    while (read(cin, record)) {
//        maxlen = max(maxlen, record.name.size());
//        students.push_back(record);
//    }
//    students.sort(compare);
//    /*sort(students.begin(), students.end(), compare);*/
//
//    for (vector<Student_info>::size_type i = 0;
//        i != students.size(); i++) {
//        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');
//
//        try {
//            double final_grade = grade(students[i]);
//            streamsize prec = cout.precision();
//            cout << setprecision(3) << final_grade << setprecision(prec);
//        }
//        catch (domain_error e) {
//            cout << e.what();
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//int main() {
//    setlocale(LC_ALL, "RU");
//    cout << "Scrie ceva text (�������� �����). ��� ���������� ������� ';' ��� 'stop':" << endl;
//    string arrayWord;
//
//    // ���� ������
//    while (getline(cin, arrayWord)) {
//        if (arrayWord == ";" || arrayWord == "stop")
//            break;
//
//        // �������� �������
//        vector<Rotation> rotations = get_rotations(arrayWord);
//
//        // ������� �������
//        cout << "\n������� ����:\n";
//        for (size_t i = 0; i < rotations.size(); ++i) {
//            for (size_t j = 0; j < rotations[i].words.size(); ++j) {
//                cout << rotations[i].words[j] << " ";  // �������� ����� � ��������
//            }
//            cout << endl;  // ������� �� ����� ������ ����� ������ �������
//        }
//    }
//
//    return 0;
//}
//

//vector<string> split(const string& s) {
//    vector<string> ret;
//    typedef string::size_type string_size;
//    string_size i = 0;
//
//    while (i != s.size()) {
//
//        while (i != s.size() && isspace(s[i]))
//            ++i;
//        string_size j = i;
//        while (j != s.size() && !isspace(s[j]))
//            ++j;
//        if (i != j) {
//            ret.push_back(s.substr(i, j - i));
//            i = j;
//        }
//
//    }
//    return ret;
//}
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    cout << "������� ������ (��������� ���� ';'): " << endl;
//	string s;
//    vector<string> all_word;
// 
//    while (getline(cin, s)) {
//        if (s == ";") {
//            break;
//        }
//        vector<string> words = split(s); 
//        all_word.insert(all_word.end(), words.begin(), words.end());
//    }
//
//    vector<string> framed1 = frame(all_word); 
//    vector<string> framed2 = frame(all_word); 
//
//    vector<string> framevcat = vcat(framed1, framed2);   
//    vector<string> framehcat = hcat(framed1, framed2);
//
//   
//    cout << "Vertical concatenation:" << endl;
//    for (vector<string>::size_type i = 0; i != framevcat.size(); ++i) {
//        cout << framevcat[i] << endl;
//    }
//
//    cout << "\nHorizontal concatenation:" << endl;
//    for (vector<string>::size_type i = 0; i != framehcat.size(); ++i) {
//        cout << framehcat[i]  << endl;
//    }
//
//    return 0;
//}
//    while (getline(cin, s)) {
//        if (s == ";") {
//            break;
//        }
//        vector<string> words = split(s);
//
//        all_word.insert(all_word.end(), words.begin(), words.end());
//    }
//    
//    
//    //vector<string> framed = frame(all_word);
//    //vector<string> another = frame({ "aicea este tot" });
//    //vector<string> another1 = frame({ "aicea este tot" });
//    //vector<string> framevcat = vcat(framed,all_word);
//    //vector<string> framehcat = hcat(framevcat, framevcat);
//    vector<string> framed = frame(all_word);  // ����� ��� ���� ����
//    vector<string> framevcat = vcat(framed, framed);  // ��������� ����� �����������
//    vector<string> framehcat = hcat(framevcat, framed);
//
//    for (vector<string>::size_type i = 0; i != framehcat.size()&& i != framevcat.size(); ++i) {
//        cout << framevcat[i]  << framehcat[i] << endl;
//    }
//        
//	return 0;
//}
//int main() {
//	std::cout << "Numele vostru: ";
//	std::string name;
//	std::cin >> name;
//
//	const std::string greeting = "Salut " + name + "!";
//	const int pad = 1;
//	const int rows = pad * 2 + 3;
//	const std::string::size_type cols = greeting.size() + pad * 2 + 2;
//	std::string::size_type c = 0;
//
//	std::cout << std::endl;
//	int r = 0;
//	while (c != cols) {
//		if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
//		{
//			std::cout << "*";
//		}
//		else {
//			if (r == pad + 1 && c == pad + 1) {
//				std::cout << greeting;
//				c += greeting.size();
//			}
//			else {
//				std::cout << " ";
//				++c;
//			}
//		}
//	}
//
//	while (r != rows) {
//		std::cout << std::endl;
//		/*std::cout << rows << std::endl;*/
//		++r;
//	}
//	
//	return 0;
//
//}

//vector<string> split(const string& s) {
//    vector<string> ret;
//    typedef string::size_type string_size;
//    string_size i = 0;
//
//    while (i != s.size()) {
//
//        while (i != s.size() && isspace(s[i]))
//            ++i;
//        string_size j = i;
//        while (j != s.size() && !isspace(s[j]))
//            ++j;
//        if (i != j) {
//            ret.push_back(s.substr(i, j - i));
//            i = j;
//        }
//
//    }
//    return ret;
//}
//int main() {
//    string s;
//
//    while (getline(cin, s)) {
//        vector<string> v = split(s);
//
//        for (vector<string>::size_type i = 0;
//            i != v.size();++i) {
//            cout << v[i] << endl;
//        }
//    }
//    return 0;
//}

//void squarePrince(int start, int end) {
//	for (int n = start;n <= end;++n) {
//		cout << setw(10) << n << setw(20) << n * n << '\n';
//	}
//}
//
//
//int main() {
//	squarePrince(1,1000);
//	return 0;
//}
//int main() {
//    int i = 0;
//    int k = 1000;
//    for (;i <= 1000; ++i) {
//        cout << i << ": "<<setw(20) << i * i << endl;
//    }
//}

//#include <ios>
//#include <iomanip>
//#include <algorithm>
//#include <stdexcept>
//#include <vector>
//#include <string>
//#include <iostream>
//#include "median.h"
//#include "grade.h"
//#include "Student_info.h"
//
//// �������� �������� ��������� 
//using std::cin;				using std::setprecision;
//using std::cout;			    using std::sort;
//using std::domain_error;	    using std::streamsize;
//using std::endl;			    using std::string;
//using std::max;				using std::vector;
//using std::istream;
//
//
//double grade(double midterm, double final, double homework) {
//	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
//}
//double grade(double midterm, double final, const vector<double>& hw) {
//	if (hw.size() == 0)
//		throw domain_error("������� �� ������ �� ������ ��������� �������: ");
//	return grade(midterm, final, median(hw));
//}
//
//
//
//
//
//double grade(const Student_info& s) 
//{
//	return grade(s.midterm, s.final, s.homework);
//}
//
//
//int main() {
//
//	setlocale(LC_ALL, "RU");
//
//	vector<Student_info> students;
//	Student_info record;
//	string::size_type maxlen = 0;
//	//��������� � ��������� ��� ������ ����� �������
//	//����� ����� ������� �������.
//	while (read(cin, record)) {
//		maxlen = max(maxlen, record.name.size());
//		students.push_back(record);
//
//	}
//	// ������������� ������ �� ��������.
//	sort(students.begin(), students.end(), compare);
//	
//	for(vector<Student_info>::size_type i = 0;
//		i != students.size(); ++i){ 
//
//		//������� ������� , ����������� ������
//		//maxlen +1 ���������.
//		cout << students[i].name 
//			<< string(maxlen + 1 - students[i].name.size(), ' ');
//		// ��������� � ������� ������.
//		try {
//			double final_grade = grade(students[i]);
//			streamsize prec = cout.precision();
//			cout << setprecision(3) << final_grade << setprecision(prec);
//
//		}
//		catch (domain_error e) {
//			cout << e.what();
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	cout << "Numele vostrul va rog: ";
//	string name;
//	cin >> name;
//	cout << "SAlut, " << name << " !" << endl;
//
//	cout << "����������, ������� ������ �� ��������� , "
//		"����������� � �������� � � ����� ��������: ";
//	double midterm, final;
//	cin >> midterm >> final;
//
//	cout << "������� ��� ������ �� ���������� �������� ������� ,"
//		"�������� ���� ��������� ����� �����: ";
//	vector<double> homework;
//	read_hw(cin, homework);
//	
//	try {
//		double final_grade = grade(midterm, final, homework);
//		streamsize prec = cout.precision();
//		cout << "���� �������� ������ ����� " << setprecision(4)
//			<< final_grade << setprecision(prec) << endl;
//	}
//	catch (domain_error) {
//		cout << endl << "�� ������ ������ ���� ������. "
//			"���������� , ����������� �����." << endl;
//		return 1;
//	}
//	return 0;
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	cout << "������� ����� (������� 'stop' ��� ���������� �����): ";
//	vector<string>array;
//	string word;
//	while (cin >> word && word != "stop") {
//		array.push_back(word);
//	}
//	typedef vector<string>::size_type vec_sz;
//	vec_sz size = array.size();
//	if (size == 0) {
//		cout << endl << "���������� ������ ����� ��� ������� "
//			"���������� ������� �����: " << endl;
//		return 0;
//	}
//	sort(array.begin(), array.end());
//	cout << endl << "������ ������� �����:" << endl;
//	int k = 0;
//	string words;
//	string small;
//	words = small = array[0];
//	for (/*vec_sz*/ int i = 0; i < array.size(); ++i) {
//		if (array[i].size() > words.size()) {
//			words = array[i];
//		}
//		if (array[i].size() < small.size()) {
//			small = array[i];
//		}
//	}
//	//for (/*vec_sz*/ int i = 0; i < array.size(); ++i) {
//	//	if (array[i].size() < words.size()) {
//	//		small = array[i];
//	//	}
//	//}
//	cout << endl << "����� ������� �����: " << words ;
//	cout << endl << "����� �������� �����: " << small << endl;
//	return 0;
//
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	cout << "������� ����� (������� 'stop' ��� ���������� �����): ";
//	vector<string>array;
//	string word;
//	while (cin >> word && word != "stop") {
//		array.push_back(word);
//	}
//	typedef vector<string>::size_type vec_sz;
//	vec_sz size = array.size();
//	if (size == 0) {
//		cout << endl << "���������� ������ ����� ��� ������� "
//			"���������� ������� �����: " << endl;
//		return 0;
//	}
//	sort(array.begin(), array.end());
//	cout << endl << "������ ������� �����:" << endl;
//	int count = 0;
//	for (/*vec_sz*/ int i = 0; i != array.size(); ++i) {
//		cout << "�����: " << array[i] << " -> �����: " << array[i].size() << " ����(�)" << endl;
//	}
//	return 0;
//
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	cout << "Introduceti niste cuvinte: ";
//	vector<string> array;
//	string word;
//	while (cin >> word && word != "stop")
//		array.push_back(word);
//	typedef vector<string>::size_type vec_sz;
//	vec_sz size = array.size();
//	if (size == 0) {
//		cout << endl << "���������� ������ ����� ��� ������� "
//			"���������� ������� �����: " << endl;
//		return 0;
//	}
//	sort(array.begin(), array.end());
//	cout << endl << "������� ������������� ����:" << endl;
//	int count = 1;
//	int k = 0;
//	for (int i = 1;i <= array.size();++i) {
//		if (i < array.size() && array[k] == array[i]) {
//			++count;
//
//		}
//		else {
//			cout << array[i - 1] << ":" << count << "���(�)" << endl;
//			count = 1;
//		}++k;
//	}
//	return 0;
//	
//}
//int main() {
//	setlocale(LC_ALL, "RU");
//	// ����������� � ������ ��� ��������
//	cout << "Introducetii numele vostru: ";
//	string name;
//	cin >> name;
//	cout << "Salut" << name << "!" << endl;
//	//����������� � ������ ������ �� ��������� , ����������� 
//	//� �������� � � ����� ��������
//	cout << "����������, ������� ������ �� ���������, "
//		"����������� � �������� � � ����� ��������: ";
//	double midterm, final;
//	cin >> midterm >> final;
//	//����������� ������ �� ���������� �������� �������.
//	cout << "������� ��� ������ �� ���������� �������� �������, "
//		"�������� ���� ��������� ����� �����: ";
//	vector<double> homework;
//	double x;
//	//���������: ������� homework �������� ��� ������ 
//	// �� �������� ������� , ��������� �� ��� ���.
//	while (cin >> x)
//		homework.push_back(x);
//	//���������, ���� �� ������� ������ �� �������� ������� .
//	typedef vector<double>::size_type vec_sz;
//	vec_sz size = homework.size();
//	if (size == 0) {
//		cout << endl << "���������� ������ ������ ��� �������. "
//			"����������, ����������� �����." << endl;
//		return 0;
//	}
//	//��������� ������
//	sort(homework.begin(), homework.end());
//	//��������� ��������� ������ ������� homework.
//	vec_sz mid = size / 2;
//	double median;
//	cout << mid << "este";
//	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 :
//		homework[mid];
//
//	//��������� � ������� �������� ������.
//	streamsize prec = cout.precision();
//	cout << "���� �������� ������ ����� " << setprecision(3)
//		<< 0.2 * midterm + 0.4 * final + 0.4 * median
//		<< setprecision(prec) << endl;
//	return 0;
//
//}

// coment!
//#include <iostream>
//#include <string>
//#include <ios>
//#include <iomanip>
//using std::cout;			using std::cin;
//using std::endl;			using std::string;
//using std::setprecision;	using std::streamsize;
//int main() {
//	setlocale(LC_ALL,"RU");
//	// ����������� � ��������� ��� ��������;
//	cout << "va rog puneti numele: ";
//	string name;
//	cin >> name;
//	cout << "Salut, " << name << "!" << endl;
//
//	//����������� � ��������� ������ �� ���������;
//	//����������� � �������� � � ����� ��������;
//
//	cout <<"va rog introduceti notele "
//		"la mijlocul semestru si la sfirsitul: ";
//	double midterm, final;
//	cin >> midterm >> final;
//
//	//����������� ������ �� ���������� �������� ������� 
//	cout << "introduceti toate notele pentru tema de acasa, "
//		"terminal introducerea cu inchipuirea sfirsitul failu: ";
//
//	//���������� � ����� ������ , ����������� �� ��� ���.
//	int count = 0;
//	double sum = 0;
//
//	//��������� � ������� ����������� ���������� ������.
//	double x;
//
//	//���������:
//	//�� ��������� ���� count ������ , � ���������� sum �������� ����� ������ count �������
//
//	while (cin >> x) {
//		++count;
//		sum += x;
//	}
//	//������� ���������.
//	streamsize prec = cout.precision();
//	cout << "nota totala " << setprecision(3)
//		<< 0.2 * midterm + 4 * final + 0.4 * sum / count
//		<< setprecision(prec) << endl;
//	return 0;
//
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	cout << endl;
//	for (int i = 10 ; i >= -5 ; i--){
//		cout << endl;
//		cout << i;
//	}
//
//	return 0;
//}
//int main() {
//	setlocale(LC_ALL, "RU");
//
//	const int rows = 4;
//	const string spaces = " ";
//	const string star = "*";
//	const int colum = 20;
//
//	for (int r = 0; r != rows; ++r) {
//		for (int c = 0; c != colum;++c) {
//			if (r == 0 || r == rows - 1 || c == colum - 1 || c == 0)
//				cout << star;
//			else cout << spaces;
//
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//
//	const int rows = 4;
//	const string spaces = " ";
//	const string star = "*";
//	const int colum = 6;
//
//	for (int r = 0; r != rows; ++r) {
//		for (int c = 0; c != colum;++c) {
//			if (r == 0 || r == rows - 1 || c == colum - 1 || c == 0) 
//				cout << star;
//			else cout << spaces;
//			
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	cout << "pune numele: ";
//	string name;
//	cin >> name;
//
//	const string greeting = "Salut:" + name + "!";
//	const int pad = 1;
//	const string spaces = " ";
//	const int rows = pad * 2 + 3;
//	const string::size_type cols = greeting.size() + pad * 2 + 2;
//	cout << endl;
//	for (int r = 0; r != rows; ++r) {
//		string::size_type c = 0;
//		while (c != cols) {
//			if (r == pad + 1 && c == pad + 1 ) {
//				cout << greeting;
//				c += greeting.size();
//
//
//			}else
//			{
//				if (r == 0  || r == rows - 1 || c == 0 || c == cols - 1)
//					cout << "*";
//				else cout << spaces;
//				++c;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//
//}

//int main() {
//	setlocale(LC_ALL, "RU");
//	cout << "pune numele: ";
//	string name;
//	cin >> name;
//
//	const string greeting = "Salut:" + name + "!";
//	cout << "distanta: ";
//	int dist;
//	cin >> dist;
//	/*const int pad = 1;*/
//	const string spaces = " ";
//	const int rows = dist * 2 + 3;
//	const string::size_type cols = greeting.size() + dist * 2 + 2;
//	cout << endl;
//	for (int r = 0; r != rows; ++r) {
//		string::size_type c = 0;
//		while (c != cols) {
//			if (r == dist + 1 && c == dist + 1) {
//				cout << greeting;
//				c += greeting.size();
//
//
//			}
//			else
//			{
//				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
//					cout << "*";
//				else cout << spaces;
//				++c;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//
//}
//int main() {
//	setlocale(LC_ALL, "RU");
//	//����������� ��� ��������
//	cout << "������� ��� ����������: ";
//
//	//citim numale 
//	string name;
//	cin >> name;
//
//	// cream mesajul si care il aratam
//	const string greeting = "Salut: " + name + "!";
//	// cit spatiu sa aiba
//	const int pad = 5;
//
//	//���������� ����� � ��������
//	const int rows = pad * 2 + 6;
//	const string::size_type cols = greeting.size() + pad * 2 + 2;
//
//	//������� ������ ������ ��� �� �������� ����� �� �����
//	cout << endl;
//	//������� rows �����
//	for (int r = 0; r != rows; ++r) {
//		string::size_type c = 0;
//		// ���������: ���� ��� ������ � �������� � ������� ������
//		while (c != cols) {
//			//���� �������� ����������� (greeting)?
//			if (r == pad + 2 && c == pad + 1) {
//				cout << greeting;
//				c += greeting.size();
//
//			}
//			else {
//				//�� ������ �������� �����?
//				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
//					cout << "*";
//				else cout << " ";
//				++c;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	std::cout << "Numele vostru: ";
//	std::string name;
//	std::cin >> name;
//
//	const std::string greeting = "Salut " + name + "!";
//	const int pad = 1;
//	const int rows = pad * 2 + 3;
//	const std::string::size_type cols = greeting.size() + pad * 2 + 2;
//	std::string::size_type c = 0;
//
//	std::cout << std::endl;
//	int r = 0;
//	while (c != cols) {
//		if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
//		{
//			std::cout << "*";
//		}
//		else {
//			if (r == pad + 1 && c == pad + 1) {
//				std::cout << greeting;
//				c += greeting.size();
//			}
//			else {
//				std::cout << " ";
//				++c;
//			}
//		}
//	}
//
//	while (r != rows) {
//		std::cout << std::endl;
//		/*std::cout << rows << std::endl;*/
//		++r;
//	}
//	
//	return 0;
//
//}

//int main() {
//	
//	std::cout << "Scrie numele: ";
//	std::string name;
//	std::cin >> name;
//
//	std::cout << "Familia: ";
//	std::string familia;
//	std::cin >> familia;
//	const std::string hello = "salut";
//	const std::string message = hello + ",pace" + "!";
//	std::cout << message;
//
//	const std::string greeting = "Salut, " + name + "!";
//	const std::string atFamilia = "Salut, " + familia + "!";
//
//	const std::string spaces(greeting.size(),' ');
//
//	const std::string second = "* " + spaces + " *";
//
//	const std::string first(second.size() , ' *');
//	
//	std::cout << std::endl;
//	std::cout << first << std::endl;
//	std::cout << second << std::endl;
//	std::cout << "* " << greeting << " *" << std::endl;
//	std::cout << second << std::endl;
//	std::cout << "* " << atFamilia << " *" << std::endl;
//	std::cout << second << std::endl;
//	std::cout << first << std::endl;
//	
//	return 0;
//
//}

//using namespace std;
//here for string
//int main() {
//	// ��� �������� ���������� ������ ����� � ������ ����� ������ ��������� ����� ������� ������ � ��� �� �������!
//
//	std::cout << "Scrie numele: ";
//	std::string name; // denumit variabila
//	std::cin >> name; // citim din introducere
//
//	std::cout << "Familia: ";
//	std::string familia;
//	std::cin >> familia;
//
//	// ��� ��� �� ������� �������� ����������� ����� �������!
//	std::cout << "Scrie un numar: ";
//	int cifra;
//	std::cin >> cifra;
//
//	std::cout << "a doua cifra: ";
//	int cifra2;
//	std::cin >> cifra2;
//	int sum = cifra * cifra2;
//
//	std::cout << "Salut, " << name << "! " << "abu " << familia << " " << sum << std::endl;
//	return 0;
//}

//int main()
//{
//	//cout << "Hello World!";
//	//cout << "Have a good day!";
//	//std ��������� ������������ ����
//	//cout ��������� ���� � ������������
//	//return 0;
//	//int c, v;
//	//int a, b;
//	setlocale(LC_ALL, "RU");
//	std::cout << "hello everyone" << std::endl;
//	std::cout << "My friend \n";
//    std::cout << "������\n";
//	//std::cout << 1 + 1 << std::endl;
//	//std::cout << 2 + 2 + 3 << std::endl;
//	//std::cout << 3 + 4 << std::endl;
//	//
//	//std::cin >> c >> v;
//
//	//std::cin >> a >> b;
//	//int mult = c * v;
//	//std::cout << "suma" << mult << std::endl;
//	//int sum = a + b;
//	//std::cout << "����� " << sum;
//	std::cout << "asta este \"" "\t dar asta \\" << std::endl;
//
//	return 0;
//}
//int main() { std::cout << "salut" << std::endl; return 0; }
//int main() {{{{ std::cout << "salut" << std::endl; }}}}
//int main() {
//	setlocale(LC_ALL, "RU");
//	std::cout << "������ \n���";
//	return 0;
//}
