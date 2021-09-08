/*  Realloc --> Stands for Reallocation.
                It is used to reallocate the memory assigned before.

                Syntax ---> (void *ptr) = (int *) realloc(ptr, sizeof(data_type))
*/

#include<stdio.h>
#include<stdlib.h>
int main(){

    int*ptr = (int *)malloc(2*sizeof(int));

    printf("Enter the values \n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", (ptr+i));
    }
    
    ptr = (int *)realloc(ptr,2*sizeof(int));
    printf("\nEnter two more values : ");
    for(int i=2; i<4; i++){
        scanf("%d", (ptr+i));
    }

    printf("The values you entered are : \n");
    for(int i=0; i<4; i++){
        printf("%d\n", *(ptr+i));
    }
    



}