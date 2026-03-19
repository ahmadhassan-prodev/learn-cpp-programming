#include<iostream>
using namespace std;

class Employee{
    private:
    int salary;
    int code;
    int age;
    public:
    string name;
    string car;
    void setData(int s, int c, int a);
    void getData(){
        cout<<"The name of employee is "<<name<<endl;
        cout<<"The age of employee is "<<age<<endl;
        cout<<"The code of employee is "<<code<<endl;
        cout<<"The allotment of car for employee is "<<car<<endl;
        cout<<"The salary of employee is "<<salary<<endl;
    }
};
void Employee :: setData(int s, int c, int a){
    salary = s;
    code = c;
    age = a;
}
int main(){
    Employee Ahmad;
    Ahmad.name = "Ahmad Hassan";
    Ahmad.car = "Yes";
    Ahmad.setData(200, 52, 20);
    Ahmad.getData();
    return 0;
}