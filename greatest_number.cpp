#include<iostream>
using namespace std;

int main(){
    int number1;
    int number2;
    int number3;
    int number4;
    cout<<"Enter the number 1"<<endl;
    cin>>number1;
    cout<<"Enter the number 2"<<endl;
    cin>>number2;
    cout<<"Enter the number 3"<<endl;
    cin>>number3;
    cout<<"Enter the number 4"<<endl;
    cin>>number4;
    if(number1>number2 && number1>number3 && number1>number4){
        cout<<"The greatest number is "<<number1;
    }
    else if(number2>number1 && number2>number3 && number2>number4){
        cout<<"The greatest number is "<<number2;
    }
    else if(number3>number2 && number3>number1 && number3>number4){
        cout<<"The greatest number is "<<number3;
    }
    else{
        cout<<"The greatest number is "<<number4;
    }
    return 0;
}