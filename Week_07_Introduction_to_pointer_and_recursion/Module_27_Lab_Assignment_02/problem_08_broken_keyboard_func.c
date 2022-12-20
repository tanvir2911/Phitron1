#include<stdio.h>
void solve()
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0; i<n; i++)
    {
        if((i+1)%2==0)
        {
            printf("%c",s[i]);
            printf("%c",s[i]);
        }
        else
            printf("%c",s[i]);
    }
    printf("\n");
}
int main()
{
    solve();
    return 0;
}
