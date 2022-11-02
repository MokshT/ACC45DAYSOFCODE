#include<iostream>
using namespace std;
class account
{
    int account_no;
    float balance;
    public: account(int ac, float b)
    {
        account_no = ac;
        balance = b;
    }
    void display()
    {
        cout << account_no << " " << balance << endl;
    }
    void deposit()
    {
        int d;
        cout << "Enter the amount to be deposited: ";
        cin >> d;
        balance = balance+d;
    }
    void withdraw()
    {
        int w;
        cout<<"Enter the amount to be withdrawn: ";
        cin>>w;
        if(balance<w)
        {
            cout<<"Insufficient balance.";
        }
        else
        balance=balance-w;
    }
};
int main()
{
    account a1(123000, 123456);
    a1.display();
    a1.withdraw();
    a1.deposit();
    a1.display();
    return 0;
}