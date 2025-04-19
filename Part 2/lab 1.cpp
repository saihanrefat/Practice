#include <iostream>
using namespace std;

// Base class
class area
{
protected:
    double totallength,totalwidth,gardenlength;
public:
    area(double tl,double tw,double gl)
    {

        totallength=tl;
        totalwidth=tw;
        gardenlength=gl;
    }

};
class garden_area : public area{
public:
    garden_area(double tl,double tw,double gl):area(tl,tw,gl){}
    double calculate_garea()
    {

        return(totallength*totalwidth)-((totallength-2*gardenlength)*(totalwidth-2*gardenlength));
    }
};
class field_area : public area{
public:
    field_area(double tl,double tw,double gl):area(tl,tw,gl){}
    double calculate_farea()
    {

        return(totallength-2*gardenlength)*(totalwidth-2*gardenlength);
    }
};
int main()
{
    double l,w,g;
    cout<<"Enter the total length,total width and garden length:";
    cin>>l>>w>>g;
    garden_area x(l,w,g);
    cout<<"Total garden area is:"<<x.calculate_garea()<<endl;
    field_area f(l,w,g);
    cout<<"Total field area is:"<<f.calculate_farea();


}
