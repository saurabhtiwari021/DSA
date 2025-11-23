#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int acc_number;
    int balance;

    Customer()
    {
        name ="Saurabh";
        acc_number = 5;
        balance = 1000;
    }

    Customer(string a , int b , int c)
    {
        name = a;
        acc_number = b;
        balance = c;

    }

    // Copy constructor manual creation
    Customer(Customer &B)
    {
        name = B.name;
        acc_number = B.acc_number;
        balance = B.balance;
    }

    void display()
    {
        cout<<name<<" "<<acc_number<<" "<<balance;
    }
    
};

int main()
{
    Customer c1;
    c1.display();
    Customer c2("Rohit" , 23  , 500);
    c2.display();
    Customer c3(c2); // default copy constructor use
    c3.display();

    // another method to apply copy constructor
    Customer A5;
    A5 = c3;
    A5.display();


}