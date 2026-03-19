#include<iostream>
#include<string>// It is used to use the functions of string
using namespace std;

int main(){
    string name = "Ahmad";
    // writing 'string' is used to make a string
    cout<<"The name is "<<name;
    cout<<"The name is "<<name.length()<<endl;// This is used to get the length of string
    cout<<"The name is "<<name.substr(0,3)<<endl;// This is used to print the selected part of string
    cout<<"The name is "<<name.substr(2,3)<<endl;
    return 0;
}