#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int insert(int a[], int num, int);
int del(int a[], int count);
void disp(int a[], int num);
int find(int a[], int num, int count);
main(void)
{
    int stack[MAX], count, choice;
    char buffer[81];
    count = 0;
    do
    {
        printf("\n 1: Insert");
        printf("\n 2: del");
        printf("\n 3: display");
        printf("\n 4: exit");
        fflush(stdin);
        choice = atoi(gets(buffer));

        switch(choice)
        {
            case 1:
                    fflush(stdin);
                    count = insert(stack, atoi(gets(buffer)), count);
                    break;
            case 2:
                    fflush(stdin);
                    count = del(stack, count);
                    break;
            case 3: fflush(stdin);
                    disp(stack, count);
                    break;
            case 4:
                    fflush(stdin);
                    exit(0);
        }
    }while(1);
}

int insert(int a[], int num, int count)
{
    if(count == MAX)
    {
        printf("STACK OVERFLOW");
    }
    else
    {
        a[count] = num;
        count++;
    }
    return count;
}

void disp(int a[], int num)
{
    int i;
    for(i = 0; i < num; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
int find(int a[], int num, int count)
{
    int pos;
    for(pos = 0; pos < count; pos++)
    {
        if(num == a[pos])
        {
            return pos;
        }
    }
    return -1;
}
int del(int a[], int count)
{
    int num, pos, i;
    char buffer[81];
    printf("enter the number to be deleted : ");
    num =  atoi(gets(buffer));
    pos = find(a, num, count);
    for(i = pos; i < count - 1; i++)
    {
        a[i] = a[i+1];
    }
    a[count-1] = 0;
    count--;
    return count;
}
