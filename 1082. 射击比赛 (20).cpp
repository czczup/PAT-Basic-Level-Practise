#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int maxDis = 0, maxID;
    int minDis = 10000, minID;
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        int ID, x, y;
        cin >> ID >> x >> y;
        int distance = x*x + y*y;
        if (distance <= minDis) {
            minDis = distance;
            minID = ID;
        }
        if (distance >= maxDis) {
            maxDis = distance;
            maxID = ID;
        }
    }
    printf("%04d %04d\n", minID, maxID);
    return 0;
}

