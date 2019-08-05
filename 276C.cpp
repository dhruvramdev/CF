#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>


using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    long long counter[n];
    memset(counter, 0, sizeof(counter));

    int l, r;
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        l--;
        counter[l]++;
        if (r < n) {
            counter[r]--;
        }
    }
    for (int i = 1; i < n; i++) {
        counter[i] += counter[i - 1];
    }
    sort(counter, counter + n);
    long long int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i] * counter[i];
    }
    cout << s << endl;
}