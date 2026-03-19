#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int i=1; int sum = 0;
    while(i != number+1){
        sum +=i;
        i++;
    }
    cout<<"Sum of first "<<number<<" natural numbers is "<<sum;
    return 0;
}