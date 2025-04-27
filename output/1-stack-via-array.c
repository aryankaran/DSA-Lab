#include <stdio.h>
#include <stdbool.h>
#define SIZE 4


int top=-1 , stack[SIZE];


void push(int n)
{

    if (top >= SIZE-1 )
        printf("Stack is full\n");
    else
        {
            top++;
            stack[top]=n;
        }    
}


void pop()
{
    int n;
    if (top < 0 )
        printf("Stack is empty\n");
    else
        {
            n=stack[top];
            top--;
            printf("Popped value: %d\n\n", n);
        }    
}


void display()
{
    if (top < 0)
        printf("No element to display\n");
    else
        {
            for (int i=top ; i>=0 ; i--)
                printf("%d ", stack[i]);
            printf("\n");
        }    
}


int main()
{

    while (true)
    {
        // Enter choices
        printf("\nEnter a choice :\n");
        printf("1. Push\n");
        printf("2. Pop an element\n");
        printf("3. Display the stack\n");
        printf("4. Exit menu\n");

        int choice;
        printf("Enter a choice: ");
        scanf("%d", &choice);
        printf("\n");

        int n;
        switch (choice)
        {
            
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &n);
                push(n);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;
            
            default:
                printf("whoops! Invalid input\n");
        }

    }
}