/* Linked List Node
struct Node { 
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        int len1 = 0, len2 = 0;
        Node* current1 = head1;
        Node* current2 = head2;
        while(current1!=nullptr){
            len1++;
            current1 = current1->next;
        }
        while(current2!=nullptr){
            len2++;
            current2 = current2->next;
        }
        current1 = head1;
        current2 = head2;
        if(len1>len2){
            for(int i=0;i<len1-len2;i++)
                current1 = current1->next;
        }
        else{
            for(int i=0;i<len2-len1;i++)
                current2 = current2->next;
        }
        for(int i=0;i<min(len1,len2);i++){
            if(current1==current2) return current1->data;
            current1 = current1->next;
            current2 = current2->next;
        }
        return -1;
    }
};