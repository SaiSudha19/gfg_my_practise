//Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

//{ Driver Code Starts
//Initial Template for C++
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
    Node* rev(Node*h){
        Node* p=nullptr,*c=h;
        while(c){
            Node* t=c->next;
            c->next=p;
            p=c;
            c=t;
        }
        return p;
    }
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
            head=rev(head);
           int c=0;
           Node* h=head;
           while(h){
               c++;
               h=h->next;
           }
           if(n>c)return -1;
           h=head;
           while(--n) h=h->next;
           return h->data;
    }
};



//{ Driver Code Starts.

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
