#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a;
	char birthdate[6];
	char asterism_data[36][7]={"01.21","02.18","���~�y",
							   "02.19","03.20","�����y",
							   "03.21","04.20","�d�Ϯy",
							   "04.21","05.20","�����y",
							   "05.21","06.21","���l�y",
							   "06.22","07.22","���Ȯy",
							   "07.23","08.22","��l�y",
							   "08.23","09.22","�B�k�y",	   
							   "09.23","10.23","�ѥ��y",
							   "10.24","11.22","���Ȯy",
							   "11.23","12.21","�g��y",
							   "12.22","01.20","�]�~�y",
							   };
	int i;
	do
	{
		printf("��J�ͤ���(�榡99.99):");
		gets(birthdate);
		for(i=0;i<36;i+=3)
		{
			if((strcmp(birthdate,asterism_data[i])) >=0 )
			{
				if((strcmp(birthdate,asterism_data[i+1])) <=0 )
				{
					printf("�P�y��:%s\n",asterism_data[i+2]);
					break;
				}
			}	
		}						   
		if(i==36)		
			printf("�P�y��:���~�y\n");	
		printf("�A���ϥ�?�Ы�y��Y\n");
		a=getche();	
		system("cls");
	}while(a=='y' || a=='Y');
			   
	return 0;
}
