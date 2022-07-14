#include<iostream>
using namespace std;
int main()
{
    const int SIZE=3;
    string grocery_list[SIZE]={"eggs","milk","bread"};
    for(int index = 0; index < SIZE; index++)
    {
        cout << grocery_list[index] << endl;
    }
}