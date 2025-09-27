#include <stdio.h>
int main()
{
	system("color 2");
	int num=1,n;
	int i=0,j=n/2,newi,newj;
	int a[20][20]={0};
	printf("這是魔方陣(限制3以上，並且是奇數)\n");
	printf("輸入n大小:");
	while(1)
	{
		scanf("%d",&n);	
		if(n>=3 && n%2!=0)
			break;
		else
			printf("輸入錯誤，再試一次\n");
	}
	
	while(num<=n*n)
	{
		a[i][j]=num;//初始放第一行中間 
		//更新位置若有越界繞回，若無不變 
		newi=(i-1+n)%n;
		newj=(j+1)%n;
		if(a[newi][newj]!=0)//代表位置被占用 
		{
			i=(i+1)%n;
		}
		else
		{
			i=newi;
			j=newj;	
		}
		num++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
