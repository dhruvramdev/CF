#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    int t, goal[151], fouls[151], maxi = 0;
    cin >> t;
    int n, currGoal;
    for(int i = 0 ; i < t; i++){
        cin >> n;
        maxi = 0;
        for(int j = 0 ; j < n ; j++){
            cin >> goal[j];
        }
        for(int j = 0 ; j < n ; j++){
            cin >> fouls[j];
        }
        for(int j = 0 ; j < n ; j++){
            currGoal = goal[j] * 20 - fouls[j] * 10;
            if(currGoal > maxi){
                maxi = currGoal;
           }
        }

        cout << maxi << endl;
        
    }
    

}