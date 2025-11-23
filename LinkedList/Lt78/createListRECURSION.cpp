// creating a linked list using recursion
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node * createLinkedList(int arr[], int index , int size)
{
    if(index == size)
    return NULL;

    Node * temp = new Node(arr[index]);
    temp->next = createLinkedList(arr , index + 1 , size);
    return temp;

}

int main()
{
    int arr[] = {2 , 4, 6 ,8 ,10};

    
}