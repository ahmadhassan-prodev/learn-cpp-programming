#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int divisibilty_check;
    divisibilty_check = number%97;// % is used as a reminder
    if(divisibilty_check == 0){
        cout<<"Given number is divisible by 97";
    }
    else{
        cout<<"Given number is not divisible by 97";

    }
    return 0;
}