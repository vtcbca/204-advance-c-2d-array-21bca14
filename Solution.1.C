/* Write a Program Demo To creat 3*3 matrics and sum */
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],i,j,sum[3][3];
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
		     printf("\n Enter m2[%d][%d]:",i,j);
		     scanf("%d",&m2[i][j]);
		}
	}
	clrscr();
	printf("\n Matrics1 \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		   printf("%d\t",m1[i][j]);
		}
	}
	printf("\n Matrics2 \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		    printf("%d\t",m2[i][j]);
		printf("\n");
	}
	// Logic Sum of two array

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   if(m1[i][j]==m2[i][j])
		   sum[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("\n Sum of Matrics:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
		    printf("%d\t",sum[i][j]);
		}
	}
	getch();
}