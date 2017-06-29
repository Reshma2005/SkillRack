struct Student* createNode(int id, char *nodeName)
{
    struct Student *temp;
    temp = (struct Student*)malloc(sizeof(struct Student));
    temp->id = id;
    temp->*name = nodeName;
    return temp;
}


void insertFirst(int id,char *name)
{
    struct Student *node = createNode(id,name);
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
    struct Student *node = createNode(id,name);
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
