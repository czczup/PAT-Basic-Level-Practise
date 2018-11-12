#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

bool haveInvalidChar(char* str) {
    int length = strlen(str);
    for(int i=0; i<length; i++) {
        char s = str[i];
        if (s >= 'a' && s <= 'z') {
            continue;
        } else if (s >='A' && s <= 'Z') {
            continue;
        } else if (s >='0' && s <= '9') {
            continue;
        } else if (s == '.') {
            continue;
        } else {
            return true;
        }
    }
    return false;
}


bool haveLetterNoNumber(char* string) {
    int length = strlen(string);
    for(int i=0; i<length; i++) {
        char str = string[i];
        if (str >='0' && str <= '9') {
            return false;
        }
    }
    return true;
}

bool haveNumberNoLetter(char* string) {
    int length = strlen(string);
    for(int i=0; i<length; i++) {
        char str = string[i];
        if (str >='A' && str <= 'Z') {
            return false;
        } else if (str >= 'a' && str <= 'z') {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    getchar();
    for(int i=0; i<N; i++) {
        char string[85];
        for (int i=0; i<85; i++){
            char ch = getchar();
            if (ch == '\n') {
                string[i] = '\0';
                break;
            } else {
                string[i] = ch;
            }
        } 
        if(strlen(string) < 6) {
            cout << "Your password is tai duan le." << endl;
        } else if (haveInvalidChar(string)) {
            cout << "Your password is tai luan le." << endl;
        } else if (haveLetterNoNumber(string)) {
            cout << "Your password needs shu zi." << endl;
        } else if (haveNumberNoLetter(string)) {
            cout << "Your password needs zi mu." << endl;
        } else {
            cout << "Your password is wan mei." << endl;
        }
    }
    return 0;
}


