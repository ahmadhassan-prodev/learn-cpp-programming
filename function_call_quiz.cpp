#include<iostream>
using namespace std;
void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    cout<<"Good morning Ahmad!"<<endl;
    goodafternoon();
}
void goodafternoon(){
    cout<<"Good afternoon Ahmad!"<<endl;
    goodnight();
}
void goodnight(){
    cout<<"Good night Ahmad!"<<endl;
}