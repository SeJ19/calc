#include<stdio.h>
#include<conio.h>
void main()
{  clrscr();
   int a,b;
   double result=0;
   char choice;
   printf("Enter two numbers: ");
   scanf("%d%d", &a,&b);
   printf("Enter your choice: ");
   printf("\n + for Addition.\n - for Subtraction.\n * for Multiplication.");
   printf("\ / for Division.\n");
   scanf("%c",&choice);
   switch(choice){
case +: result = a+b;
	printf("\nThe sum of %lf and %lf is: %lf",a,b,result);
	break;
case -: result = a-b;
	printf("\nThe difference of %lf and %lf is: %lf",a,b,result);
	break;
case *: result = a*b;
	printf("\nThe product of %lf and %lf is: %lf",a,b,result);
	break;
case /: result = a/b;
	printf("\nThe quotient of %lf and %lf is: %lf",a,b,result);
	break;
default:"invalid choice";
}
getch();
}
