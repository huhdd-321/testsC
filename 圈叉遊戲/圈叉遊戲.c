#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char pic[3]={'O','X'};
	char pos[5][5]={{' ' ,'|',' ' ,'|',' '},
					{'-' ,'+','-' ,'+','-'},
					{' ' ,'|',' ' ,'|',' '},
					{'-' ,'+','-' ,'+','-'},
					{' ' ,'|',' ' ,'|',' '}};
	int people;//��ܬY�H 
	int row,col;//�y�� 
	int num=1;
	int i,j;
	printf("OX�C��\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c",pos[i][j]);
		}
		printf("\n");
	}
	people=0;
	while(1)
	{
		printf("�Ĥ@�H�HO���O���A��2�H�HX���O��\n");
		printf("��%d�H��諸",people+1);
		printf("��mrow,col(row=0,2,4 col=0,2,4):");
		if(scanf("%d,%d",&row,&col)!=2)
		{
			printf("��m�榡���~�A���s��J!\n");
			fflush(stdin);
			continue;
		}
		if(!(row>=0 && row<=4 && col>=0 && col<=4))
		{
			printf("�L(%d,%d)��m�A���s��J!\n",row,col);
			continue;
		}
		if(pos[row][col] !=' ')
		{
			printf("��m(%d,%d)�w��OX�A���s��J!\n",row,col);
			continue;
		}
		pos[row][col]=pic[people];
		
		system("cls");
		printf("OX�C��\n");
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%c",pos[i][j]);
			}
			printf("\n");
		}
		if(pos[row][0] == pos[row][2] && pos[row][2] == pos[row][4]) //�P�_����k 
		{
			printf("��%d�HĹ�F\n",people+1);
			break;
		}
		if(pos[0][col] == pos[2][col] && pos[2][col] == pos[4][col])//�P�_�W��U 
		{
			printf("��%d�HĹ�F\n",people+1);
			break;
		}
		if(row == col)//
		{
			if(pos[0][0] == pos[2][2] && pos[2][2] == pos[4][4])//�P�_���﨤 
			{
				printf("��%d�HĹ�F\n",people+1);
				break;
			}	
		}
		if(row + col ==4)
		{
			if(pos[0][4] == pos[2][2] && pos[2][2] == pos[4][0])//�P�_�k�﨤 
			{
				printf("��%d�HĹ�F\n",people+1);
				break;
			}	
		}		
		num++;
		printf("num=%d\n",num);
		if(num==10)
		{
			printf("num=%d\n",num);
			printf("\n����\n");
			break;
		}
		
		
		people++;
		people%=2;
	}
    return 0;
}

