#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int generate_random_number();
int main()
{
    return generate_random_number();
}
int generate_random_number()
{
    srand(time(NULL));
    int number = rand()%200+1;
    cout << number;
    return number;
}
