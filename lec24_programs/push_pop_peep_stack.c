#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int stack[MAX];
int head = -1, tail = -1;

void push();
void pop();
void peep();

main(void)
{
    char ch, buffer[81];

    do
    {
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Peep\n");
        printf("4: Exit\n");

        fflush(stdin);
        ch = atoi(gets(buffer));

        switch(ch)
        {
            case 1:
                    push();
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    peep();
                    break;
            case 4:
                    exit(0);
                    break;
            default:
                    printf("Invalid Choice : RE-enter the choice \n");
        }
    }while(1);
}

void push()
{
    char buffer[81];
    if(tail == MAX - 1)
    {
        printf("Stack overflow \n");
    }
    else
    {
        printf("enter a number : ");
        fflush(stdin);
        stack[++tail] = atoi(gets(buffer));
    }
}

void pop()
{
    if( tail == -1)
    {
        printf("Empty Stack \n");
    }
    else
    {
        tail--;
    }
}

void peep()
{
    int i;
    for(i = 0; i <= tail; i++)
        printf("%d\t", stack[i]);
    printf("\n");
}
