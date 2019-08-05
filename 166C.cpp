#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int medIndex = (n+1)/2;
    medIndex -= 1;

    int t;

    // for(int i = 0 ; i < n ; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // cout << x << endl;
    // cout << medIndex << endl;


    if(arr[medIndex] == x ){
        cout << 0 << endl;
    } else if(arr[medIndex] > x){
        auto i = upper_bound(arr, arr+medIndex, x);
        t = i - arr;
        // cout << "Upper Bound Index : " << t << endl;
        cout << n - 2*t << endl;
    } else {
        auto i = lower_bound(arr+medIndex, arr+n, x);
        t = i - arr;
        // cout << "Lower Bound Index : " << t << endl;
        cout << (t - (n - t - 1)) << endl;
    }

}