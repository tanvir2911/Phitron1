#include <stdio.h>
int main()
{
    int N=10, ara[N], i;

    for(i=0;i<N;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<N;i++)
    {
        printf("%d-th position value = %d\n",i,ara[i]);
    }

    return 0;
}
