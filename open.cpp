#include<iostream>
using namespace std;

int main(){
    int number;
    int factorial = 1;
    cout<<"Enter the number"<<endl;
    cin>>number;
    for(int i=1; i<number + 1; i++){
        factorial *=i;
    }
    cout<<"The factorial of "<<number<<" is "<<factorial;
    return 0;
}