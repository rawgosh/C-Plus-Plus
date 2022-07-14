#include<iostream>
using namespace std;
string print_name(string name)
{
    return name;
}
int get_age(int x)
{
    return x;
}
int main()
{
    string name;
    int age;
    cout << "Enter a name: ";
    cin >> name;
    cout << "Enter a age: ";
    cin >> age;
    cout << "Your name is " << print_name(name)<< " and you are "<< get_age(age)<< " years old.";
}