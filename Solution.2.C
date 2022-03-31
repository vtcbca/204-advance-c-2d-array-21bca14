/* WAP to 3*3 matrics and check it is digonal ro not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],i,j,f;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("Enter m[%d][%d]:",i,j);
		    scanf("%d",&m[i][j]);
		}
	}
	// logic printarray

	printf("\n Matrics array:");
	for(i=0;i<3;i++)
	{
	   printf("\n");
	   for(j=0;j<3;j++)
	   {
	     printf("%d\t",m[i][j]);
	   }
	}

	// Logic daigonal matrics
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	     if(i!=j && m[i][j]!=0)
	     {
	       f=1;
	     }
	  }
	}
	if(f==1)
	printf("\n Matrics is not daigonal");
	else
	printf("\n Matrics is daigonal");
	getch();
}