#include <iostream>
#include <bits/stdc++.h>

using namespace std ;

int  main(){
    int n , k ;
    cin >> n >> k ;

    int count = 0  , temp;
    for(int i = 0 ; i < n ; i++){
        cin >> temp ;
        if(temp <=  5 - k){
            count++ ;
        }
    }

    cout << (count)/3 ;

}
