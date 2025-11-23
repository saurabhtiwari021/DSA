#include <iostream>
using namespace std;

class Node 
{   public: 
    int data ;
    Node * next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};


int main()
{

    Node * head = new Node(28);
    cout<<head->data;
    cout<<head->next;

}