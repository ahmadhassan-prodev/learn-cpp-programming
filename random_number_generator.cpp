#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    cout<<number;
    return 0;
}