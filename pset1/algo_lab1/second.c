#include <stdio.h>

int main(void)
{
    float m;
    float n;
    printf("n: ");
    scanf("%f",&n), n--;
    printf("m: ");
    scanf("%f",&m);
    int a=n-m;
    printf("n---m=%i\n",a);
}
