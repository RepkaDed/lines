#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char number_of_letters_numbers_and_other_characters(char *str) {
    int count = 0,
            check;
    for (int i = 0; i <= strlen(str); ++i) {
        check = isdigit(str[i]);
        if (check) ++count;
    }
    cout << "number of digits: " << count << endl;
    int count1 = 0;
    for (int j = 0; j <= strlen(str); ++j) {
        check = isalpha(str[j]);
        if (check) ++count1;
    }
    cout << "Number of alphabet characters: " << count1 << endl;
    cout << "Number of non-alphabet characters: " << strlen(str) - count - count1;

    return 0;
}