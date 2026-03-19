// #include<iostream>
// using namespace std;
// int factorial(int a);

// int main(){
//     int x = 4;
//     cout<<factorial(x);
//     return 0;
// }
// int factorial(int a){
//     if(a==1){
//         return 1;
//     }
//     else{
//         return a * factorial(a-1);
//     }
// }
#include<iostream>
using namespace std;
int factorial(int a){
    if(a==1){
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
}
int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    cout<<"Factorial of "<<number<<" is "<<factorial(number);
    return 0;
}