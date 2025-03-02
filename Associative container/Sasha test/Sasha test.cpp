#include <vector>
#include <string>
#include <ios>
#include <iostream>
#include <ostream>
#include <bitset>
#include <sstream>
#include <limits>
#include <cstdint>



using namespace std;


//// Обратите внимание, используя std::bitset, наши options соответствуют порядковым номерам бит, а не их значениям
//const int option_1 = 0;
//const int option_2 = 1;
//const int option_3 = 2;
//const int option_4 = 3;
//const int option_5 = 4;
//const int option_6 = 5;
//const int option_7 = 6;
//const int option_8 = 7;
//
//int main()
//{
//    // Помните, что отсчет бит начинается не с 1, а с 0
//    std::bitset<8> bits(0x2); // нам нужно 8 бит, начнем с битового шаблона 0000 0010
//    bits.set(option_5); // включаем 4-й бит - его значение изменится на 1 (теперь мы имеем 0001 0010)
//    bits.flip(option_6); // изменяем значения 5-го бита на противоположное (теперь мы имеем 0011 0010)
//    bits.reset(option_6); // выключаем 5-й бит - его значение снова 0 (теперь мы имеем 0001 0010)
//
//    std::cout << "Bit 4 has value: " << bits.test(option_5) << '\n';
//    std::cout << "Bit 5 has value: " << bits.test(option_6) << '\n';
//    std::cout << "All the bits: " << bits << '\n';
//
//    return 0;
//}

//int Calculate(int* arr, int len) {
//    int min = *arr;
//    for (int i = 0;i < len; i++) {
//        if (min > *(arr + i)) {
//            min = *(arr + i);
//            cout << "Minimal1 " << min << endl;
//
//        }
//        cout << "Minimal2 " << min << endl;
//    }
//    cout << "Minimal3 " << min << endl;
//    return min;
//}
//int main() {
//    int Numbers[] = { 3,5,2,-4,7 };
//    Calculate(Numbers, 5);
//
//    return 0;
//}

//int main() {
//    //my Hero
//    const uint8_t Run = 0x01;
//    const uint8_t health = 0x02;
//    const uint8_t space = 0x03;
//    const uint8_t armor = 0x04;
//
//    cout << "choice the skills! " << endl;
//    cout << "1 - Run: " << endl;
//    cout << "2 - Health: " << endl;
//    cout << "3 - Space: " << endl;
//    cout << "4 - Armor: " << endl;
//    cout << "Enter the number: ";
//    int x;
//    uint8_t HeroSkills = 0;
//    cin >> x;
//    if (x == 1) {
//        HeroSkills |= Run;
//        cout << "I got Number" << endl;
//        cout << "Ability: " << bitset<8>(HeroSkills) << " Run" << endl;
//    }
//    else if (x == 2) {
//        HeroSkills |= health;
//        cout << "I got Number" << endl;
//        cout << "Ability: " << bitset<8>(HeroSkills) << " Health" << endl;
//    }
//    else if (x == 3) {
//        HeroSkills |= space;
//        cout << "I got Number" << endl;
//        cout << "Ability: " << bitset<8>(HeroSkills) << " Space" << endl;
//    }
//    else {
//        HeroSkills |=(Run | space);
//        cout << "I got Number" << endl;
//        cout << "Ability: " << bitset<8>(HeroSkills) << " Armor with Run" << endl;
//    }
//    return 0;
//
//}



//std::string ToBinary(int Number)
//{
//    int StartIndex = sizeof(Number) * 4;
//
//    std::string BitForm;
//    for (int i = StartIndex - 1; i >= 0; --i)
//    {
//        int Shifted = Number >> i;
//        std::cout << Shifted << " " << Shifted << std::endl;
//        BitForm += (((Shifted) & 1) ? '1' : '0');
//    }
//
//    return BitForm;
//}
//std::string ToBinary(int Number) {
//    int StartIndex = sizeof(Number) * 4;//=16 bits
//    std::string BitForm;
//    //cout << "!: " << sizeof(StartIndex) << endl;
//    for (int i = StartIndex - 1; i >= 0;i--) { //  end to start;
//        //cout << "start" << i << "! ";
//
//        int Shifted = Number >> i;
//        //std::cout << "Shifted" << Shifted << "! "<< (((Shifted) & 1) ? '1' : '0') << std::endl;
//        BitForm += (((Shifted) & 1) ? '1' : '0');
//    }
//    return BitForm;
//}
//std::string ToBinary(int Number)
//{
//    int StartIndex = sizeof(Number) * 4;
//    std::string BitForm;
//    for (int i = 0;i < StartIndex;i++)
//    {
//        int Shifted = Number >> i;
//        BitForm += (((Shifted) & 1) ? '1' : '0') or +BitForm in end;
//
//    }
//    return BitForm;
//}
//
//int main() {
//    //int a = std::numeric_limits<int>::max();
//    int a = 1;
//    std::cout << ToBinary(a) << std::endl;
//    a = a << 3;
//    std::cout << ToBinary(a) << std::endl;
//    //a = a << 1;
//    //std::cout << ToBinary(a) << std::endl;
//    //a = a >> 2;
//    //std::cout << ToBinary(a) << std::endl;
//
//    return 0;
//}

//int main() {
//    int a = 1;
//    std::cout << (a & 0x1) << std::endl;
//    a = 2;
//    std::cout << (a & 0x1) << std::endl;
//
//    a = 1;
//    a = a << 1;
//    std::cout << a << std::endl;
//    a = a << 1;
//    std::cout << a << std::endl;
//    a = a << 1;
//    std::cout << a << std::endl;
//    a = a << 1;
//    std::cout << a << std::endl;
//    a = a >> 1;
//    std::cout << a << std::endl;
//
//    return 0;
//}

// Целочисленный литерал

//std::string toHex(int num) {
//    if (num == 0) return 0;
//    string result ;
//    string numbers[] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
//    int bit = 0;
//    while (num) {
//        bit = num % 16;
//        result.append(numbers[bit]);
//        num /= 16;
//
//    }
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
//    int resultSize = result.size();
//    for (int i = 0; i < resultSize / 2; i++) {
//        int tmp = result[i];
//        result[i] = result[resultSize - i - 1];
//        result[resultSize - i - 1] = tmp;
//    }
//    return result;
//    
//}
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





//int main() {
//    //setlocale(LC_ALL, "RU");
//    int num = 42;
//    //cout << "Число Введите:";
//    //while (cin >> num) {
//    std::cout << "Hex: " << toHex(num) << std::endl;
//        //std::cout << "Byte: " << toByte(num) << std::endl;
//
//    //}
//    //cout << hex << num << endl;
//    return 0;
//}


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