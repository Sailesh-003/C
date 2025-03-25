#include <stdio.h>

struct st{
    int arr[5];
    int i,j;
};

struct st Insertion_sort(struct st );

int main()
{
    struct st (*fun_ptr)(struct st);
    
    struct st s1= {{15,20,10,5,6},0,0};
    
    fun_ptr = &Insertion_sort;
    
    struct st result = fun_ptr(s1);
    
    for(result.i=0; result.i<5; result.i++)
    printf("%d ",result.arr[result.i]);
}

struct st Insertion_sort(struct st d)
{
    int temp;
    
    for (d.i = 1; d.i < 5; d.i++) {
        temp = d.arr[d.i];  
        d.j = d.i - 1;

        while (d.j >= 0 && d.arr[d.j] > temp) {
            d.arr[d.j + 1] = d.arr[d.j];
            d.j = d.j - 1;
        }
        d.arr[d.j + 1] = temp; 
    }
    
    return d;
}
