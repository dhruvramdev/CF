#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    long long int change25 = 0;
    long long int change50 = 0;

    int temp;
    int bill;
    for(int i = 0; i < n ; i++){
        cin >> temp;
        bill = temp;
        temp -= 25;

        if(temp == 75){
            if(change50 >= 50){
                change50 -= 50;
                temp -= 50;
                if (change25 >= 25){
                    change25 -= 25;
                    temp -= 25;
                }
            } else {
                 if (change25 >= 75){
                    change25 -= 75;
                    temp -= 75;
                }
            }
        } else if(temp == 25) {
            if (change25 >= 25){
                change25 -= 25;
                temp -= 25;
            }
        }

        if(temp > 0){
            cout << "NO" << endl;
            return 0;
        }

        if(bill == 25){
            change25 += 25;
        } else if(bill == 50){
            change50 += 50;
        }
    }

    cout << "YES" << endl;
    return 0;


}