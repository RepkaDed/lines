/*Группа БВ215
Афанасьев Антон Анатольевич
Задание 1. Дана строка символов. Заменить в ней все пробелы на табуляции.
Задание 2. Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих в строке.
Задание 3. Подсчитать количество слов во введенном предложении.*/

#include <iostream>
#include <string>
#include "Replace_all_spaces_with_tabs.h"
#include "number_of_letters,_numbers_and_other_characters.h"
using namespace std;

int main() {
    string old = "It was a wonderful day October 3, 1998";
    character_string (old);

    char *str = "415 base reply";
    number_of_letters_numbers_and_other_characters (str);
    return 0;
}
