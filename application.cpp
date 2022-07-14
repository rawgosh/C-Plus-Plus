#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    cout << left ;
    string employee_name;
    int employee_salary;
    ifstream employee_file("employe.txt");
    if(!employee_file)
    {
        cout << "Employee text file not found.\n";
    }
    cout << "\tHUMAN RESOURCES PAYROLL LIST\n\n";
    cout << setw(30) << "FULL NAME" << "SALARY" << "\n";
    employee_file.ignore(255,'\n');
    employee_file.ignore(255,'\n');
    // Pre-read
    getline(employee_file, employee_name,'_');
    employee_file >> employee_salary;
    while(!employee_file.eof())
    {
    cout << setw(25) << employee_name << employee_salary << endl;
    //Post-Read
    getline(employee_file,employee_name,'_');
    employee_file >> employee_salary;
    }
}