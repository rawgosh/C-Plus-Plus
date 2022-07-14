#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    const int SIZE = 11;
    string names_list[SIZE];
    string temp;
    int index = 0; 
    ifstream input_file("input.txt");
    if(!input_file)
    {
        cout << "File not found." << endl;
        return -6;
    }  
    input_file.ignore(255,'\n');
    // Pre-read 
    getline(input_file,temp);
     // input_file >> temp;
    while(!input_file.eof())
    {
        names_list[index] = temp;
        index++;
            // Post read
        getline(input_file,temp);
        // input_file >> temp;
    }
    for(int i = 0; i < SIZE; i++)
    {
        cout << names_list[i] << endl;
    }
    cout << "This is a Quote: " << "\"Quote\"" << endl;
    cout << left << setprecision(2) << fixed;
    double d = 326.352;
    int integer = 256;
    cout << d << endl;
    cout << setw(25) << d << setw(25) << integer << endl; // it requires header<iomanip>
}