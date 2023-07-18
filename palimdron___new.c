#include<stdio.h>
void palindrom();
main()
{
	palindrom();
}
void palindrom()
{
	int a[5],b[5],i,j=0,flag=0;
	printf("enter 5 number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		b[j]=a[i];
		 j++;
	}
	for(i=0,j=0;i<=4;i++,j++)
	{
		if(a[i]=a[i])
		{
			flag=0;
		}
		else
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("number are palindrom=%d",flag);
	}
	else if (flag==1)
	{
		printf("not palindrom number=%d",flag);
	}
}
