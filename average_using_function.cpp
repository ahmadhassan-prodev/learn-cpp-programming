#include<iostream>
using namespace std;
float average(int a, int b, int c){
    float avg = (float)(a+b+c)/3;
    return avg;
    }
int main(){
    int a = 10;
    int b = 15;
    int c = 30;
    cout<<average(a,b,c);
    return 0;
}