#include<iostream>
using namespace std;
class account
{
    double balance;
public:
    account(double bal)
    {
        balance =bal;
    }
    virtual void calculation()=0;
    void deposit(double d)
    {
        balance =balance+d;
        cout<<"Deposit balance is:"<<d<<" "<<"and the new balance is"<<balance<<endl;
    }
     void withdraw(double w)
    {
        if(balance<w)
        {
            cout<<"Balance is insufficient"<<endl;
        }
        else{
           balance =balance-w;
        cout<<"Withdraw balance is:"<<w<<"And the new balance is"<<balance<<endl;
        }
    }
    double returnbalance()
    {
        return balance;
    }
};
class savingaccount : public account{
public:
  savingaccount(double taka):account(taka){}
  void calculation()
  {

      cout<<"Total profit is"<<returnbalance()*0.2<<endl;
  }
};
class currentaccount : public account{
public:
  currentaccount(double taka):account(taka){}
  void calculation()
  {
      returnbalance()*0.1;
  }
};
int main()
{
    savingaccount sa(500.00);
    sa.deposit(200);
    sa.withdraw(100);
  sa.calculation();
  currentaccount ca(100.00);
    ca.deposit(200);
    ca.withdraw(100);
  ca.calculation();
}
