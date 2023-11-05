/*Write a C Program to Read integers into an array and reversing them using Pointers*/
/*
In this code, we declare an array `a` of size 5 and a pointer `ptr`. We then prompt the user to enter 5 elements and store them in the array.

The pointer `ptr` is assigned the address of the last element in the array. We then use a loop to iterate through the array in reverse order, printing the value at each element and decrementing the pointer.

This code demonstrates how to use a pointer to traverse an array in reverse order.*/
#include <stdio.h>
#define n 5
int main()
{
    int i, a[n];
    printf("enter five elements");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int *ptr;
    ptr = &a[n - 1];           //pointing to the last element
    for (i = 0; i < n; i++)

    {
        printf("%d\t", *ptr);
        ptr--;
    }
    return 0;
}
