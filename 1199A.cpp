#include <iostream>
using namespace std;

int main() {

    int n, x, y;
    cin >> n >> x >> y;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool before = false;
    bool after = false;

    for (int i = 0; i < n; i++) {
        before = true;
        after = true;
        for (int j = 1; j <= x && (i-j) >= 0; j++) {
            if (arr[i - j] <= arr[i]) {
                before = false;
            }
        }
        if (before) {
            for (int j = 1; j <= y && (i+j) < n ; j++) {
         1199       if (arr[i + j] <= arr[i]) {
                    after = false;
                }
            }
        }

        if(before && after){
            cout << i+1 << endl;
            return 0;
        }
    }
    // cout << n << endl;
}