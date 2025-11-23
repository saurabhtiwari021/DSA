#include <iostream>
using namespace std;
int main()
{
    int i , num;
    cout<<"ENTER YOUR NUMBER : ";
    cin>>num;
    
    i = 1;
    while(i <= 10)
    {
        cout << num << " * " << i << " = " << (num * i) <<endl ;
    i++;
    }

}