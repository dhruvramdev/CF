#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(NULL);

void debug(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    fastio;

    int t, n;
    cin >> t;
    int l, r, temp;
    int arr[100000];
    int sum[100001] = {0};
    int index;
    for (int a = 0; a < t; a++) {
        cin >> n;
        // debug(sum, n);

        for (int i = 0; i < n; i++) {
            cin >> temp;
            l = max(0, i - temp);
            r = min(n - 1, i + temp);
            sum[l] += 1;
            sum[r + 1] += -1;
        }

        // debug(sum, n);

        for (int i = 0; i < n; i++) {
            sum[i] = sum[i] + sum[i - 1];
        }

        // debug(sum, n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(sum, sum + n);
        sort(arr, arr + n);

        bool flag = true;

        // debug(arr, n);
        // debug(sum, n);

        for (index = 0; index < n; index++) {
            if (sum[index] != arr[index]) {
                flag = false;
                break;
            }
            sum[index] = 0;
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        for (int i = index; i < n + 1; i++) {
            sum[i]=0;
        }
 

    }
}