#include <iostream>
using namespace std;

int main()
{


    // char arr[] = {"1 2  3  4  \0"};
    // char *ptr = arr;

    // cout<<arr<<endl;
    // cout<<ptr<<endl;

    // // to print only address
    // cout<<(void*)arr << endl;
    // cout<<(void*)ptr <<endl;

    char name = 'a';
    char *ptr1 = &name;
    cout<<ptr1<<endl; // any random value generated instead of address , that's why we typecasted with (void*)

    cout<<(void*)ptr1<<endl ; // to print the address
}