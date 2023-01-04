#include <fstream>
#include <iostream>
using namespace std;
int main ()
{
   char name[50];

   ofstream ofile;                               // open a file in write mode.
   ofile.open("abc.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "<<endl;
   cin.getline(name, 50);
   cout<<endl;
   ofile << name << endl;            // write inputted data into the file.
   ofile.close();                              // close the opened file.

   ifstream ifile;                           // open a file in read mode.
   ifile.open("abc.dat");

   cout << "Reading from the file" << endl;
   ifile >> name;

   cout << name << endl;      // write the data at the screen.
   
   ifile.close();                       // close the opened file.

   return 0;
}