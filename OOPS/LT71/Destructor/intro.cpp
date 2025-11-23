// creating the destructor and understanding the concept
#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int *balance;

    Customer(string name , int bal)
    {
        this -> name = name;
        balance = new int;
        *balance = 1000;
    }

    // destructor is called once

    ~Customer()// Destructor
    {
        delete balance;
    }

};

int main()
{
    Customer A("rohit" , 1000);
    cout<<A.name;
}
