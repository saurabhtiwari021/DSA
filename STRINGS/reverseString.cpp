// Reversing the string
#include <iostream>
using namespace std;
int main()
{
    string s = "saurabh";
    int start , end;

    start = 0 , end = s.size() - 1;

    while(start<end)
    {
        swap(s[start], s[end]);
        start++, end--;
    }
    cout<<s<<endl;


    // to calculate the size of string 

    int size = 0;
    while(s[size]!= '\0')
    {
        size ++;
    }

    cout<<size<<endl;

}