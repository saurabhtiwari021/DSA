//TO FIND THE POWER OF ANY NUMBER
#include <iostream>
using namespace std;
int main()
{
    int num,pow,n;
    cout<<"ENTER YOUR NUMBER : ";
     cin>>num;

    cout <<"ENTER YOUR POWER : ";
     cin>> pow;

     n = num;

     for ( int i = 1 ; i < pow ; i++)
     {
         num = num*n;
         cout << num << endl;
     }
}