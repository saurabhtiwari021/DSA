// find the sum of first N natural number 

#include <iostream>
using namespace std;

int printSum(int num)
{
    if(num <= 1)
    return 1;

    else {
        return num + printSum(num-1);
    }
}
int main()
{
    int num;
    cout<<"Enter the number to find the sum :  ";
    cin>>num;

   cout<<"the sum of the numbers are :  "<< printSum(num)<<endl;
}