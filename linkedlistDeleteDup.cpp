/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==nullptr) return nullptr;
    else if(A->next==nullptr) return A;
    else{
        ListNode* tmp = A->next;
        ListNode* prev = A;
        while(tmp!=nullptr){
            if(tmp->val==prev->val){
                ListNode* del=tmp;
                tmp=tmp->next;
                prev->next=tmp;
                delete del;
            }
            else{
                prev=prev->next;
                tmp=tmp->next;
            }
        }
        return A;
    }
}
