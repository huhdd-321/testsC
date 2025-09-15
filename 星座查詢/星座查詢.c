#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a;
	char birthdate[6];
	char asterism_data[36][7]={"01.21","02.18","水瓶座",
							   "02.19","03.20","雙魚座",
							   "03.21","04.20","牡羊座",
							   "04.21","05.20","金牛座",
							   "05.21","06.21","雙子座",
							   "06.22","07.22","巨蠍座",
							   "07.23","08.22","獅子座",
							   "08.23","09.22","處女座",	   
							   "09.23","10.23","天平座",
							   "10.24","11.22","天蠍座",
							   "11.23","12.21","射手座",
							   "12.22","01.20","魔羯座",
							   };
	int i;
	do
	{
		printf("輸入生日日期(格式99.99):");
		gets(birthdate);
		for(i=0;i<36;i+=3)
		{
			if((strcmp(birthdate,asterism_data[i])) >=0 )
			{
				if((strcmp(birthdate,asterism_data[i+1])) <=0 )
				{
					printf("星座為:%s\n",asterism_data[i+2]);
					break;
				}
			}	
		}						   
		if(i==36)		
			printf("星座為:摩羯座\n");	
		printf("再次使用?請按y或Y\n");
		a=getche();	
		system("cls");
	}while(a=='y' || a=='Y');
			   
	return 0;
}
