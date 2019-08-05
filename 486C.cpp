#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;

    int arr[n];
    int temp;
    int op1, op2;
    for (int i = 0; i < n; i++) {
        temp = s[n - 1 - i] - s[i];
        op1 = abs(temp);
        op2 = abs(26 - op1);
        temp = std::min(op1, op2);
        arr[i] = temp;
        arr[n - 1 - i] = temp;
    }

    cout << s << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool found = true;
    int index = p - 1;
    int k = 0;
    int ans = 0;

    if(arr[index] != 0){
        ans += arr[index];
        arr[index] = 0;
        arr[(n - 1) - index] = 0;
    }


    while (found) {
        found = false;
        k = 1;
        while (((index + k) < n) && ((index - k) >= 0) &&
               (arr[index + k] == 0) && (arr[index - k] == 0)) {
            // cout << index+k << endl;
            // cout << index-k << endl;
            // cout << arr[index+k] << endl;
            // cout << arr[index-k] << endl;
            // cout << index << " " << k << endl;
            k++;
        }
        cout << "Index : " << index << " k: " << k << endl;
        if ((index + k) < n && arr[index + k] != 0) {
            cout << "PLus at " << index - k << endl;
            found = true;
            index = index + k;
            ans += k + arr[index];
            arr[index] = 0;
            arr[(n - 1) - index] = 0;
        } else if ((index - k) >= 0 && arr[index - k] != 0) {
            cout << "Minus at " << index - k << endl;
            found = true;
            index = index - k;
            ans += k + arr[index];
            arr[index] = 0;
            arr[(n - 1) - index] = 0;
        }
        cout << ans << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << ans << endl;
}
