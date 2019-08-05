#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count7 = 0;
    int count4 = 0;
    
    int digits = n/7;
    while(digits * 4 <= n){
        for(int digitsOf4 = digits; digitsOf4 >=0 ; digitsOf4-- ){
           if( (digitsOf4 * 4 + (digits - digitsOf4) * 7) == n ){
               for(int i = 0 ; i < digitsOf4 ; i++){
                   cout << "4" ;
               }
               for(int i = 0 ; i < digits - digitsOf4 ; i++){
                   cout << "7" ;
               }
               cout << endl;
               return 0;
           } 
        }
        digits++;
    }
    cout << -1 << endl;
    return 0;

}