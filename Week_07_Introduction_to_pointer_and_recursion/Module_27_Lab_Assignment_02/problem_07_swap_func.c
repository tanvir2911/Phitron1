#include<stdio.h>

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&ara[i]);

    int q,l,r;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d %d",&l,&r);
        swap(&ara[l],&ara[r]);
    }

    for(int i=1;i<=n;i++)
        printf("%d ",ara[i]);

    return 0;
}
