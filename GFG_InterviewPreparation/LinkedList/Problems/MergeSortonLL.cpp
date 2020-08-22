// Merge Sort for Linked List Submissions: 15320   Accuracy: 52.29%   Difficulty: Easy   Marks: 2
// Associated Course(s):   Geeks Classes   Geeks Classes- Algorithms More
                      
// Problems
// Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
// Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.

// Example 1:

// Input:
// N = 5
// value[]  = {3,5,2,4,1}
// Output: 1 2 3 4 5
// Explanation: After sorting the given
// linked list, the resultant matrix
// will be 1->2->3->4->5.
// Example 2:

// Input:
// N = 3
// value[]  = {9,15,0}
// Output: 0 9 15
// Explanation: After sorting the given
// linked list , resultant will be
// 0->9->15.
// Your Task:
// For C++ and Python: The task is to complete the function mergeSort() which sort the linked list using merge sort function.
// For Java: The task is to complete the function mergeSort() and return the node which can be used to print the sorted linked list.

// Expected Time Complexity: O(N*Log(N))
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 105

// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends


/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

/* Function to mergesort the linked list
   It should return head of the modified list  */

Node* SortedMerge(Node *a,Node *b)
{
    Node *result=NULL;
    if(a==NULL)
        return (b);
    else if(b==NULL)
        return (a);
    if(a->data<=b->data)
    {
        result=a;
        result->next=SortedMerge(a->next,b);
    }
    else
    {
        result=b;
        result->next=SortedMerge(a,b->next);
    }
    return (result);
}

Node* mergeSort(Node* head) {
    // your code here
    if(head==NULL || head->next==NULL)
        return head;
   
    Node *slow=head;
    Node *fast=head->next;
    while(fast && fast->next)
    {   slow=slow->next;
        fast=fast->next->next;
    }
    Node *beg=head;
    Node *end=slow->next;
    slow->next=NULL;
    
    head=SortedMerge(mergeSort(beg),mergeSort(end));
}



// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        a = mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends