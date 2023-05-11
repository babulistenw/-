#include<stdio.h>
int main()
{
	int a,b,n,i;
	scanf("%d %d %d",&a,&b,&n);//读入a b n
	for(i=0; ;i++)
	if(i%7>5)
	{
		if(i/7*(5*a+2*b)+(i%7-5)*b+5*a>=n)
		printf("%d\n",i);
	
	}
	else if(i%7<=5)
	{
		if(i/7*(5*a+2*b)+i%7*a>=n)
		printf("%d\n",i);
		
	}
	return 0;
}
