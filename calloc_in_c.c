/* CALLOC(Clear Allocation ) - It is used to allocate multiple blocks of memory dynamically.

1. It is different from malloc in 2 ways :-
       a) It takes 2 arguments in its syntax rather than 1 like malloc.
          Syntax - void* calloc(size_t, size_t size)
          Example - int *ptr = (int *)calloc(10, sizeof(int))
                    Means 10 blocks of memory is allocated with each block is equal to size of int

                    The equivalent malloc call is 
                    int *ptr = (int *)malloc(10 * sizeof(int))

2. It initializes with 0 by default while malloc initializes with some garbage values.

*/
