#include<iostream>
using namespace std;

int main(){
    int n; int factorial = 1;
    cout<<"Enter the number for factorial"<<endl;
    cin>>n;
    for(int i=1; i != n+1; i++){
        factorial *= i;
    }
    cout<<"The factorial of "<<n<<" is "<<factorial;
    return 0;
}