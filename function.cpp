#include<iostream>
using namespace std;
void print_hello()
{
    cout << "HELLO WORLD" << endl;
}
double get_age()
{
    double age = 17;
    return age;
}
string get_name()
{
    return "Ragosh";
}
int main()
{
    print_hello();
    cout << get_name() << " is "<< get_age() << " years old." << endl;
}