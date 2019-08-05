#include <bits/stdc++.h>
#include <iostream>

using namespace std; 

int main(){
    uint64_t n ;
    cin >> n ;

    int luckyCount = 0 ;
    while(n>0){
        int res = n %10 ;
        n = n /10 ;
        if(res == 4 || res ==7 ){
            luckyCount++ ;
        }
    }
    
    if(luckyCount == 4 || luckyCount == 7){
        cout << "YES" << endl ;
    } else {
        cout << "NO" << endl ;
    }
}