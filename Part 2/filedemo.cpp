#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("student.txt");
   cout<<"Enter your information:";
   getline(cin,name);
   file<<name;
    file.close();
    return 0;
}
