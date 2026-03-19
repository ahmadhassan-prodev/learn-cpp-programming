#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number for multiplication table"<<endl;
    cin>>number;
    cout<<"Muitiplication table of "<<number<<" is as follows:"<<endl;
    for(int i=1; i<11 ; i++){
    cout<<number<<" X "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}