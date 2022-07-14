#include<iostream>
using namespace std;
void print_age( int &x);
void change_address(string &);// passinge memory address
int main()
{
    string my_address ="Nepal";
    cout << "Address before function call: "<< my_address<< endl;
    change_address(my_address);
    cout << "Address after function call: "<< my_address<< endl;
}
void change_address(string &address)
{
    address="Palungtar Gorkha";
}
void print_age(int &x)
{
    x=17;
    cout << x;
}