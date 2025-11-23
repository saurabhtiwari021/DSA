// to print the fibonnaci of the number 
#include <iostream>
using namespace std;

int fib(int num)
{
    if(num<= 1)
    return num;

    else {
        return fib(num-1) + fib(num-2);
    }

}

int main()
{
    int num;
    cout<<"enter the nth fibonnaci number you want to calculate : ";

    cin>>num;

    cout<<fib( num);

    return 0;





}