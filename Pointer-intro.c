c
void main(){
    int a=179;                 //initialize integer a with value 179
    int *p;                    //declare pointer p of type int
    p=&a;                      //assign address of a to pointer p
    printf("%d\n",*p);        //print value of a (179) using pointer p
    printf("%u\n",p);         //print address of a stored in pointer p
    printf("%d\n",a);         //print value of a (179) directly
    printf("%u\n",&a);        //print address of a
}