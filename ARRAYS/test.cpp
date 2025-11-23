#include <iostream>
using namespace std;

int main()
{
  int arr[5];
  cout<<"enter 5 elements of your array : ";
  for(int i = 0; i< 5; i++)
  {
       cin>>arr[i];
       
  }
 

  cout<<"your array is : ";
  for(int i = 0; i< 5 ; i++)
  {
    cout<<arr[i] << " ";
  }

}