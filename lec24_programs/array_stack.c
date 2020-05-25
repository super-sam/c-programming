#include<stdio.h>

#define MAX 10

void insert(int a[], int value);
void display(int a[]);

int main(void)
{
    int stack[MAX];
    char ch, buffer[20];

    while((ch = toupper(getchar())) == 'Y')
    {
        fflush(stdin);
        insert(stack, atoi(gets(buffer)));
        display(stack);
        fflush(stdin);
    }
}

void insert(int a[], int value)
{
    static int pos = 0;
    a[pos] = value;
    pos = (pos + 1) % 10;
}

void display(int a[])
{
    static int count = 0;
    int i = 0;
    for(i = 0; i <= count; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    count = (count + 1) % 2;
}
