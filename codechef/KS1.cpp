#include <bits/stdc++.h>
using namespace std;
// #define TIMEIT 1
#define ll long long
#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(NULL);

void debug(vector<int> arr) {
    for (auto e : arr) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {

#ifdef TIMEIT
    clock_t startTime = clock();
#endif

    fastio;
    ll t, n;
    int temp;
    int xx[100000];
    multimap<ll, ll> mp;
    unordered_set<ll> s;
    vector<ll> vec;

    cin >> t;
    ll xorxor;
    ll count = 0;
    for (int a = 0; a < t; a++) {
        mp.clear();
        cin >> n;
        xorxor = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            xorxor = xorxor ^ temp;
            xx[i] = xorxor;
            mp.insert(make_pair(xorxor, i));
            s.insert(xorxor);
        }

        count = 0;
        for (auto elem : s) {
            auto its = mp.equal_range(elem);
            vec.clear();
            for (auto it = its.first; it != its.second; it++) {
                vec.push_back(it->second);
            }
            // cout << "XOR VALUE : " << elem << endl;
            // debug(vec);
            int size = vec.size();
            for (int z = 0; z < size; z++) {
                count += z * vec[z] - (size - 1 - z) * (vec[z] + 1);
            }
            // cout << count << endl;

            if (elem == 0) {
                for (int z = 0; z < size; z++) {
                    count += vec[z];
                }
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