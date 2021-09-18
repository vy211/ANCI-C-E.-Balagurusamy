/*author : vipin
Que.Write a Program that read a floating-point number and the display the right-most digit of 
integral part.  */
main()
{
    float x;
    int a;
    puts("Enter A Floating Number:");
    scanf("%f",&x);
    a=(int)x;       //or just use % operator after convertin in int  like "a%=10"
    a=a-((int)a/10)*10;
    printf("Right most Digit of Integral part is:%d",a);
    printf("\n");
}