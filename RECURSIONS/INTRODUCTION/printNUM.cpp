// to print numbers from 1 to n using recursion

#include <iostream>
using namespace std;

void printnum(int size)
{

    if(size == 0)
    {
        return;
    }
    else{
    cout<<size<<endl;

    printnum(size-1);
    }
}

 void printeven(int num)
 {
    if(num == 0 )
    {
        return;
    }

    else {
        if(num % 2 == 0)
        cout<<num<<" ";
         
        printeven(num -1);
        
    }
 }

int main()
{
    int size;
    cout<<"enter the size of numbers to print : ";
    cin>>size;
    printnum(size);

    // to print even numbers 

    int num;
    cout<<"enter the size of even numbers to print : ";
    cin>>num;
    printeven(num);
}