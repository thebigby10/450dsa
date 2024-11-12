/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    bool visited[1000001] = {false};
    Node *removeDuplicates(Node *head) {
        // your code goes here
        // for(int i=0;i<=1000001;i++) visited[i] = false;
        Node* current_node = head;
        Node* prev_node = nullptr;
        while(true){
            if(current_node->next==nullptr) break;
            if(!visited[current_node->data]){
                visited[current_node->data] = true;
                prev_node = current_node;
                current_node = current_node->next;
            }
            else{
                prev_node->next = current_node->next;
                current_node = current_node->next;
            }
        }
        if(visited[current_node->data]){
            prev_node->next = nullptr;
        }
        return head;
    }
};