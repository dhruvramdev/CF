#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    int arr[n];
    int distinct[n];
    int counter[100000 + 1] = {0};

    int currentDistinct = 0;
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = n - 1; i >=0 ; i--){
        if(counter[arr[i]] == 0){
            currentDistinct++;
            counter[arr[i]] = 1;
        }
        distinct[i] = currentDistinct;
    }
    int temp;
    for(int i = 0 ; i < m ; i++){
        cin >> temp;
        cout << distinct[temp-1] << endl;

    }

    

}