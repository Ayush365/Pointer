/*count no. of vovels and consonents using pointer*/
#include <stdio.h>
int main()
{
    char s[100];
    int v = 0, c = 0;
    printf("Enter a string: ");
    scanf("%s", s);
    char *p;
    p = s;
    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p== 'u')
            v++;
        
        else
            c++;
        
        p++;
        }
        printf("vovels=%d\t consonents=%d\t ",v,c);
    return 0;
}
