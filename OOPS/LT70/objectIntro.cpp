// to know size of object 

#include <iostream>
using namespace std;

class Size
{   // use of greedy approach to place data types in terms of descending order i.e., maximum should be first 
    // followed by next maximum
    public:
    double b;
    int a;
    char c;

};

int main()
{
   Size test;
   cout<<sizeof(test)<<endl;
}

