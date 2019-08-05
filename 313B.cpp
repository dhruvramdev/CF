#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

    string input;
    cin >> input;
    int n = input.length();
    int arr[n] = {0};

    int cSum = 0;
    for(int i = 0; i < n; i++){
        arr[i] = cSum;
        if(input[i] == input[i+1]){
            cSum += 1;
        }
    }
    
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int k;
    cin >> k;
    int l,r;

    for(int i = 0 ; i < k ; i++){
        cin >> l >> r;
        l--;
        r--;
        cout << arr[r] - arr[l] << endl;
    }
    
}