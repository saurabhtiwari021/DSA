#include <iostream>
using namespace std;

int main()
{
    // variable k liye heap me memory allocation

    int *ptr = new int;
    cout<<ptr<<endl;

    *ptr = 5 ; // to add value to the address
    cout <<*ptr<<endl;

    // for dynamic array implementation

    int size;
    cout<<"enter the size of array : ";
    cin>>size;

    int *ptr1 = new int[size];

    //assigning values to array 

    for(int i = 0 ; i<size ; i++)
    {
        ptr1[i] = i + 1 ; 
    }

    // to print 

     for(int i = 0 ; i<size ; i++)
    {
        cout<<ptr1[i]  ; 
    }


    // delete keyword use 

    delete ptr;
    delete [] ptr1;

}