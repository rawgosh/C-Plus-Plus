#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter a number :";
    cin >> num1;
    bool var1=true;
    bool var2=false;
    if(var1)
    {
        cout << "This code ran."<< endl;
    }
    
    if(num1>3)
    {
        cout << "It is greater than 3.";
    }
    else if(num1<3)
    {
        cout << "It is less than 3.";
    }
}