#include<bits/stdc++.h>  
using namespace std;  
  
// Struct  
struct Node  
{  
    int data;  
    struct Node* next;  
};  
  
/* Function to get the middle of the linked list*/
void printMiddle(struct Node *head)  
{  
  //Use fast and slow pointer technique
  
    //Empty list condition
    if(head == NULL)
    {
        cout << endl << "Empty List" << endl;;
    }

    struct Node *s, *f;
    s = f = head;

    //Traverse the list
    while(f != NULL)
    {
        //Fast f pointer moves at double the pace

        f = f->next;

        //Reached the end ?
        if(f != NULL)
        {
            f = f->next;
        }
        else
        {
            break;
        }

        s = s->next;
    }

    cout << s->data << endl;

    return;
}  
  
// Function to add a new node  
void push(struct Node** head_ref, int new_data)  
{  
    struct Node* new_node = new Node;  
    new_node->data = new_data;  
    new_node->next = (*head_ref);  
    (*head_ref) = new_node;  
}  
  
// A utility function to print a given linked list  
void printList(struct Node *ptr)  
{  
    while (ptr != NULL)  
    {  
        printf("%d->", ptr->data);  
        ptr = ptr->next;  
    }  
    printf("NULL\n");  
}  
  
// Driver Code 
int main()  
{    
    struct Node* head = NULL;    
    for (int i=15; i>0; i--)  
    {  
        push(&head, i);  
        printList(head);  
        printMiddle(head);  
    }  
  
    return 0;  
} 

/**
 * @brief Complexity Analysis
 * Time - O(n/2)
 * Space - Depends on length
 */