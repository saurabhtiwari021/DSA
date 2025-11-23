#include <iostream>
using namespace std;

void bday(int days)
{
    if(days == 0)
    {
    cout<<"Happy Birthday";
    return ;
    }

    else{
        cout<<days<<" "<<"days left for birthday"<<endl;
        bday(days-1);
    }
}

int main()
{
    // to print bday for someone using help of recursion
     int days;
     cout<<"enter the days left for birthday : ";
     cin>>days;

    bday(days);

    return 0;
}