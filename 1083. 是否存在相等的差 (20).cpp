#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int dis[N+10] = {0};
    for (int i=1; i<=N; i++) {
        int number;
        cin >> number; 
        dis[abs(number-i)]++;
    }
    for(int i=N+1; i>=0; i--) {
        if (dis[i] > 1) {
            printf("%d %d\n", i, dis[i]);
        }
    }
    return 0;
}

