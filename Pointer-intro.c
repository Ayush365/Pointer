/* In this code, we declare an integer variable `a` and initialize it with the value 179.
We then declare a pointer variable `p` of type int. We assign the address of `a` to `p`.

Next, we use the `printf` function to print the value of `a` using the pointer `p`. 
We dereference `p` by using the `*` operator, which gives us the value of `a`.

Then, we print the address of `a` stored in the pointer `p`. Finally, 
we print the value of `a` directly and the address of `a`.

The output of this code will be the value of `a` (179) printed 4 times,
followed by the address of `a` printed twice.
*/
#include<stdio.h>
void main(){
    int a=179;                 //initialize integer a with value 179
    int *p;                    //declare pointer p of type int
    p=&a;                      //assign address of a to pointer p
    printf("%d\n",*p);        //print value of a (179) using pointer p
    printf("%u\n",p);         //print address of a stored in pointer p
    printf("%d\n",a);         //print value of a (179) directly
    printf("%u\n",&a);        //print address of a
}

/* OUTPUT
179
2500928604
179
2500928604 
    NOTE THAT ADDRESS CHANGES EVERY TIME YOU RUN CODE */ 
