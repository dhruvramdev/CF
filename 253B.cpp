#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(NULL);

void debug(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i << " " << arr[i] << endl;
    }
}

int main() {
    // fastio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[5001] = {0};
    int cummlative[5001] = {0};
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[temp]++;
    }
    for (int i = 1; i < 5001; i++) {
        cummlative[i] = arr[i] + cummlative[i - 1];
    }

    // debug(arr, 20);
    // debug(cummlative, 20);

    int left = 0;
    int right = 0;

    int maxi = 0;
    int current = 0;
    int leftFound = 0;
    while (left <= 2500) {
        if (arr[left] != 0) {
            leftFound += arr[left];
            right = left * 2;
            while (arr[right] == 0) {
                right--;
            }
            current = cummlative[right] - cummlative[left] + arr[left];
            // cout << "Left : " << left << " Right: " << right
            //  << " Current : " << current << endl;

            if (current > maxi) {
                maxi = current;
            }
        }
        left++;
    }

    cout << min(leftFound, n - maxi) << endl;
}
