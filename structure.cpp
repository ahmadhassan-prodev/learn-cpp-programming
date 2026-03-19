#include<iostream>
using namespace std;
typedef struct employee{
    string name;
    int salary;
    int code;
}(emp);
void display(emp c){
    cout<<"The name of employee is "<<c.name<<endl;
    cout<<"The salary of employee is "<<c.salary<<endl;
    cout<<"The code of employee is "<<c.code<<endl;
    

}
int main(){
    emp e1;
    e1.name = "Ahmad Hassan";
    e1.salary= 100;
    e1.code= 101;
    display(e1);
    return 0;
}