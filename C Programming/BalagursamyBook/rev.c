#include<Stdio.h>

int main()
{
    int n,num, rn;

    printf("Entre a Five Number:");
    scanf("%d", &n);
	
	 num=n;
    
    while(n!=0)
    {
        rn=rn * 10;
        rn = n %10 +rn;
        n= n/10;


    }
	if(num==rn)
    printf("reversed is equal to its original");
    
    else{
    	printf("Reversed is not equal to originol");
    	
	}
    

}
