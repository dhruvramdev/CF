#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long int arr[n];

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    long long int diff = 0;
    for(long long int i = 0; i < n ;i++){
        // cout << diff << " " << arr[i] << endl;
        diff += abs(arr[i] - i - 1);
    }

    cout << diff << endl;
    
}