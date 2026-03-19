#include<iostream>
using namespace std;

class Automobile{
    private:
        int model;
        int registrationNo;
        string owner;
    public:
    string tax;
    string name;
    int lasttaxpaid;
    void setData(string o, int m, int r);
    void getData(){
        cout<<"The name of car is "<<name<<endl;
        cout<<"The owner of car is "<<owner<<endl;
        cout<<"The model of car is "<<model<<endl;
        cout<<"The Registration no of car is "<<registrationNo<<endl;
        cout<<"The tax status of car is "<<tax<<endl;
        cout<<"The last tax paid for car is "<<lasttaxpaid<<endl;
    }
};
void Automobile :: setData(string o, int m, int r){
    owner = o;
    model = m;
    registrationNo = r;
}
int main(){
    Automobile car;
    car.name = "Mehran";
    car.tax = "paid!";
    car.lasttaxpaid = 1000;
    car.setData("Ahmad Hassan",2007,7611);
    car.getData();
    return 0;
}