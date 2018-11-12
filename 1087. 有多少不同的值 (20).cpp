#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int result[20000] = {0};
    for(int n=1; n<=N; n++) {
        int value = n/2 + n/3 + n/5;
        result[value] += 1;
    } 
    int count = 0;
    for(int i=0; i<20000; i++) {
        if (result[i]!=0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

