/*Author : Vipin
Display the number as follow
first line  :   all digit
second line :   all digit except first digit
.
.
last line   :   the last digit

like 
1234
123
12
1   */
main()
{
    int i;
    int a;
    printf("Enter A Number:");
    scanf("%d",&a);
    printf("%d",a);
    while(!(a<=1))
    {
        a=(int)a/10;
        printf("\n%d",a);
    }
}