#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n+1 , 0);

    int temp ;
    for(int i = 0 ; i < n ; i++ ){
        cin >> temp;
        if(temp <= n){
            arr[temp] = 1;
        }
    }

    int one_count = 0;
    for(int i = 1 ; i <= n ; i++){
        one_count += arr[i];
    }

    cout << n - one_count ;





}