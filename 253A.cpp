#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int n,m;

    cin >> n >> m;

    int smallNumber = (n < m) ? n : m;
    int largeNumber = n + m - smallNumber;
    
    char smallChar = (n < m) ? 'B' : 'G';
    char largeChar = (n < m) ? 'G' : 'B';

    for(int i = 0 ; i < smallNumber ; i++){
        cout << largeChar << smallChar;
    }

    for(int i= 0; i < largeNumber - smallNumber; i++){
        cout << largeChar;
    }
    cout << endl;

}