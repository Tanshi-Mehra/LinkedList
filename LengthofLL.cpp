#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    public:
    Node(int data1,Node*next1)
    {
        data=data1;
        next=next1;
    }
      Node(int data1)
    {
        data=data1;
        next=nullptr;
    }

};
    Node* arr2LL(vector<int>&arr)
    {
        Node*head=new Node(arr[0]);
        Node*mover=head;
        for(int i=1;i<arr.size();i++)
        {
            Node*temp=new Node(arr[i]);
            mover->next=temp;
            mover=temp;

        }
        return head;
    

    }
   int printLL(Node*head)
    {
        int count=0;
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            count++;
            temp=temp->next;
        }
        return count;

    }
int main()
{
    vector<int>arr={8,2,3,4,5};
    Node*head=arr2LL(arr);
  int length= printLL(head);
  cout<<"the length of linked list is"<<length;
}