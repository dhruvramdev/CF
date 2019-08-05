#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio

    ll a,m;
    cin >> a >> m;

    int arr[m];
    memset(arr, 0, sizeof(arr));

    ll rem;
    while(true){
        rem = a % m;
        if (rem == 0){
            cout << "Yes" << endl;
            exit(0);
        }
        if(arr[rem] == 1){
            cout << "No" << endl;
            exit(0);
        }
        a += rem;
        // cout << a << endl;
        arr[rem] = 1;
    }
}