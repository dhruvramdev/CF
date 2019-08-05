#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* 
4
2 3 4 8

8
2 5 7 6 9 8 4 2
*/

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for(int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int k = n-1, i =n-1;
    int count = 0;
    while(k >= 0 && i >= 0 ){
        if(arr[i] == -1){
            i--;
            continue;
        }
        while(k >= 0 && arr[i] < 2 * arr[k] ){
            k--;
        }
        if(k >= 0){
            cout << "Putting " << arr[k] << " at " <<  k << " in " << arr[i] << " at index " <<  i << endl;
            arr[k] = -1;
            // arr[i] = -1;

            count++;
            i--;
            k--;
        }
        
    }

    for(int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << n - count << endl;
}