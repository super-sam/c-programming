#include<stdio.h>
#include<stdlib.h>

struct create
{
    int info;
    struct create *next;
};

struct create * create_node(void);
void display(struct create *);

int main(void)
{
    struct create *head = NULL;

    head = create_node();
    display(head);

    return 0;
}


struct create * create_node(void)
{
    struct create *head = NULL, *tail = NULL, *p;
    int value;

    while(scanf("%d", &value) == 1)
    {
        if((p = malloc(sizeof(struct create))) == NULL)
        {
            printf("memory overflow");
            exit(1);
        }
        p->info = value;
        p->next = NULL;
        if(head == NULL)
        {
            head = tail = p;
        }
        else
        {
            tail -> next = p;
            tail = tail -> next;
        }
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
}
