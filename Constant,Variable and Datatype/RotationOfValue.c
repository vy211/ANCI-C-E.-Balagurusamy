/*Author : Vipin
Given the values of x,y and z.write a program to rotate their value such tht x has the value y,
y has the value z and z has the value x?     */
main()
{
    int x=5,y=10,z=15;
    printf("x\ty\tz\n");
    printf("%d\t%d\t%d\n",x,y,z);
    int w;
    w=x;
    x=y;
    y=z;
    z=w;
    printf("%d\t%d\t%d",x,y,z);
    
}