#include <iostream>
using namespace std;

int main()
{
    int subject1;
    int subject2;
    int subject3;
    cout << "Enter the marks of subject 1" << endl;
    cin >> subject1;
    cout << "Enter the marks of subject 2" << endl;
    cin >> subject2;
    cout << "Enter the marks of subject 3" << endl;
    cin >> subject3;
    float total = (float)(subject1 + subject2 + subject3) / 3;
    if (total >= 40 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33)
    {
        cout << "Student is pass";
    }
    else
    {
        cout << "Student is fail";
    }
    return 0;
}