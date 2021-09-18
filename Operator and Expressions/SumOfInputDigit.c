/*Author    :   Vipin
Que: Write a program to read integer number and print the sum of its digit?
*/
main()
{
    int num;
    static int sum;
    printf("Enter 4 digits Number:");
    scanf("%d",&num);
    while(num>=1)
    {
        sum+=num%10;
        num=(int)num/10;

    }
    printf("\nSum Of digits is:%d",sum);
}