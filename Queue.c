#include <stdio.h>

#define Max 5

int Queue[Max];
int rear = 0, front = 0;

void Enqueue();
void Dequeue();
void display();

int main()
{
    int op;
    
    while(1)
    {
        printf("Enter the optio 1)Enqueue 2)Dequeue 3)display 4)exit\n");
        scanf(" %d",&op);
        
        switch(op)
        {
            case 1: Enqueue(); break;
            case 2: Dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid option\n"); return 0;
        }
    }
}

void Enqueue()
{
    if(rear == Max)
    {
        printf("Queue overflow\n");
        return;
    }
    
    int ele;
    printf("Enter the element to Queue\n");
    scanf(" %d",&ele);
    Queue[rear++] = ele;
}

void Dequeue()
{
    if((rear == 0)||(front == rear))
    {
        printf("Queue underflow\n");
        return;
    }
    
    printf("%d is popped\n",Queue[front]);
    Queue[front++] = 0;
}

void display()
{
    if((rear == 0)||(front == rear))
    {
        printf("Queue is empty\n");
        return;
    }
    
    for(int i=0; i<Max; i++)
    printf("%d ",Queue[i]);
    printf("\n");
}
