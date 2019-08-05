#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int c[26] = {0};
    int index;

    for(int i = 0; i < s.length(); i++){
        index = s[i] - 'a';
        c[index] = (c[index] + 1) % 2;
    }

    int cCount = 0;
    for(int i = 0 ; i < 26 ; i++){
        cCount += c[i];
    }

    if(cCount > 0){
        cCount -= 1;
    }

    if(cCount % 2 == 0){
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }

}