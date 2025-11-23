// deleting a node from the linked list 
#include <iostream>
using namespace std;

class Node 
{   public:
    int data;
    Node * next;

    Node(int value)
    {
       data = value;
       next = NULL;
    }
};

int main()
{
    int arr[] = {2 , 4 , 6 , 8};
    Node * head;
    head = NULL;
    
    for(int i = 0 ; i< 4 ; i++)
    {
       if (head == NULL)
       head = new Node(arr[i]);

       else 
       {
        Node * temp;
        temp = new Node(arr[i]);
        temp->next = head;
        head = temp;
       }
    }

    // Traversing 
    Node * temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    // deleting the node 
    if(head!= NULL)
    {
        Node * temp = head;
        head = head->next;
        delete temp;
    }

    cout<<endl;


     // Traversing  after deletion
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0 ;
}