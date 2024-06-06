//
// Created by arnau on 06/06/2024.
//
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *p1 = headA;
    ListNode *p2 = headB;
    while (p1 != p2) {
        p1 = p1 == nullptr ? headB : p1->next;
        p2 = p2 == nullptr ? headA : p2->next;
    }
    return p1;
}