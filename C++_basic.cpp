#include<iostream>
using namespace std;

int main(){
    short a;// it is smallest integr
    int b;// normal integer
    long c;// long integer
    float d;// for decimal number
    double e;// has more precition
    long double f;// has more precition
    int h=10;
    // we can re assine the value of h
    cout<<h<<endl;
    // but if we add const in int then its value becomes constant
    int const j=20;
    // j=30; it shows error because we has already fixed the value of j
    cout<<j;

    return 0;
}