#include <iostream>
using namespace std;

int main (){
    long long int n , l , r;
    cin >> n;

    int maxFound  = true;
    cin >> l >> r;
    int maxSegment = 1;

    long long int cl = l , cr = r ;

    for(int i = 1; i < n ; i++){
        cin >> l >> r;
        
        if(l <= cl && r >= cr){
            cl = l;
            cr = r;
            maxFound = true;
            maxSegment = i + 1;
            // cout << "New : " << l << " " << r << endl; 
        } else {
            if(l < cl){
                cl = l;
                maxFound = false;
            } else if ( r > cr ){
                cr = r;
                maxFound = false;
            }
        }
    }

    cout << (maxFound ? maxSegment : -1) << endl;


}
