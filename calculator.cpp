#include<stdio.h>
#include<conio.h>
int main()
{

 float num1;
 float num2;
 char op;
 float result;
 printf("Enter first number:-");
 scanf("%f",&num1);
 printf("enter the operation:-");
 scanf(" %c",&op);	
 printf("Enter the second number:-");
 scanf("%f",&num2);
 switch(op)
 {
 	case '+':
 		result=num1+num2;
 		printf("%f",result);
 		break;
 	case '-':
 		result=num1-num2;
 		printf("%f",result);
 		break;
    case '*':
 		result=num1*num2;
 		printf("%f",result);
 		break;
 	case '/':
 		result=num1/num2;
 		printf("%f",result);
 		break;
 	default:
	 printf("the operator is not valid");	
 	
 	
 		
 }
 getch();
}
