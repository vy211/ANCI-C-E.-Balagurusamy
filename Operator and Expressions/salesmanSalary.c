/*Author : Vipin Yadav
A computer manufacturing company has the following monthly compensation policy to therir sales-person:
Minumum base Salary                 :1500.00
Bonus for every computer sold       :200.00
Commision of the total mothly sales :2%
Gross Salary :?*/
#include<stdio.h>
#define BASE_SAL 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02     //2%=2x(1/100)
void main(void)
{
    float gros_sal,price;
    float bonus,commission;
    int quantity;
    printf("Enter Quantity and price:\n");
    scanf("%d %f",&quantity,&price);
    bonus=BONUS_RATE*quantity;
    commission=quantity*price*COMMISSION;
    gros_sal=BASE_SAL+bonus+commission;
    printf("\nBonus:         %8.2f",bonus);
    printf("\nCommision:     %8.2f",commission);
    printf("\nGross Salary:  %8.2f",gros_sal);
    printf("\n");

}