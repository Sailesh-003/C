#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char name[27];
    int roll;
    float marks;
    struct student *next;
}ST;

void add_begin(ST **);
void print(ST *);

int main()
{
    ST *hptr = 0;
    char ch;
    
    do{
        add_begin(&hptr);
        printf("You want to continue Y|N\n");
        scanf(" %c",&ch);
    }while((ch == 'y')||(ch == 'Y'));
    
    print(hptr);
}

void add_begin(ST **ptr)
{
    ST *temp = (ST *)malloc(sizeof(ST));
    
    printf("Enter the name, roll & marks\n");
    scanf(" %s %d %f",temp->name,&temp->roll,&temp->marks);
    
    temp->next = *ptr;
    *ptr = temp;
}

void print(ST *ptr)
{
    while(ptr != 0)
    {
        printf("%s %d %.2f\n",ptr->name,ptr->roll,ptr->marks);
        ptr = ptr->next;
    }
}
