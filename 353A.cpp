#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    int lsum =0 , rsum  = 0;
    int ltemp, rtemp;
    int oddDiff = false;
    for(int i = 0 ; i < n ; i++){
        cin >> ltemp >> rtemp;
        lsum += ltemp;
        rsum += rtemp;
        arr[i] = abs(ltemp - rtemp);
        if(arr[i] % 2 != 0){
            oddDiff = true;
        }
    }

    if((lsum % 2 == 0) && (rsum % 2 == 0)){
        cout << 0 << endl;
    } else if ((lsum % 2 == 1) && (rsum % 2 == 1)){
        cout << (oddDiff ? 1 : -1) << endl;
    } else {
        cout << -1 << endl;
    }


}