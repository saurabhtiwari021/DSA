// TO FIND FACTORIAL OF A NUMBER 
#include <iostream>
using namespace std;
int main()
{
    int i , num, fact=1;
    cout<<"ENTER YOUR NUMBER : ";
    cin >> num;

    for ( i = 1 ; i <= num ; i++)
    {
        fact = fact * i;
    }

    cout << fact;
}