#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    ll t,n,k;
    cin >> t;
    ll case1;

    for(int i = 0 ; i < t ; i++){
        cin >> n >> k;
        case1 = n / k;
        // cout << case1 << " " << k << endl;
        if(case1 % k == 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

}