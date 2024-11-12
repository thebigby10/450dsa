/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* new_head = nullptr;
    Node* temp = new Node(0);
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* node1 = head1;
        Node* node2 = head2;
        while(true){
            if(node1->data==node2->data){
                Node* temp_node = new Node(node1->data);
                temp->next = temp_node;
                temp = temp_node;
                if(!new_head) new_head = temp;
            }
            if(node1->data>node2->data){
                node2 = node2->next;
            }
            else{
                node1 = node1->next;
            }
            if(node1==nullptr || node2==nullptr) break;    
        }
        return new_head;
    }
};