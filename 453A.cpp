#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int faces,n;
    cin >> faces>> n;

    double prob = 0; 
    double a = 0;
    for(double i = 1 ; i <= faces ; i++){
        prob += i * (pow(i/faces ,n ) - pow((i-1) / faces , n ));
    }
    cout << prob;
}