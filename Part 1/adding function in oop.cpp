#include<bits/stdc++.h>

class external;
class internal
{
   float math;
   float oop;
   float se;
   float ds;
   public:
       void number(float m,float o,float s,float d)
       {
           math=m;
           oop=o;
           se=s;
           ds=d;
       }
       friend void sum(internal,external);
};
class external
{
   float math;
   float oop;
   float se;
   float ds;
   public:
       void number(float m,float o,float s,float d)
       {
           math=m;
           oop=o;
           se=s;
           ds=d;
       }
       friend void sum(internal,external);
};
void sum(internal i,external e)
{
   float sum ,math,oop,se,ds;
    math=i.math+e.math;
    oop=i.oop+e.oop;
    se=i.se+e.se;
    ds=i.ds+e.ds;
}
int main()
{
    internal i1;
    i1.number(20.0,30.0,10,0,40.0);
    external e;
    e.number=(20.0,30.0,10,0,40.0);
    sum(i,e);
    cout<<math;

}
