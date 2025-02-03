Find the first node of loop in linked list

    class Solution
{
public:
    Node *findFirstNode(Node *head)
    {
        Node *fast = head;
        Node *slow = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                slow = head;
                while (slow != fast)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }