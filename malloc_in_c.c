/* Malloc - Stands for Memory allocation. It is used to allocate a single large block of contigious memory
            according to the size specified.
   Syntax - (void *)malloc(size_t size) size_t is unsigned integer

1. It simply allocates a memory block according to the size specified in the heap and on success it returns a
   pointer pointing to the first byte of the allocated memory else returns NULL.

Q.  Why VOID pointer?
Ans. It merely allocates memory requested by user without
     knowing the type of data to be stored inside the memory.

2. The void pointer can be typecasted to an appropiate data type.
    int *ptr = (int *)malloc(4)
    malloc allocates 4 bytes of memory in the heap and the address of first byte is stored in the pointer ptr.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
   int n;
   printf("Enter the number of values you want to enter : ");
   scanf("%d", &n);
   int *ptr = (int *)malloc(n * sizeof(int));

   for (int i = 0; i < n; i++)
   {
      scanf("%d", ptr + i);
   }
   printf("The values are : \n");
   for (int i = 0; i < n; i++)
   {
      printf("%d\n", *(ptr + i));
   }
}