#include<stdio.h>

int main()
{
    int a = 15;
    int ara[3] = {5,6,7};
    int* p;

    p = &a;

    printf("%p\n",p);
    printf("%d\n",*p);
    printf("\n");

    for(int i=0;i<3;i++)
        printf("%p\n",&ara[i]);

    printf("\n");

    printf("%p\n",ara);
    printf("%p\n",(ara+1));
    printf("%p\n",(ara+2));

    return 0;
}
