#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout<<&a <<endl;// printing the add of a

    int *ptr = &a;
    cout<<ptr<<endl;
}