#include<stdio.h>

int fact(int x);

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);

    int combination = fact(n) / (fact(n-r) * fact(r));
    printf("Combination = %d\n",combination);

    return 0;
}

int fact(int x)
{
    int result = 1;
    for(int i=x;i>=1;i--)
    {
        result *=i;
    }
}


