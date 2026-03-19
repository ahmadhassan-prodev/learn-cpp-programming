#include<iostream>
using namespace std;

class Employee
{
    private:
    int code, salary, age;
    public:
    string name, car;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"The name of employee is "<<name<<endl;
        cout<<"The car status of employee is "<<car<<endl;
        cout<<"The salary of employee is "<<salary<<endl;
        cout<<"The code of employee is "<<code<<endl;
        cout<<"The age of employee is "<<age<<endl;
    }
};
void Employee :: setData(int a1, int b1, int c1){
    code = a1;
    salary = b1;
    age = c1;
}
int main(){
    Employee Ahmad;
    Ahmad.name = "Ahmad Hassan";
    Ahmad.car = "No";
    Ahmad.setData(101, 100, 21);
    Ahmad.getData();
    return 0;
}