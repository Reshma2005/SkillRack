


void insertFirst(int id,char *name)
{
    struct Student *node;
    node->id = id;
    node->name = strdup(name);
    node->next = NULL;
    node->prev = NULL;
    if(head == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        head->prev = node;
        node->next = head;
        head = node;
        return;
    }
    
    
    
}

void append(int id, char *name)
{
    struct Student *node;
    node->id = id;
    node->name = strdup(name);
    node->next = NULL:
    node->prev = NULL;
    if(tail == NULL)
    {
        head = node;
        tail = node;
        return;
    }
    else
    {
        tail->next = node;
        node->prev = tail;
        tail = node;
        return;
    }
}
