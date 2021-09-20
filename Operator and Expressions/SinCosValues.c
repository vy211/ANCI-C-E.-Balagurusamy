/*Author    :   vipin
Que.Write a program to print a table of sin and cos function
for the interval from 0 to 180 degrees increaments of 15.?  */\
#include<math.h>
#include<stdio.h>
int main()
{
    static int ang;
    printf("x(degrees)\tsin(x)\tcos(x)\n");
    while(ang!=180)
    {
        printf("%d\t%f\t%f\n",ang,sin(ang),cos(ang));
        ang+=15;
    }
    return 0;
}
