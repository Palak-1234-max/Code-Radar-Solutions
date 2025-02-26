// Your code here...
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a>0)
    {
        while(a>0)
        {
            printf("* \n");
            a--;
        }
        a--;
        printf("\n");
    }
    return 0;
}