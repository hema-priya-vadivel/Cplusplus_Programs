#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
float avgOfNodes(struct Node* head)
{
    if (!head)
        return -1;
    int count = 0; 
    int sum = 0;
    float avg = 0.0;
    struct Node* current = head; 

    while (current != NULL) {

        count++;

        sum += current->data;

        current = current->next;

    }
    avg = (double)sum / count;
    return avg;
}

int main()
{
    struct Node* head = NULL;
    push(&head, 7);
    push(&head, 6);
    push(&head, 8);
    push(&head, 4);
    push(&head, 1);
    cout << "Average of nodes = " << avgOfNodes(head);
 
    return 0;
}
