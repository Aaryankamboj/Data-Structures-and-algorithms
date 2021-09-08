#include <stdio.h>
#include <stdlib.h>
int *input()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }
    return ptr;
}
int main()
{
    int *ptr;
    ptr = input();
    int sum=0;
    for(int i=0; i<5; i++){
        sum=sum+*(ptr+i);
    }
    printf("%d", sum);
    free(ptr);
    ptr=NULL;
}