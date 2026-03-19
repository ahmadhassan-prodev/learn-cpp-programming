#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int number;
    int guess;
    int nofguess;
    srand(time(0));
    number = rand()%100 + 1;
    while(guess!=number){
    cout<<"Guess the number between 1 and 100"<<endl;
    cin>>guess;
    if(guess<number){
        cout<<"Higher number please!"<<endl;
    }
    else if(guess>number){
        cout<<"Lower number please!"<<endl;
    }
    else{
        cout<<"You guessed the corect number!"<<endl;
    }
    nofguess++;
    }
    cout<<"No of attempts = "<<nofguess;
    return 0;
}