#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    int t;
    cin >> t;
    int arr[100000];
    int n;
    string s;
    bool flag;
    int start;
    for(int a = 0 ; a < t ; a++){
        cin >> s;
        n = s.length();
        for( int i = 0 ; i < n ; i++){
            arr[i] = s[i] == '1' ? 1 : 0; 
        }

        start = 0;
        flag = true;
        while(start < n){ 
            while(arr[start] == 0){
                start++;
            }
            if(start >= n){
                flag = false;
            } else {
                arr[start] = -1;
                arr[start +1 ] = arr[start+1] == 1 ? 0 : 1;
                start++;     
            }
        }
        if(flag == true){
            cout << "WIN" << endl;
        } else {
            cout << "LOSE" << endl;
        }
    }
}