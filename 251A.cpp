#include <iostream>

using namespace std;

int main(){
    long long int n,d;
    cin >> n >> d;

    long long int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    if(n < 2 || d < 2){
        cout << 0 << endl;
        return 0;
    }

    long long int counter=0;
    long long int maxElem;
    for(int i = 0 ; i < n; i++){
       maxElem = arr[i] + d;
       auto iter = lower_bound(arr + i, arr+n, maxElem);
       
       long long int diffElement = iter - (arr+i);
       if(iter == arr+n || *iter > maxElem){
           diffElement -= 1;
       }
    //    cout << *iter << endl;
    //    cout << arr[i] << " " << diffElement << " " << maxElem << " " << (diffElement * (diffElement-1)) / 2 << endl;
       if(diffElement > 0){
           counter += (diffElement * (diffElement-1)) / 2;
       }
    



        
    }
    cout << counter << endl;

}
