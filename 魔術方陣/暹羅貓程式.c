#include <stdio.h>
int main()
{
	system("color 2");
	int num=1,n;
	int i=0,j=n/2,newi,newj;
	int a[20][20]={0};
	printf("�o�O�]��}(����3�H�W�A�åB�O�_��)\n");
	printf("��Jn�j�p:");
	while(1)
	{
		scanf("%d",&n);	
		if(n>=3 && n%2!=0)
			break;
		else
			printf("��J���~�A�A�դ@��\n");
	}
	
	while(num<=n*n)
	{
		a[i][j]=num;//��l��Ĥ@�椤�� 
		//��s��m�Y���V��¶�^�A�Y�L���� 
		newi=(i-1+n)%n;
		newj=(j+1)%n;
		if(a[newi][newj]!=0)//�N���m�Q�e�� 
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
