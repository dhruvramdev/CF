#include<iostream>

using namespace std;

int main(){

    int n ;
    cin >> n;
    int arr[n];
    int current = 0;
    int maxm = 0;
    int temp;
    int globalcount = 0;
    int curStart = 0 ,start = 0 , end = 0;

    for(int i = 0 ; i < n ;i++){
        cin >> temp;
        arr[i] = temp;
        current += temp == 1 ? -1 : 1;
        globalcount += temp;
        if(current < 0){
            current = 0;
            curStart = i + 1; 
        }
        if(current > maxm){
            maxm = current;
            start = curStart;
            end = i;
        }
    }
    // cout << globalcount << endl;
    // cout << maxm << endl;
    int ones = 0;
    for(int i = start; i <= end; i++){
        ones += arr[i];
    }

    // cout << start << " " << end << endl;
    // cout << globalcount << endl;
    
    if(globalcount == n){
        cout << globalcount - 1;
    } else {
        cout << maxm + globalcount;
    }


}