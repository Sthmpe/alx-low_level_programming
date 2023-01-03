#include <stdio.h>
int main(void)
{
        int var = 100;
        int *pr1;  /* A normal pointer */
        int **pr2; /* A pointer-to-pointer */

        pr1 = &var; /* Assigning the address of var to pointer pr1 */
        pr2 = &pr1; /* Assigning  the address of pr1 to double-pointer pr2 */

        /*Determine the value of variable var*/
        printf("Value of var: %d\n", var);
        printf("Value of var using the pointer pr1: %d\n", *pr1);
        printf("Value of var using the pointer pr2: %d\n", **pr2);

        /*Determine the address of variable var*/
        printf("Address of var: %p\n", &var);
        printf("Address of var using pointer pr1: %p\n", pr1);
        printf("Address of var using pointer pr2: %p\n", *pr2);

        /*Determine the value of pointer ptr1*/
        printf("Value of pointer pr1: %p\n", pr1);
        printf("Value of pointer pr1 using the pointer pr2: %p\n", *pr2);

        /*Determine the address of pointer prt1*/
        printf("Address of pointer pr1: %p\n", &pr1);
        printf("Address  using the pointer pr2: %p\n", pr2);

        /*Double pointer address and value*/
        printf("Value of pointer pr2: %p\n", pr2);
        printf("Address of pointer pr2: %p\n", &pr2);
        
        return (0);
}
