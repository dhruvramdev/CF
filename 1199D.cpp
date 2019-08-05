#include <algorithm>
#include <cmath>
#include <iostream>
#include <unordered_map>

#define ll long long

using namespace std;

int main() {
    ll n;
    int arr[n];

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll k;
    cin >> k;
    ll min = 0;

    ll t,p,x;

    for (ll i = 0; i < k; i++) {
        cin >>t;
        if( t == 1){
            cin >> p >> x;
            arr[p] = x;
        } else {
            cin >> x;
            if(min < x ){
                x = min;
            }
        }
    }

    for (ll i = 0; i < n; i++) {
        cout << 
    }
}