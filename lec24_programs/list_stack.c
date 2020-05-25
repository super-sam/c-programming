#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int value;
    struct stack *next;
};

struct stact *create(void)
{
    struct stack *list = NULL, *p;
    int value;

    while(scanf("%d", &value) == 1)
    {
        if((p = malloc(sizeof(struct stack))) == NULL)
        {
            printf("MEMORY CANT BE ALLOCATED");
            exit(1);
        }
        p->value = value;
        p->next = list;
        list = p;
    }
    return list;
}

void display_stack(struct stack *p)
{
    while(p)
    {
        printf("%d \n", p->value);
        p = p -> next;
    }
}

main(void)
{
    struct stacck *head;
    head = create();
    display_stack(head);
}
