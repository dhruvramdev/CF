#include <algorithm>
#include <cmath>
#include <iostream>
#include <unordered_map>
#include <map>

#define ll long long
#define sync ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    sync

    ll n, I;
    cin >> n >> I;

    map<int, int> counter;
    ll temp;
    for (ll i = 0; i < n; i++) {
        cin >> temp;
        counter[temp]++;
    }

    ll size = counter.size();
    I = I * 8;
    ll perItemBit = I / n;
    // cout << perItemBit << endl;
    ll maxKeys = pow(2, perItemBit);
    // cout << maxKeys << endl;

    ll keysToRemove = size - maxKeys;

   
    ll index = 0;
    ll left = 0;
    ll right = size - 1;
    ll ans = 0;

    auto iter = counter.begin();

    if (keysToRemove > 0) {
        ll cSum = 0;
        ll maxSum = 0;
        ll tSum = 0;
        for (int i = 0; i < maxKeys; i++) {
            cSum += iter->second;
            tSum += iter->second;
            iter++;
        }
        auto iter1 = counter.begin();
        for (int i = maxKeys; i < size; i++) {
            cSum += iter->second;
            cSum -= iter1->second;
            if (cSum > maxSum) {
                maxSum = cSum;
            }
            tSum += iter->second;
            iter++;
            iter1++;
        }
        cout << tSum - maxSum << endl;
    } else {
        cout << 0 << endl;
    }
}