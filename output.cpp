#include<iostream>
#include<fstream> // file stream.
using namespace std;
int main()
{
    ofstream output_file("output.txt"); //output filestream.
     if(!output_file)
     {
         cout << "The file could not be found" << endl;
         return 9;
     }
    string name="Ragosh";
    output_file << name; //takes alot of brain to understand.
    //used to store data in different extension files.
}