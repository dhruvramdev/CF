#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long int r,g,b;

    cin >> r >> g >> b;

    long long int m = std::min(r, std::min(g,b));
    long long int count = 0;
    r -= m;
    g -= m;
    b -= m;

    count += m;
    count += r/3;
    count += g/3;
    count += b/3;

    r = r % 3;
    g = g % 3;
    b = b % 3;

    if ((r + g + b) == 4 && m != 0){
        count += 1;
    }

    cout << count << endl;
}