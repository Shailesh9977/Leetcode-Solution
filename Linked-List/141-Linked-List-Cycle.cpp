
//141. Linked List Cycle
//Level : easy  hai basic 
//aproach Slow and Fast Pointer


class Solution {
public:
    bool hasCycle(ListNode *head) {
     ListNode *slow = head;

     ListNode *fast = head;
     while(  fast!=nullptr  && fast->next != nullptr ){

        slow = slow->next;
        fast = fast->next->next;
        if( fast==slow){

        
    return true;

     }

     }
        return false;
     }
    };
