#include <iostream>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;

    if(m > n){
        int temp = n;
        n = m ;
        m = temp;
    }

    int excess = n - m;
    int petya = m - 1 + excess ;
    int vasya = m;

    cout << petya << " " << vasya;


}