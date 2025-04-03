#include <stdio.h>

#define Max 5

int stack[Max];
int top = 0;

void push();
void pop();
void display();

int main()
{
    int op;
    
    while(1)
    {
        printf("Enter the option 1)push 2)pop 3)display 4)exit\n");
        scanf(" %d",&op);
        
        switch(op)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid option\n"); return 0;
        }
    }
}

void push()
{
    if(top == Max)
    {
        printf("Stack overflow\n");
        return;
    }
    
    int ele;
    printf("Enter the element to push\n");
    scanf(" %d",&ele);
    stack[top++] = ele;
}

void pop()
{
    if(top == 0)
    {
        printf("Stack underflow\n");
        return;
    }
    
    printf("%d is popped\n",stack[top - 1]);
    stack[--top] = 0;
}

void display()
{
    if(top == 0)
    {
        printf("Stack is empty\n");
        return;
    }
    
    for(int i=0; i<top; i++)
    printf("%d ",stack[i]);
    printf("\n");
}
