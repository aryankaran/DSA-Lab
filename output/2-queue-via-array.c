#include <stdio.h>
#define SIZE 2

int queue[SIZE];
int front=-1, rear=-1, choice, n;

int main()
{
    while (1)    
    {
        printf("1. Insert an element. \n2. Delete an element.\n3. Display queue. \n4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // check choice
        switch (choice)
        {
            case 1: // insert
                if (rear >= SIZE-1)
                    printf("Queue is full\n");
                else
                    {
                        rear++;
                        printf("Enter element: ");
                        scanf("%d", &n);
                        printf("\n");
                        queue[rear]=n;

                        if (front == -1 )
                            front = 0;
                    }
                break;


            case 2: // remove
                if (front == -1)
                    printf("queue is empty\n");
                else
                {
                    n=queue[front];
                    printf("Removed element %d\n", n);

                    if ( front != rear )
                        front++;
                    else
                        {
                            front = -1;
                            rear = -1;
                            // printf("DEBUG:  Done empty condition!\n");
                        }
                }
                break;


            case 3: // Display operation
                if (front == -1)
                    printf("Queue is empty\n");
                else
                {
                    for (int i=front ; i <= rear ; i++)
                        printf("%d ", queue[i]);
                        printf("\n");
                }
                break;


            case 4: // exit from program
                return 0;
            
            default:
                printf("Invalid Choice. \n");
        }
    }
}