#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "Enter a number : ";
    cin >> num1;
    cout << "Enter another number : ";
    cin >> num2;
    int difference;
    difference = num1 * num2;
    cout << "The product between two number is " << difference << endl;
    cout << "We can add it as " << num1+num2 << endl;
}