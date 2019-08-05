#include <iostream>
using namespace std;
int arr[1000][1000];

// TLE even after this

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin >> n >> m >> k;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }

    char c;
    int l, r;

    int rowOrder[n];
    for(int i = 0 ; i < n; i++){
        rowOrder[i] = i;
    }

    int colOrder[m];
    for(int i = 0 ; i < m; i++){
        colOrder[i] = i;
    }

    int temp;

    for(int i = 0 ; i < k ; i++){
        cin >> c >> l >> r;
        l--;
        r--;
        if (c == 'g'){
            cout << arr[rowOrder[l]][colOrder[r]] << endl;
        } else if( c == 'r'){
            temp = rowOrder[r];
            rowOrder[r] = rowOrder[l];
            rowOrder[l] = temp;
        } else if( c == 'c'){
            temp = colOrder[r];
            colOrder[r] = colOrder[l];
            colOrder[l] = temp;
        }
    }

}

