/*Author    :   Vipin
Que: Write a Program to read Three values from keyboard and print out the
largest of them Without using IF statement.?        */
main()
{
    int a,b,c,large_num;
    printf("Enter Three Number:");
    scanf("%d %d %d",&a,&b,&c);
    large_num=(a>b&&a>c)?a:((b>c)?b:c);
    printf("\nLargest Number is:%d",large_num);
    

}