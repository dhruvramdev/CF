#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n ;
    cin >> n ;
    
    int matrix[n][n] ;

    long long int d1[2*n] = {0} ;
    long long int d2[2*n] = {0};
    long long int money_sum = 0;
    
    long long int val[2] = {0,0};
    int sol[2][2] = {1,1,1,2} ;

    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++) {
            cin >> matrix[i][j] ;
    
            d1[i+j] += matrix[i][j] ;
            d2[i-j+n] += matrix[i][j] ;  

        }       

    }

    // for(int i = 0 ; i < 2* n ; i++){
    //     cout << d1[i] <<" " ;
    // }
    // cout << endl ;
 
    // for(int i = 0 ; i < 2* n ; i++){
    //     cout << d2[i] <<" " ;
    // }
    // cout << endl ;

    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++) {

            money_sum = d1[i+j] + d2[i-j+n] - matrix[i][j] ;

            // cout << i << " " << j << endl ;
            // cout << money_sum  << endl;
            
            if(money_sum > val[(i+j)&1]){
                val[(i+j)&1] = money_sum ;
                sol[(i+j)&1][0] = i+1 ;
                sol[(i+j)&1][1] = j+1 ;
            }
            
        }
    }

    cout << val[0] + val[1] << endl ;
    cout << sol[0][0] << " " << sol[0][1] << " " << sol[1][0] << " " << sol[1][1] << endl ;

    return 0;

}