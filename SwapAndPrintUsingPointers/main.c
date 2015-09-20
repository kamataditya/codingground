/* Program uses pointers to 
  a) Return the address of larger integer
  b) Swap the two integers and
  c) Return the address of the larger integer
*/

#include <stdio.h>
#include <stdlib.h>

void swapUsingPointers(int*, int*);
int* returnAddressOfLargest(int*, int*);

int main()
{
    int int1, int2;
    
    printf("Enter first integer : ");
    scanf("%d", &int1);
    
    printf("\nEnter second integer : ");
    scanf("%d", &int2);
    
    if(int1==int2)
    {
        printf("\nError: numbers cannot be equal! Exiting.");
        exit(0);
    }
    else
    {
        printf("\nInteger1 = %d, Integer2 = %d", int1, int2);
        printf("\nAddress of Integer1 = %p, Address of Integer2 = %p", &int1, &int2);
        printf("\nAddress of larger integer is %p", returnAddressOfLargest(&int1, &int2));
        
        printf("\nNow swapping integers...");
        swapUsingPointers(&int1, &int2);
        printf("\n\nAfter swapping...");
        printf("\nInteger1 = %d, Integer2 = %d", int1, int2);
        printf("\nAddress of Integer1 = %p, Address of Integer2 = %p", &int1, &int2);
        printf("\nAddress of larger integer is %p\n", returnAddressOfLargest(&int1, &int2));
    }
    return 0;
}

int* returnAddressOfLargest(int* ptr1, int* ptr2)
{
    if(*ptr1>*ptr2)
        return ptr1;
    else
        return ptr2;
}

void swapUsingPointers(int* ptr1, int* ptr2)
{
    //Swap using XOR
    (*ptr1) = (*ptr1)^(*ptr2);
    (*ptr2) = (*ptr1)^(*ptr2);
    (*ptr1) = (*ptr1)^(*ptr2);
}