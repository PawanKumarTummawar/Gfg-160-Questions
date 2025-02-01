Clone List with Next and Random

    class Solution
{
public:
    Node *cloneLinkedList(Node *head)
    {
        if (head == NULL)
            return head;

        Node *cur = head;
        while (cur)
        {
            Node *newNode = new Node(cur->data);
            newNode->next = cur->next;
            cur->next = newNode;
            cur = newNode->next;
        }

        cur = head;
        Node *head2 = cur->next;
        while (cur)
        {
            if (cur->random == NULL)
                cur->next->random = NULL;
            else
                cur->next->random = cur->random->next;
            cur = cur->next->next;
        }

        cur = head;
        while (cur)
        {
            Node *tmp = cur->next;
            cur->next = tmp->next;
            if (tmp->next)
                tmp->next = tmp->next->next;
            cur = cur->next;
        }
        return head2;
    }