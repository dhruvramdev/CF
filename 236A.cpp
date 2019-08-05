#include <iostream>
#include <string>

using namespace std;

int main(){

    int arr[26];

    for(int i = 0 ; i < 26 ; i++){
        arr[i] = 0;
    }

    string str;
    cin >> str;

    for(char& c : str)
    {
        /* code */
            int index = c - 'a';
            arr[index] = 1;
    }
    
int noOfOne = 0;
            for(int i = 0 ; i < 26 ; i++){
                if(arr[i] == 1){
                    noOfOne++;
                }
            }
            if(noOfOne % 2 == 0){
                cout << "CHAT WITH HER!" ;
            } else {
                cout << "IGNORE HIM!";
            }
            return 0;

}