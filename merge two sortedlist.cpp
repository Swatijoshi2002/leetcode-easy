/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
       ListNode *i=list1;
        ListNode *j=list2;
           ListNode *k=list2;
        if(i==NULL && j==NULL)
        {
            return i;
        }
         if(i!=NULL && j==NULL)
        {
            return i;
        }
         if(i==NULL && j!=NULL)
        {
            return j;
        }
        for(i=list1;i!=NULL;i=i->next)
        {
        for(j=list2;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                int temp=j->val;
                j->val=i->val;
                i->val=temp;
            }
        }
        }
        for(j=list2;j!=NULL;j=j->next)
        {
           for(k=list2;k!=NULL;k=k->next) 
           {
               if(j->val<k->val)
               {
                   int temp=j->val;
                j->val=k->val;
                k->val=temp;
               }
           }
        }
        ListNode *temp=list1;
        while(list1->next!=NULL)
        {
            list1=list1->next;
        }
        list1->next=list2;
        return temp;
    }
};
