#include<iostream>
using namespace std;

int main(){
    int naturalNumber;
    cout<<"Enter the number"<<endl;
    cin>>naturalNumber;
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i != naturalNumber+1);
    return 0;
}