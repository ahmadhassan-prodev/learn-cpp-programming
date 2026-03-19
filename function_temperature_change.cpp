#include<iostream>
using namespace std;
float fehrenhiet(int a){
    return (a * (float)9/5) + 32;
}
int main(){
    int celcius;
    celcius=37;
    cout<<fehrenhiet(celcius);
    return 0;
}