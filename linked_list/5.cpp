/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {
        Node* current_node = head; 
        while(current_node!=nullptr ){
            while(true){
                if(current_node->next==nullptr) break;
                if(current_node->data==(current_node->next)->data)
                    current_node-> next = (current_node->next)->next;
                else break;
            }
            if(current_node->next==nullptr) break;
            current_node = current_node->next;
        }
        return head;
        // code here
    }
};