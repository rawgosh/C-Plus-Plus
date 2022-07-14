#include<iostream>
using namespace std;
int main()
{
    int choice;
    double num1, num2;
    cout << "1.) Addition "<< endl;
    cout << "2.) Subtraction "<< endl;
    cout << "3.) Multiplication "<< endl;
    cout << "4.) Division "<< endl;
    cout << "Enter a choice :";
    cin >> choice;
    switch(choice)
    {
        case 1:
        {
            cout << "Enter number 1 :";
            cin >> num1;
            cout << "Enter number 2 :";
            cin >> num2;
            cout << endl <<endl;
            cout << "ADDITION = " << num1+num2;
            break;
        }
        case 2:
        {
            cout << "Enter number 1 :";
            cin >> num1;
            cout << "Enter number 2 :";
            cin >> num2;
            cout << endl <<endl;
            cout << "SUBTRACTION = " << num1-num2;
            break;
        }
        case 3:
        {
            cout << "Enter number 1 :";
            cin >> num1;
            cout << "Enter number 2 :";
            cin >> num2;
            cout << endl <<endl;
            cout << "MULTIPLICATION = " << num1*num2;
            break;
        }
        case 4:
        {
            cout << "Enter number 1 :";
            cin >> num1;
            cout << "Enter number 2 :";
            cin >> num2;
            cout << endl <<endl;
            cout << "DIVISION = " << num1/num2;
            break;
        }
        default:
            cout << "Something went wrong.";
    }
}