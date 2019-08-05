#include <iostream>
using namespace std;

int graph[1001][1001] = {0};
int minX = 1001;
int maxX = 0;
int minY = 1001;
int maxY = 0;

void transverse_graph(int x, int y){
    graph[x][y] = 0;
    for( int i = x + 1 ; i <= maxX ; i++){
        if(graph[i][y] == 1){
            transverse_graph(i,y);
        }
    }
    for( int i = x - 1 ; i >= minX ; i--){
        if(graph[i][y] == 1){
            transverse_graph(i,y);
        }
    }
    for( int i = y + 1 ; i <= maxY ; i++){
        if(graph[x][i] == 1){
            transverse_graph(x,i);
        }
    }
    for( int i = y - 1 ; i >= minY ; i--){
        if(graph[x][i] == 1){
            transverse_graph(x,i);
        }
    }
}

int main(){
    int n;
    cin >> n;
    int count = 0;
    int x,y;
    for(int i = 0; i < n ; i++){
        cin >> x >> y;
        graph[x][y] = 1;
        if(x < minX){
            minX = x;
        } 
        if(x > maxX){
            maxX = x;
        }
        if(y < minY){
            minY = y;
        } 
        if(y > maxY){
            maxY = y;
        }
    }

    // for(int i = minX ; i <= maxX; i++){
    //     for(int j = minY; j <= maxY; j++){
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    for(int i = minX ; i <= maxX; i++){
        for(int j = minY; j <= maxY; j++){
            if(graph[i][j] == 1){
                // cout << i << " " << j << " " << graph[i][j] << endl;
                transverse_graph(i,j);
                count++;
            }
        }
    }

    cout << count - 1 << endl;


}