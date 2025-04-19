#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
ofstream file;
file.open("student.txt");
cout<<"Enter your name"<<endl;
getline(cin,name);
file<<"Name:"<<name<<endl;
file.close();


return 0;
}

