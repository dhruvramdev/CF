#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
    ll int n,r,avg;
    
    cin >> n >> r >> avg;

    ll int t1 ,t2;
    ll int sum = 0;

    vector<pair<ll int, ll int>> vec;
    for(ll int i = 0; i < n ; i++){
        cin >> t1 >> t2;
        if(t1 != r){
            vec.push_back(make_pair(t2, r - t1));
        }
        sum += t1;
    }

    ll int diff = avg * n - sum;
    // cout << diff << endl;
    ll int essays = 0;
    if(diff > 0){
        sort(vec.begin() , vec.end());
        // for(auto &elem : vec){
            // cout << elem.first <<  " " << elem.second << endl;
        // }
        ll index = 0;
        while(diff > 0){
            if( diff > vec[index].second){
                diff -= vec[index].second;
                essays += vec[index].first * vec[index].second;
            } else {
                essays += vec[index].first * diff;
                diff = 0;
            }
            index++;
        }

        cout << essays << endl;


    } else {
        cout << 0 << endl;
    }

}