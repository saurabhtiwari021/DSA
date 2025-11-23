#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *p = &n; // single pointer 
    int **p1 = &p;  // double pointer 
    int ***p2 = &p1; // triple pointer 

    cout<<p<<endl;// address of n return
    cout<<p1<<endl; // address of p return
    cout<<p2<<endl; // address of p1 return
}