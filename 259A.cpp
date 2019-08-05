#include<iostream>
#include<string>

using namespace std;

int main(){

    string temp;
    for(int i = 0 ; i < 8 ; i++){
        cin >> temp;
        if(temp != "BWBWBWBW" && temp != "WBWBWBWB"){
            cout << "NO" ;
            return 0;
        }
    }
    cout <<  "YES";
    return 0;




}