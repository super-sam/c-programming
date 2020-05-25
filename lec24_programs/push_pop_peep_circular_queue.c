#include<stdio.h>
#include<stdlib.h>

struct create
{
    int info;
    struct create *next;
};

struct create * create_node(struct create *);
void display(struct create *);
struct create * insert(struct create *);
void del(struct create *);

int main(void)
{
    struct create *head = NULL;
    char ch;
    int choice;
    do
    {
        printf("1: Create\n");
        printf("2: Display\n");
        printf("3: Insert\n");
        printf("4: exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                   head = create_node(head);
                   break;
            case 2:
                   display(head);
                   break;
            case 3:
                    head = insert(head);
                    break;
            case 4:
                    exit(0);
            default:
                    printf("invalid choice! Re-enter the choice\n");
        }
    }while(1);

    return 0;
}


struct create * create_node(struct create *head)
{
    struct create *p, *tail;
    tail = head;
    int value;
        if((p = malloc(sizeof(struct create))) == NULL)
        {
            printf("memory overflow");
            exit(1);
        }
        printf("Enter the number to bbe inserted : ");
        scanf("%d", &value);
        p->info = value;
        p->next = NULL;
        if(head == NULL)
        {
            head = tail = p;
        }
        else
        {
            while(tail -> next != NULL)
                tail = tail -> next;
            tail -> next = p;
            tail = tail -> next;
        }
    return head;
}

void display(struct create *p)
{
    while(p)
    {
        printf("%d\t", p->info);
        p = p -> next;
    }
    printf("\n");

}

struct create * insert(struct create *head)
{
    struct create *pos, *new_temp;
    int value, after, found = -1;
    pos = head;
    printf("enter the value of element after whice you want to insert:  ");
    fflush(stdin);
    scanf("%d", &after);

    while(pos)
    {
        if(pos -> info == after)
            break;
        pos = pos -> next;
    }

    printf("enter the value to be inserted : ");
    fflush(stdin);
    scanf("%d" ,&value);

    if((new_temp = (struct create *)malloc(sizeof(struct create))) == NULL)
    {
        printf("momory overflow");
        exit(1);
    }
    new_temp -> info = value;
    if(pos == NULL) // insert at first
    {
        printf("not found\n");
        new_temp -> next = head;
        head = new_temp;
    }
    else
    {
        new_temp -> next = pos -> next;
        pos -> next = new_temp;
    }
    return head;
}

void del(struct create *head)
{

}

