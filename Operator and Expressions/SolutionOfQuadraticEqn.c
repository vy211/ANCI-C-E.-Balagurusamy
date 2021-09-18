/*Author : Vipin Yadav
    Find nature and root of Quadratic quation ax^2+bx+c=0   */
#include<math.h>
#include<stdio.h>//ANSI C execute this header file automatically
int main()
{
    float a,b,c,root1,root2,descriminat;
    printf("Your Quadratic Equation in form of ax^2+bx+c=0\n");
    printf("Enter the value of a, b and c:\n");
    scanf("%f %f %f",&a,&b,&c);
    descriminat=b*b-4*a*c;
    if(descriminat<0)
    {
        printf("\nRoots are Imaginary!!");
    }
    else if(descriminat==0)
    {
        root1=(-b+sqrt(descriminat))/(2*a);
        printf("\nBoth Roots Are Equal!\nRoot1 And Root2=%5.2f",root1);
    }
    
    else 
    {
        root1=(float)(-b+sqrt(descriminat))/(2.0*a);
        root2=(float)(-b-sqrt(descriminat))/(2.0*a);
        printf("\nRoot1=%5.3f\nRoot2=%5.2f",root1,root2);

    }
return 0;
}