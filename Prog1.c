#include <stdio.h>

struct st{
    int arr[5];
    int i,j;
};

struct st Bubble_sort(struct st );

int main()
{
    struct st (*fun_ptr)(struct st);
    
    struct st s1= {{15,20,10,5,6},0,0};
    
    fun_ptr = &Bubble_sort;
    
    struct st result = fun_ptr(s1);
    
    for(result.i=0; result.i<5; result.i++)
    printf("%d ",result.arr[result.i]);
    
}

struct st Bubble_sort(struct st d)
{
    for(d.i; d.i<5; d.i++)
    {
        for(d.j=0; d.j<5-d.i-1; d.j++)
        {
            if(d.arr[d.j]>d.arr[d.j+1])
            {
                int temp = d.arr[d.j];
                d.arr[d.j] = d.arr[d.j+1];
                d.arr[d.j+1] = temp;
            }
        }
    }
    
    return d;
}
