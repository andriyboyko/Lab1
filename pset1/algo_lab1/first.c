#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float a=1000;
    float b=0.0001;
    float c;
    double aa=1000;
    double bb=0.0001;
    double cc;
    c=(pow((a+b),3)-(pow(a,3)+3*pow(a,2)*b))/(3*a*pow(b,2)+pow(b,3));
    printf("%F\n",c);
    cc=(pow((aa+bb),3)-(pow(aa,3)+3*pow(aa,2)*bb))/(3*aa*pow(bb,2)+pow(bb,3));
    printf("%1f\n", cc);
}   
    

