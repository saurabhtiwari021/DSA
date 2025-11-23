#include <iostream>
using namespace std;

void doub(int *ptr)  // int ptr[] , this is same as int *ptr
{
  for(int i = 0 ; i<5 ; i++)
  {
    ptr[i] = 2*ptr[i];
  }
}


int main()
{
  int arr[5] = {1,2,3,4,5};

  doub(arr);
  for(int i = 0 ; i<5 ; i++)
  {
    cout<<arr[i]<<" ";
  }
}

