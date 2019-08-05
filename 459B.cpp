#include <iostream>
#include <unordered_map>

using namespace std; 
int main(){

    int n;
    long long int temp, max, min;
    unordered_map <long long int, long long int> mp;

    cin >> n;
    cin >> temp;
    max = temp;
    min = temp;
    mp[temp] = 1;

    for(int i = 1 ; i < n ; i++){
        cin >> temp;
        if(temp < min){
            min = temp;
        } else if(temp > max) {
            max = temp;
        }
        if ( mp.find(temp) == mp.end() ) {
            mp[temp] = 1;
        } else {
            mp[temp]++;
        }
    }

    // for(auto &elem : mp){
        // cout << elem.first << " " << elem.second << endl;
    // }

    if( max == min ){
        long long int c = mp[max];
        cout << max - min << " " << (c * (c-1))/2 << endl;
    } else {
        long long int c = mp[max] * mp[min];
        cout << max - min << " " << c << endl;
    }

    

    return 0;
}