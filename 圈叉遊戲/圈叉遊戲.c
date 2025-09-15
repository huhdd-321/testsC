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
	int people;//選擇某人 
	int row,col;//座標 
	int num=1;
	int i,j;
	printf("OX遊戲\n");
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
		printf("第一人以O為記號，第2人以X為記號\n");
		printf("第%d人填選的",people+1);
		printf("位置row,col(row=0,2,4 col=0,2,4):");
		if(scanf("%d,%d",&row,&col)!=2)
		{
			printf("位置格式錯誤，重新輸入!\n");
			fflush(stdin);
			continue;
		}
		if(!(row>=0 && row<=4 && col>=0 && col<=4))
		{
			printf("無(%d,%d)位置，重新輸入!\n",row,col);
			continue;
		}
		if(pos[row][col] !=' ')
		{
			printf("位置(%d,%d)已有OX，重新輸入!\n",row,col);
			continue;
		}
		pos[row][col]=pic[people];
		
		system("cls");
		printf("OX遊戲\n");
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%c",pos[i][j]);
			}
			printf("\n");
		}
		if(pos[row][0] == pos[row][2] && pos[row][2] == pos[row][4]) //判斷左到右 
		{
			printf("第%d人贏了\n",people+1);
			break;
		}
		if(pos[0][col] == pos[2][col] && pos[2][col] == pos[4][col])//判斷上到下 
		{
			printf("第%d人贏了\n",people+1);
			break;
		}
		if(row == col)//
		{
			if(pos[0][0] == pos[2][2] && pos[2][2] == pos[4][4])//判斷左對角 
			{
				printf("第%d人贏了\n",people+1);
				break;
			}	
		}
		if(row + col ==4)
		{
			if(pos[0][4] == pos[2][2] && pos[2][2] == pos[4][0])//判斷右對角 
			{
				printf("第%d人贏了\n",people+1);
				break;
			}	
		}		
		num++;
		printf("num=%d\n",num);
		if(num==10)
		{
			printf("num=%d\n",num);
			printf("\n平手\n");
			break;
		}
		
		
		people++;
		people%=2;
	}
    return 0;
}

