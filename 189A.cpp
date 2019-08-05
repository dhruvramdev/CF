#include <iostream>
using namespace std;

int main(){

    int n,a,b,c;
    cin >> n >> a >> b >> c;

    int arr[n+1];
    for(int i = 0 ; i < n+1 ; i++){
        arr[i] = 0;
    }
    arr[a] = 1;
    arr[b] = 1;
    arr[c] = 1;


    int index;
    for(int i = 1 ; i <= n ; i ++){
        index = i - a;
        if(index >= 0 && (arr[index] != 0) && (arr[i] < arr[index] + 1)){
            arr[i] = arr[index] + 1;
        }
        
        index = i - b;
        if(index >= 0 && (arr[index] != 0) && (arr[i] < arr[index] + 1)){
            arr[i] = arr[index] + 1;
        }
        
        index = i - c;
        if(index >= 0 && (arr[index] != 0) && (arr[i] < arr[index] + 1)){
            arr[i] = arr[index] + 1;
        }
    }
    
    // for(int i = 0; i <= n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    cout << arr[n] << endl;
}