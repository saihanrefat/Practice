  #include<iostream>
  using namespace std;
   class intclass
   {
       int num;
   public:
    intclass(int x)
    {
        num=x;
    }
    friend int is_even(intclass);
   };
   int is_even(intclass i)
   {
       if(i.num%2==0)
       {
           cout<<"Number is even"<<endl;
       }
       else
        cout<<"Not even"<<endl;
   }
   int main()
   {
       intclass i(10);
       is_even(i);
   }
