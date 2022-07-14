#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter a letter grade :";
    cin >> grade;
    switch (grade)
    {
        case 'A':
        {
            cout << "You made a 90 or above." << endl;
            break;
        }
        case 'B':
        {
            cout << "You made a 80 or above." << endl;
            break;
        } 
        case 'C':
        {
            cout << "You made a 70 or above." << endl;
            break;
        }
        case 'F':
        {
            cout << "You failed." << endl;
            break;
        }
        default:
        cout << "Invalid letter.";
    }
}