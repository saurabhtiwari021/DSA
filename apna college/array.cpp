#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"enter your array : " ;
    

    for(int i = 0 ; i< 10;  i++)
    {
        cin>> arr[i];
    }
    int start = 0 , end = 9;

    while(start < end)
    {
        swap(arr[start] , arr[end]);
        start++ ;
        end-- ;
    }

    cout<<"reverse of your array is : ";
    for(int i = 0 ; i< 9 ; i++)
    {
        cout<<arr[i]<<" ";

    }

    return 0;



}