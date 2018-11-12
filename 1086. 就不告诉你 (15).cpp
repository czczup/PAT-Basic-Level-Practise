#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a * b;
    char number[20];
    int point = 0;
    while (c != 0) {
        int temp = c % 10;
        c = c / 10;
        number[point++] = '0' + temp; 
    }
    number[point] = '\0';
    cout << atoi(number) << endl;
}

