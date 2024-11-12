class Solution {
  public:
    Node *moveToFront(Node *head) {
        //iterate through the ll and find the last element.
        Node* current_node = head;
        Node* prev_node = nullptr;
        while(true){
            if(current_node->next==nullptr) break;
            prev_node = current_node;
            current_node = current_node->next;
        }
        //make the head last element
        current_node -> next = head;
        prev_node->next = nullptr;
        head = current_node;
        //
        return head;
    }
};