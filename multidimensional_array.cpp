#include <iostream>
using namespace std;

int main()
{
    int marks[3][5];
    int students = 3;
    int subjects = 5;
    for(int i=0;i<students;i++){
        for(int j=0;j<subjects;j++){
            cout<<"Enter the marks of students "<<i+1<<" in subjects "<<j+1<<endl;
            cin>>marks[i][j];
        }
    }
    for(int i=0;i<students;i++){
        for(int j=0;j<subjects;j++){
            cout<<"The marks of students "<<i+1<<" in subjects "<<j+1<<" is "<<marks[i][j]<<endl;
            }
    }
    return 0;
}