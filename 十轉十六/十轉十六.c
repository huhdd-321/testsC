//輸入正整數，轉成16進位用while 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num,power=1,result=0,i=0;
    char he[]={'A','B','C','D','E','F'};
    while(1)
    {
	    printf("輸入正整數(10進位):");
	    scanf("%d",&num);
		if(num==0 || num>0) break;	
		else
		{
			printf("輸入錯誤，再試一次\n");
			fflush(stdin);
		}
	}
    while(num>=power*16)
	{
		power*=16;	
	} 
	printf("16進位:");
	while(power>0)
	{
		result=num/power;
		if(result<10) 
		{
			printf("%d",result);
		}
		else
		{

			printf("%c",he[result-10]);
		}
		num%=power;
		power/=16;
	}
    return 0;
}

