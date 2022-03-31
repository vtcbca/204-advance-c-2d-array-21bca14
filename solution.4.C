/* Write a program to enter 5 string. perform searching operation by entering and user choise string and checkstring is available or not */

#include<stdio.h>
#include<conio.h>
void main()
{
	char s[5][10],f[10];
	int i,flag=0;
	clrscr();
	//Enter 5 string
	for(i=0;i<5;i++)
	{
		printf("\n Enter string %d",i);
		gets(s[i]);
	}
	//print 5 inputted string
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("%s\n",s[i]);
		//searching string
	}
	printf("\n\n\t Enter string which you want to search:");
	gets(f);
	for(i=0;i<5;i++)
	{
		//if(strcmp(s[i],f)==0)
		{
		  //printf("\n  string is available....!!!");
		  flag=1;
		  break;
		}
	}
	if(flag==0)
		printf("\n String is not avialbale...!!!");
	else
		printf("\n string is available....!!!");
	getch();
}