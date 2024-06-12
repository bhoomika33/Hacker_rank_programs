class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
  {
		if(l1 == NULL)       //if l1 empty return l2
        {
			return l2;
		}
	
		if(l2 == NULL)      //if l2 empty return l1
        {
			return l1;
		} 
			if(l1 -> val <= l2 -> val)          //if l1 value <=l2value
        {
			l1 -> next = mergeTwoLists(l1 -> next, l2);   //attach l2 to l1
			return l1;              //return 1st node of l1
		}
		
		else
        {
			l2 -> next = mergeTwoLists(l1, l2 -> next);     //viceversa
			return l2;            
		}
	}
};	