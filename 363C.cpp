#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string input;
    cin >> input;

    pair<char, int>  c;
    pair<char, int>  last;
    last.first = 'A';

    c.first = input[0];
    c.second = 1;
    cout << c.first ;

    for(int i = 1 ; i < input.length(); i++){
        if(input[i] == c.first){
            if(last.first != 'A'){
                if(last.second == 2){
                    if(c.second < 1){
                        cout << c.first;
                        c.second ++;
                    }
                } else {
                    if(c.second < 2){
                        cout << c.first;
                        c.second ++;
                    }
                }
            } else {
                if(c.second < 2){
                        cout << c.first;
                        c.second ++;
                }
            }
        } else {
            last = c;
            c.first = input[i];
            c.second = 1;
            cout << c.first ;        
        }
    }

}