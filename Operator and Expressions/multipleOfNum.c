/*Author    :   Vipin
Que: Write a program to read two integer m and n 
and to decide and print whether m is multiple of n.?    */
main()
{
    int m,n,mul;
    printf("Enter the value of m:");\
    scanf("%d",&m);
    printf("Enter the value of n:");\
    scanf("%d",&n);
    if(m%n==0)
        printf("%d is Multiple of %d",m,n);
    else
        printf("%d is Not Multiple of %d",m,n);
    
}
