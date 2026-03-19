#include<iostream>
using namespace std;
class Employee
{
    public:
    string name;
    int salary;
    Employee(string name, int salary){// making constructor for a class.
        this->name = name;
        this->salary = salary;
    }
    void printDetails(){
        cout<<"The name of our employee is "<<this->name<<" and his salary is "<<this->salary<<" Dollars"<<endl;
    }
};

int main(){
    Employee Ahmad("Ahmad Hassan", 300);
    // Ahmad.name = "Ahmad Hassan";
    // Ahmad.salary = 300;
    Ahmad.printDetails();
    Employee Ali("Ali Nawaz", 200);
    Ali.printDetails();
    return 0;
}