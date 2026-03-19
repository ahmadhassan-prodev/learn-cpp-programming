#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int number1;
    srand(time(0));
    number1 = rand()%100+1;
    
    return 0;
}