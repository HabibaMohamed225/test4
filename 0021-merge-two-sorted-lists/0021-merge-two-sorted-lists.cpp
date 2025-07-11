class Solution {
public:
    ListNode* mergeTwoLists(ListNode* firstList, ListNode* secondList) {
        if (firstList == NULL) return secondList;
        if (secondList == NULL) return firstList;

        if (firstList->val < secondList->val) {
            firstList->next = mergeTwoLists(firstList->next, secondList);
            return firstList;
        } else {
            secondList->next = mergeTwoLists(firstList, secondList->next);
            return secondList;
        }
    }
};
