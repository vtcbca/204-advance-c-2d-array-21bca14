/* write a Menu driven Program to Perform following task using UDF and its different catagory. 1.addition, 2.subtraction, 3.division, 4.Modulus, 5.exit */

#include<stdio.h>
#include<conio.h>

void addition(); //function without argument returntype
void subtraction(int,int); //function with argument without retuntype
void division (); //function without argument with returntype
int Modulus(int);// function with argument with return type
int Menu(); //function without argument with returntype
void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
	   clrscr();
	   c=Menu();
	   switch(c)
	   {
		case 1: Addition();
			break;
		case 2: printf("\n Enter two value:");
			scanf("%d%d",&x,&y);
			Subtraction(x,y);
			break;
		case 3: div=Division();
			printf("\n Division is: %d",div);
			break;
		case 4: printf("\n Enter two value:");
			scanf("%d%d",&x,&y);
			div=modulus(x,y);
			printf("\n Modulus of %d & %d is %d",x,y,div);
			break;
		case 5: exit(0);
	       default: printf("\n invalid choise:");
	   }
	printf("\n\n\t Do you want to continue? (yes=Y/y,no=n/N):");
	fulshall();
	scanf("%c",&yn);
	}
	while(yn=='y'||yn=='Y');
	getch();
}
int Menu ()
	{
	   int choise;
	   printf("\n\t Menu \n\t");
	   printf("\n==========================\n 1.Addition, 2.Subtraction, 3.Division, 4.Modulus, 5.Exit \n=====================\n");
	   printf("\n Enter your choise:");
	   scanf("%d",&choise);
	   return(choise);
	}
void Addition()
	{
	  int x,y;
	  scanf("%d%d",&x,&y);
	  printf("\n Addition of %d & %d is %d",x,y,x+y);
	}
void Subtraction(int a, int b)
	{
	  printf("Subtraction od %d & %d is %d",a,b,a-b);
	}
int Division()
	{
	  int x,y;
	  scanf("%d%d",&x,&y);
	  return(x/y);
	}
int Modulus(int x, int y)
	{
	  return(x%y);
	}


