#include <iostream>

using namespace std;

int main(){
    long long int a;
    cin >> a;
    if(a> 0){
        cout << a;
    } else {
        if(a <= -100){
            int lastDigit = -a % 10;
            int secondLastDigit = (-a / 10) % 10;
            cout << a / 100 << ((lastDigit < secondLastDigit) ? lastDigit : secondLastDigit);
        } else if(a < -10) {
            int lastDigit = -a % 10;
            int secondLastDigit = (-a / 10) % 10;
            cout << ((lastDigit != 0 && secondLastDigit != 0) ? "-" : "") <<((lastDigit < secondLastDigit) ? lastDigit : secondLastDigit);
        } else {
            cout << 0;
        }

    }


}