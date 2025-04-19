#include<bits/stdc++.h>
using namespace std;
class circle
{
private:
   double radius;
public:

        void setradius(int r)
        {
            radius=r;
        }
        double getarea();
        double getdiameter();
        double getcircumference();
};
double circle :: getarea()
{
    return 3.1416*radius*radius;
}
double circle :: getdiameter()
{
    return 2*radius;
}
double circle :: getcircumference()
{
    return 2*3.1416*radius;
}
int main()
{
    circle c1;
    c1.setradius(5);
    cout<<"Circle area is:"<<c1.getarea()<<endl;
    cout<<"Circle diameter is:"<<c1.getdiameter()<<endl;
    cout<<"Circle circumference is:"<<c1.getcircumference();

}
