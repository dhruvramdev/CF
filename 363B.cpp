#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cSum = 0;
    for(int i = 0 ; i < k ; i++){
        cSum += arr[i];
    }

    int minSum = cSum;
    int minIndex = 0;

    for(int i = k ; i < n; i++){
        cSum += (arr[i] - arr[i-k]);
        if(cSum < minSum){
            minSum = cSum;
            minIndex = i - k + 1;
        }
    }

    cout << minIndex + 1 << endl;


}