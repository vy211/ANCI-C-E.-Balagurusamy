/* Author : Vipin Yadav
 Conversion of Celsius Temperature And Fahrenheit*/
 #include<stdio.h>//Not neesesary to add header because ANSI C Automatically add it!
 void main(void)
 {
     int choice;

     float f,c;
     printf("Choose 1 for Celsius to Fahrenheit and 2 for Fahrenheight to Celsius:\n");
     printf("1.Celsius To Fahrenheit\n2.Fahrenheit To Celsius\nYour Choice:");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
            printf("\nCelsius=");
            scanf("%f",&c);
            f=((9*c)/5)+32;
            printf("\nFahrenheit=%.2f",f);
            break;
        case 2:
            printf("\nFahrenheit=");
            scanf("%f",&f);
            c=((f-32)*5)/9;
            printf("\nCelsius=%.2f",c);
            break;
        default:
            printf("\nWrong Choice!!!!");\
            break;

     }

     printf("\n");

 }
