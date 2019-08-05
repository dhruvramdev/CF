#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

bool isPrime(long long int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int main(){
    int n;
    cin >> n;
    long long int temp;

    for(int i = 0; i < n ; i++){
        cin >> temp;
        long double sr = sqrt(temp); 
        bool pSquare = ((sr - floor(sr)) == 0); 
        if(pSquare){
            // cout << "Hello" << endl;
            if(isPrime(sr)){
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }


}