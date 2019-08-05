#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h,m;
    int lasth , lastm;
    cin >> lasth >> lastm;
    int cashes = 1;
    int cashesCurrent = 1;
    for(int i = 1 ; i < n ;i++){
        cin >> h >> m;
        if(h == lasth && m == lastm){
            cashesCurrent++;
            if(cashesCurrent > cashes){
                cashes = cashesCurrent;
            }
        } else {
            cashesCurrent = 1;
        }
        lasth = h;
        lastm = m;
    }
    cout << cashes << endl;

}