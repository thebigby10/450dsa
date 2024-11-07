//Floyd's cycle finding algorithm
/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        Node* twox = head;
        Node* onex = head;
        
        bool cycle_exists = false;
        
        while(true){
            if(twox->next == nullptr) break;
            twox = twox->next->next;
            onex = onex->next;
            if(twox==onex) {
                cycle_exists = true;
                break;
            }
            if(twox==nullptr || onex==nullptr) break;
        }
        return cycle_exists;
    }
};