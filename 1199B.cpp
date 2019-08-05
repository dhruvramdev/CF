#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    long double h,l,ans;
    cin >> h >> l;
    ans = (h+l) * (l - h);
    ans = ans / (long double ) 2  / h;
    std::cout << std::fixed;
    cout << setprecision(10) << ans << endl;
    
}