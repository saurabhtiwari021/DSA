// intialisation of vectors , always include it's header file 
#include <iostream>
#include <vector>

using namespace std;
int main()
{
   // creating a vector
   vector<int>v;

   //cout<<"the size of vector is "<<v.size()<<endl;  = 0
   //cout<<"the capacity of vector is "<<v.capacity()<<endl; = 0 initially

   v.push_back(3);
   v.push_back(2);
   v.push_back(10);

   cout<<"the size of vector is "<<v.size()<<endl;
   cout<<"the capacity of vector is "<<v.capacity()<<endl;

   // updating the value
   v[1] = 5;
   
   // initialisation

   vector<int>v1(5,1); // first method
}
