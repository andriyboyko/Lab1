#include <stdio.h>

int main(void)
{
    float m;
    float n;
    printf("n: ");
    scanf("%f",&n);
    printf("m: ");
    scanf("%f",&m), m--;
    int a=m<n;
    printf("m--<n=%i\n",a);
}
