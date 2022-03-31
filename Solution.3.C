/* Write a Program To creat 3*3 matrics and print its Multiplication matrics */
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],i,j,a=0,k,m[3][3];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf(" Enter m1[%d][%d]:",i,j);
		    scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     printf(" Enter m2[%d][%d]:",i,j);
		     scanf("%d",&m2[i][j]);
		}
	}
	clrscr();
	printf("\n\nMatrics1 \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		   printf("%d\t",m1[i][j]);
		}
	}
	printf("\n\nMatrics2 \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		    printf("%d\t",m2[i][j]);
		}
	}
	// Logic Multiplication of two array

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   a=0;
		  for(k=0;k<3;k++)
		  {
		   a=a+m1[i][k]*m2[k][j];
		   m[i][j]=a;
		   }
		}
	}
	printf("\n\nMultiplication of Matrics:\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		    printf("%d\t",m[i][j]);
		}
	}
	getch();
}