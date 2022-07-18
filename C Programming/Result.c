#include<stdio.h>
#include<conio.h>

int main()

{
    int s1,s2,s3,s4,s5,t,p;

    printf("Entre the all marks:-");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    t=s1+s2+s3+s4+s5;
    printf("The total marks is %d",t);
    
    p=t/5;
    printf("The Total percentage is %d",p);
    
    if (p>=60)
	{
    	printf("First");
    	
	}
	else
	{
		if(p>=45)
		{
			printf("Second division");
		}
	
	else
		
	{
		if(p>=30)
		
		{
			printf("third division");
			
		}
		else
		{
			printf("Try next time ");
		}
	}
	
	}


	return 0;
}
