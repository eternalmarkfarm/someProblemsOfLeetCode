struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* ret = new ListNode();
        ListNode* gg = ret;
        
        ret->val = head->val;        
        head = head->next;
        while(head != nullptr){
            if(ret->val == head->val){
                head = head->next;
                continue;
            }
            else {
                ret->next = new ListNode(head->val);
                ret = ret->next;
                head = head->next;
            }
            
        }
        return gg;
    }
