#include <iostream>
#include <algorithm>

using namespace std ;

int lcm(int a, int b){
    return (a*b)/(__gcd(a,b));
}

int  main(){
    int k,l,m,n,d;
    cin >> k >> l>>m>>n>>d;

    int count = 0;
    count += d/k;
    count += d/l;
    count += d/m;
    count += d/n;


    int lcm1 = lcm(k,l);
    int lcm2 = lcm(k,m);
    int lcm3 = lcm(k,n);

    int lcm4 = lcm(l,m);
    int lcm5 = lcm(l,n);

    int lcm6 = lcm(m,n);

    int lcm7 = lcm(lcm1 , m);
    int lcm8 = lcm(lcm4 , n);
    int lcm9 = lcm(lcm1 , n);
    int lcm10 = lcm(k , lcm6);

    int lcm11 = lcm(lcm1 , lcm6);

    count -= d/lcm1;
    count -= d/lcm2;
    count -= d/lcm3;
    count -= d/lcm4;
    count -= d/lcm5;
    count -= d/lcm6;
    count += d/lcm7;
    count += d/lcm8;
    count += d/lcm9;
    count += d/lcm10;
    count -= d/lcm11;

    cout << count;
}
