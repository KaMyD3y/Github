#include <iostream>   // Для ввода/вывода (cin, cout)
#include <vector>     // Для работы с вектором (vector)
#include <string>     // Для работы со строками (string)
#include <algorithm>  // Для алгоритмов (find_if)
#include <cctype>     // Для работы с символами (isspace)

#include "change.h"

using namespace std;

// Функция для проверки, является ли символ пробелом
bool space(char c) {
    return isspace(c);
}

// Функция для проверки, не является ли символ пробелом
bool not_space(char c) {
    return !isspace(c);
}

// Функция для разбиения строки на слова
vector<string> split(const string& str) {
    typedef string::const_iterator iter; // Итератор для строки
    vector<string> ret; // Вектор для хранения слов
    iter i = str.begin();

    while (i != str.end()) {
        // Пропускаем пробелы
        i = find_if(i, str.end(), not_space);
        // Находим конец слова
        iter j = find_if(i, str.end(), space);

        // Если нашли слово, добавляем его в вектор
        if (i != str.end()) {
            ret.push_back(string(i, j));
            i = j; // Перемещаем i вперёд
        }
    }
    return ret;
}