#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 10000000 - n+1 ; i <= 10000000 ; i++){
        cout << i << " ";
    }
    cout << endl;
    

}