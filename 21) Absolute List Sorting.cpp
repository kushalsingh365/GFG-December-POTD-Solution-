/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here
        auto start=head;
        auto pt=start;
        while(pt->next){
            if(pt->next->data<pt->data){
                auto nxt=pt->next;
                pt->next=nxt->next;
                nxt->next=start;
                start=nxt;
            }
            else
            pt=pt->next;
        }
        
        return start;
    }
};
