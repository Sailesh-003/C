#include <stdio.h>

struct st{
    int arr[5];
    int i,ele,res;
};

int Linear_Search(struct st );

int main()
{
    int (*fun_ptr)(struct st);
    
    struct st s1= {{15,20,10,5,6},0,10};
    
    fun_ptr = &Linear_Search;
    
    int res = fun_ptr(s1);
    
    if(s1.res != -1)
    printf("Element %d found at index %d\n", s1.ele, res);
    
    else
    printf("Element %d not found in the array\n", s1.ele);
}

int Linear_Search(struct st d)
{
    for (d.i; d.i < 5; d.i++) 
    {
        if (d.arr[d.i] == d.ele)
        return d.i; 
    }
    return -1;
}
