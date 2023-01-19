class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * prevNode = NULL;
        ListNode * curNode = head;
        ListNode * nextNode;
        while(curNode!=NULL)
        {
         nextNode=curNode->next;
         curNode->next=prevNode;
         prevNode=curNode;
         curNode = nextNode;        
        }
        return prevNode;
    }
};
