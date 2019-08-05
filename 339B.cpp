#include <iostream>

using namespace std;

int main(){
    unsigned long long int n,m,temp;

    cin >> n >> m ;
    unsigned long long int currentHouse = 1;
    unsigned long long int totalHops = 0;
    for (int i = 0 ; i < m ; i++){
        cin >> temp;
        if(temp < currentHouse){
            totalHops += n + temp - currentHouse;
        } else {
            totalHops += temp - currentHouse;
        }
        currentHouse = temp;
    }
    cout << totalHops;
}