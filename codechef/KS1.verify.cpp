#include <bits/stdc++.h>
using namespace std;

#define TIMEIT 1
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
#ifdef TIMEIT
    clock_t startTime = clock();
#endif

    fastio;
    int t, n;
    int arr[100000];
    int xx[100000];
    multimap<int, int> mp;

    cin >> t;
    int xorxor;
    ll count = 0;
    for (int a = 0; a < t; a++) {
        mp.clear();
        count = 0;

        cin >> n;
        xorxor = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            xorxor = xorxor ^ arr[i];
            xx[i] = xorxor;
            mp.insert(make_pair(xorxor, i));
        }

        // cout << "Insetion Done" << endl;
        // debug(arr, n);
        // debug(xx, n);

        // cout << "MAP : " << endl;
        // for (auto p : mp) {
        //     cout << p.first << " " << p.second << endl;
        // }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            auto second = it;
            if (it->first == 0) {
                count += it->second;
            }
            second++;
            while (second != mp.end() && second->first == it->first) {
                count+= second->second - it->second - 1;
                second++;
            }
        }
        cout << count << endl;
    }
#ifdef TIMEIT
    cerr << endl
         << setprecision(20)
         << double(clock() - startTime) / (double)CLOCKS_PER_SEC << " seconds."
         << endl;
#endif

}