#include <stack>

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        stack<ListNode*> stackA;
        stack<ListNode*> stackB;

        ListNode *p = headA;
        ListNode *q = headB;

        // Put all nodes of list A into stackA
        while (p)
        {
            stackA.push(p);
            p = p->next;
        }

        // Put all nodes of list B into stackB
        while (q)
        {
            stackB.push(q);
            q = q->next;
        }

        ListNode *ad = NULL;

        // Compare nodes from the end
        while (!stackA.empty() && !stackB.empty())
        {
            if (stackA.top() == stackB.top())
            {
                // This node is common
                ad = stackA.top();

                stackA.pop();
                stackB.pop();
            }
            else
            {
                // Nodes are different
                break;
            }
        }

        return ad;
    }
};