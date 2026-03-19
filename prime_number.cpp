#include<iostream>
using namespace std;

int main(){
    int n, i=2; int prime;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(i<n){
        if(n%i==0){
            prime = 0;
            break;
        }
        i++;
    }
    if(prime==0){
        cout<<"Entered number is not prime";
    }
    else{
        cout<<"Entered number is prime";
    }
    return 0;
}