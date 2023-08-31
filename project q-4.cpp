#include<stdio.h>
main()
{
	float grosssalary,basesalary,HRA,DA,TA;
	printf("enter value of base salary,HRA,DA,TA=");
	scanf("%f%f%f%f",&basesalary,&HRA,&DA,&TA);
	HRA=basesalary*(HRA/100.f);
	DA=basesalary*(DA/100.f);
	TA=basesalary*(TA/100.f);
	grosssalary=basesalary+HRA+DA+TA;
	printf("gs=%f",grosssalary);
	
}
