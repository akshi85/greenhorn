#include<stdio.h>
main()
{
	 int a,b,c;
	 printf("value of a and b");
	 scanf("%d%d",&a,&b);
	 c=a;
	 a=b;
	 b=c;
	 printf("\n value of a=%d b=%d",a,b);
}
