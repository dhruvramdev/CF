#include <iostream>
#include <vector>
#include <math.h>

#define ll long long

using namespace std;

void debug(vector<int> arr[], int n){
    for(int i=0; i <= n; i++){
        for(auto e : arr[i]){
            cout << e << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    int level = n;

    long long number = pow(2, n);
    vector<int> initial;
    ll tt;
    for(ll i = 0; i < number; i++){
        cin >> tt;
        initial.push_back(tt);
    }

    vector<int> arr[n+1];
    arr[n] = initial;
    number = number/2;
    level--;

    ll l;
    ll r;
    int oper;

    while(level >= 0){
        vector<int> temp;
        oper = (n - level) % 2;

        for(ll i = 0; i < number; i++){
            l = arr[level +1][2*i];
            r = arr[level +1][2*i + 1];

            if(oper == 1){
                temp.push_back( l|r );
            } else {
                temp.push_back( l^r );
            }
        }
        arr[level] = temp;
        number = number/2;
        level--;
    }

    // debug(arr, n);

    ll pos, item, parent;
    for(int i = 0 ; i < m ; i++){
        cin >> pos >> item;
        pos -= 1;

        level = n;
        arr[level][pos] = item;
        parent = pos/2;
        level--;
        while(level >= 0){
            oper = (n - level) % 2;
            l = arr[level +1][2*parent];
            r = arr[level +1][2*parent + 1];

            if(oper == 1){
                arr[level][parent] = l|r;
            } else {
                arr[level][parent] = l^r;
            }
            
            parent = parent/2;
            level--;
        }
        // debug(arr, n);
        cout << arr[0][0] << endl;
    }

}