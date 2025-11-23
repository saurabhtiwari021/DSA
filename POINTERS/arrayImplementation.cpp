#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1 , 2 , 3 , 4 , 5};
    int *ptr = arr;
  // to print the add of first element or 0th index(all 4 are same)
    // cout<<&arr[0]<<endl;
    // cout<<arr<<endl;
    // cout<<ptr<<endl;
    // cout<<arr+0<<endl;
    
    // // print the add of second element
    // cout<<arr+1<<endl;
    // cout<<ptr+1<<endl;

    // // printing the value at index 0
    // cout<<arr[0]<<endl;
    // cout<<*ptr<<endl;

    // // saare add ko print karna 

    // for(int i = 0 ; i<5; i++)
    // {
    //     cout<<(arr+i)<<endl;
    // }

    //    // saare value ko print karna 

    // for(int i = 0 ; i<5; i++)
    // {
    //     cout<<*(arr+i)<<endl;
    // }    

    // print all values with use of pointer //to commnet multiple lines ctrl + k + c

    for(int i = 0 ; i<5 ; i++)
    {
        cout<<ptr[i]<<endl;
    }

    // print all add 
    
    for(int i = 0 ; i<5 ; i++){
        cout<<(ptr+i)<<" ";
    }

   // Arithmetic operation 

   for(int i = 0 ; i<5 ; i++)
   {
       cout<<ptr<<endl;
       ptr++;
   }
}