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
    string result ;
    string numbers[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
    int bit = 0;
    while (num) {
        bit = num % 16;
        result.append(numbers[bit]);
        num /= 16;

    }
    //while (num) {
    //    bit = num % 16;
    //    switch (bit) {
    //        case 10:
    //            result.append(1, 'A');
    //            break;
    //        case 11:
    //            result.append(1, 'B');
    //            break;
    //        case 12:
    //            result.append(1, 'C');
    //            break;
    //        case 13:
    //            result.append(1, 'D');
    //            break;
    //        case 14:
    //            result.append(1, 'E');
    //            break;
    //        case 15:
    //            result.append(1, 'F');
    //            break;
    //        //default:
    //        //    result.append(1, '0' + bit);
    //        default:
    //            int numSize = sizeof(numbers) / sizeof(numbers[0]);
    //            for (int i = 0; i != numSize;i++) {
    //                if (bit == numbers[i]) {
    //                    result.append(to_string(numbers[i]));
    //                }
    //            }

    //    }
    //    num /= 16;


    //}
    int resultSize = result.size();
    for (int i = 0; i < resultSize / 2; i++) {
        int tmp = result[i];
        result[i] = result[resultSize - i - 1];
        result[resultSize - i - 1] = tmp;
    }
    return result;
    
}
// this to help me Sasha )
//std::string toHex(int num) {
//    char Symbols[] = { "0123456789ABCDEF" };
//
//    if (num == 0) return 0;
//    string result;
//    int bit = 0;
//    while (num) {
//        bit = num % 16;
//        result.append(1, Symbols[bit]);
//        num /= 16;
//
//
//    }
//    int resultSize = result.size();
//    for (int i = 0; i < resultSize / 2; i++) {
//        int tmp = result[i];
//        result[i] = result[resultSize - i - 1];
//        result[resultSize - i - 1] = tmp;
//    }
//    return result;
//
//    //cout << hex << num << endl;
//
//
//}

//std::string toByte(int num) {
//    string result;
//    int bit;
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
    // 
    // 
    //// так же можно использовать insert с ним не нужно использовать reverse 
    //// я еще дальше пошел и схитрил тут добавил 1 в место ноль  if (bit == 0) {result.append(1, '1');} в следующую 0 в место 1 и тогда реверс не нужен
    // 
    //reverse(result.begin(),result.end());
    //return result;
    // 
    // 
    // тут то что ты мне дал
//    while (num) {
//        bit = num % 2;
//        result = (bit ? '1' : '0') + result;
//        num /= 2;
//    }
//    bitset<32> binary(result);
//    cout <<"16-ю" << binary << endl;
//
//    return result;
//}
// выше так же есть несколько решений с result; можно использовать result+= (bit? '1' : '0'); а потом нужен только реверс)
// 
// 
// это вариант я нашел типа ASC но тут он не работает иза возращаемой функции результата) 
//while (num) {
//    bit = num % 2;
//    result += '0' + bit;
//    num /= 2;
//}
//reverse(result.begin(), result.end());





int main() {
    //setlocale(LC_ALL, "RU");
    int num = 42;
    //cout << "Число Введите:";
    //while (cin >> num) {
    std::cout << "Hex: " << toHex(num) << std::endl;
        //std::cout << "Byte: " << toByte(num) << std::endl;

    //}
    //cout << hex << num << endl;
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