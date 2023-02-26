#pragma once
#include <iostream>
#include <string>
using namespace std;

string character_string (string old) {
    for (int i = 0; i <  old.size(); ++i) {
        if (old[i] == ' ') {
            old[i] = '\t';
        }
    }
    cout << old << endl;
    return old;
}

