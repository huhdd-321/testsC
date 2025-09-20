#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[2][2],b[2][2],c[2][2]={0};
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("¿é¤J¯x°}a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("¿é¤J¯x°}b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}			
		}
	}
		printf("a*b¯x°}:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("[%d]",a[i][j]);
				
			}
		
		
			if(i == 0) printf("  *  ");
		    else printf("     ");
		    
			for(j=0;j<2;j++)
			{
				printf("[%d]",b[i][j]);
				
			}
				
			if(i == 0) printf("  =  ");
		    else printf("     ");
			
			for(j=0;j<2;j++)
			{
				printf("[%d]",c[i][j]);
				
			}
			printf("\n");
		}
	return 0;
}
