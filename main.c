/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int s1,s2,s3;
    printf("Enter length of 1st side");
    scanf("%d",&s1);
    printf("Enter length of 2nd side");
    scanf("%d",&s2);
    printf("Enter length of 3rd side");
    scanf("%d",&s3);
    if (s1==s2 && s2==s3)
        printf("Equilateral Triangle");
    else if (s1==s2 || s2==s3 || s3==s1)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}
