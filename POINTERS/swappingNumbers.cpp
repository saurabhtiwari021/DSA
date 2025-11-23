// to swap values of two variable with the help of pointer 

#include <iostream>
using namespace std;

void swap(int *p1 , int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}
int main()
{
    int first = 10;
    int second = 20;

    swap(&first , &second);

    cout<<"first num is : " <<first<<endl;
    cout<<"second num is : "<<second<<endl;
  
}