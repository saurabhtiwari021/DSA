#include <iostream>
#include <climits>
using namespace std;

int main()
{
// TO FIND THE MINIMUM VALUE IN AN ARRAY

   /* int arr[5]={12 , 18 ,9, 43, 7};
    int ans= INT_MAX;

    for (int i=0 ; i<5 ; i++)
    {
        if(arr[i] < ans)
        ans = arr[i];
    }
    cout <<ans;
    return 0;*/

    // TO FIND MAXIMUM VALUE IN AN ARRAY
     
     int arr[5]={23,34,18,19,20};
     int ans = INT_MIN;

     for (int i = 0; i<5; i++)
     {
        if(ans < arr[i])
        ans = arr[i];
     }
     cout<<ans<<" "<<endl;
     return 0;



}