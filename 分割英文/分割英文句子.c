#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char sentence[81],delimiters[81],word[81];
	int len,begin,end,i,j;
	printf("��J�n�Q���Ϊ��r��:");
	gets(sentence);
	printf("��J�����I�r��:");
	gets(delimiters);
	len=strlen(sentence);
	printf("���Ϋ᪺���G:\n");
	begin=0;
	for(i=0;i<len;i++)
	{
		if(strchr(delimiters,sentence[i])!=NULL)
		{
			end=i-1;
			strncpy(word,sentence+begin,end-begin+1);
			word[end-begin+1]='\0';
			printf("%s\n",word);
			begin=i+1;
		}
	}

	return 0;
}
