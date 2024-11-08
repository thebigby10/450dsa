/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    // Function to reverse a linked list.
    // vector<int >rev;
    struct Node* reverseList(struct Node* head) {
        struct Node* current = head;
        struct Node* prev = nullptr;
        struct Node* next = head->next;
        while(current!=nullptr){
            next = current -> next;
            current->next = prev;
            prev = current;
            current = next;
            
            // current_node = temp;
        }
        return prev;
    }
};