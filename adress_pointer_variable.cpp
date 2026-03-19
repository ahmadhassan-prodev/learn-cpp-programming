#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr;
    ptr = &a;
    cout<<&a<<endl;
    cout<<ptr<<endl;// ptr is used to get the adress of variable
    cout<<*ptr;// *ptr is used to get the value of variable
    return 0;
}