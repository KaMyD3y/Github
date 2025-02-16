#include <vector>
#include <string>
#include <ios>
#include <iostream>
#include <ostream>
#include <bitset>
#include <sstream>



using namespace std;

// Целочисленный литерал

std::string toHex(int num) {
    if (num == 0) return 0;


}

std::string toByte(int num) {
    string result;
    int bit;
    //if (num == 0)  return 0; 
    //while (num) {
    //    bit = num % 2;
    //    if (bit == 0) {
    //        result.append(1, '0');
    //    }
    //    else if (bit == 1) {
    //        result.append(1,'1');

    //    }
    //    num /= 2;
    //}
    //// так же можно использовать insert с ним не нужно использовать reverse 
    //// я еще дальше пошел и схитрил тут добавил 1 в место ноль  if (bit == 0) {result.append(1, '1');} и тогда реверс не нужен
    //reverse(result.begin(),result.end());
    //return result;
    // тут то что ты мне дал
    while (num) {
        bit = num % 2;
        result = (bit ? '1' : '0') + result;
        num /= 2;
    }

    return result;
}
// выше так же есть несколько решений с result; можно использовать result+= (bit? '1' : '0'); а потом нужен только реверс)
// это вариант я нашел типа ASC но тут он не работает иза возращаемой функции результата) 
//while (num) {
//    bit = num % 2;
//    result += '0' + bit;
//    num /= 2;
//}
//reverse(result.begin(), result.end());





int main() {
    setlocale(LC_ALL, "RU");
    int num;
    cout << "Число Введите:";
    while (cin >> num) {
        std::cout << "Hex: " << toHex(num) << std::endl;
        std::cout << "Byte: " << toByte(num) << std::endl;


    }
    return 0;
}


//vector<int> showOddOrEven(vector<int>& numbers) {
//	typedef vector<int>::iterator iter;
//	for (iter i = numbers.begin();i != numbers.end();i++) {
//		if (*i % 2 == 0) {
//			cout << "this number is even: " << *i << endl;
//		}
//		else {
//			cout << "this number is odd: " << *i << endl;
//		}
//	}
//	return numbers;
//}
//int main() {
//	setlocale(LC_ALL, "RU");
//
//	cout << "Напишите пару чисел ";
//	int num;
//	vector<int> numbers;
//	while (cin >> num) {
//		if (cin.peek() == '\n' || cin.eof()) {
//			break;
//		}
//		numbers.push_back(num);
//	}
//	showOddOrEven(numbers);
//	return 0;
//
//}