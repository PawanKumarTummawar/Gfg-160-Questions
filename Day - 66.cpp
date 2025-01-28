Rotate a Linked List

    Node *
    rotate(Node *head, int k)
{
    if (k == 0)
        return head;

    Node *temp = head;
    int len = 1;
    while (temp->next)
    {
        temp = temp->next;
        len++;
    }

    k = k % len;
    if (k == 0)
        return head;

    temp->next = head;
    Node *newTail = head;

    for (int i = 1; i < k; i++)
        newTail = newTail->next;
    Node *newHead = newTail->next;
    newTail->next = nullptr;
    return newHead;