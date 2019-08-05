#include <iostream>
using namespace std;

int main(){
    unsigned long long int y , k , n;
    cin >> y >> k >> n;

    unsigned long long int temp;
    temp = y / k;
    temp += 1;
    temp *= k;

    int found = 0;
    while(temp <= n){
        found = 1;
        cout << temp - y << " ";
        temp += k;
    }
    if(found == 0){
        cout << -1 ;
    }
}
