#include<stdio.h>
struct Course {
    char name[20];
    int price;
};

int main()
{
    struct Course c1 ={"C Programming",5000};

    printf("%s",c1.name);
    return 0;
}
