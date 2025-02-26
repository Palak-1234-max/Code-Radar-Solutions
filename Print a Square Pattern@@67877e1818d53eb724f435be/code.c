// Your code here...
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    i=0;
    while(i<a)
    {
        j=0;
        while(j<a)
        {
            printf("* ");
            a--;
        }
        printf("\n");
    }
    return 0;
}