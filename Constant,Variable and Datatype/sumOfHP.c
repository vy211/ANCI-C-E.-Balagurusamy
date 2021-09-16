/*Author :Vipin Yadav
   Objective: Sum of Harmonic Progration like 1+1/2+1/3....1/n      */
#include<stdio.h>
void main()
{

    float sum;
    int i,n;
    sum=0;
    printf("Sum of Term 1+1/2+1/3.....1/n\nEnter the Value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(1/(float)i);
    }
    
    printf("\nSum=%f",sum);


}
