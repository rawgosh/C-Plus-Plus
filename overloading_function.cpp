#include<iostream>
#include<iomanip>
using namespace std;
void print_salary(int);
void print_salary(float);
void print_salary(string);
int main()
{
    cout << setprecision(4) << fixed;
    float salary;
    cout << "Enter your salary: ";
    cin>> salary;
    print_salary(salary);
}
void print_salary(int x)
{
    cout << endl << "Your salary is " <<x << endl;
}
void print_salary(float x)
{
    cout << endl << "Your salary is " <<x << endl;
}
void print_salary(string x)
{
    cout << endl << "Your salary is " <<x << endl;
}