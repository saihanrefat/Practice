#include<iostream>
using namespace std;
class code
{
    int id;
public:
    code(){}
    code(int a)
    {
        id = a;
    }
    code(code & x)
    {
        id = x.id;
    }
    void display(void)
    {
        cout<<id<<endl;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C=A;
    code D;
    D=A;
    cout<<"ID of A :";
    A.display();
    cout<<"ID of B :";
    B.display();
    cout<<"ID of C :";
    C.display();
    cout<<"ID of D :";
    D.display();
}
