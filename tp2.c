
#include "tp2.h"
#include <string.h>
#include <stdio.h>

char* upper(char* s){
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[i]>'a' && s[i]<'z'){
			s[i]=s[i]-32;
		}
	}
	return s;
}

char* toPyramide(char *s){
	int taille = strlen(s);
	char tabPyramid[taille*2];

    int milieu = (taille*2)/2;
    int min = taille/taille-1;
    int max = milieu*2;

    for (int i = 0; i < taille; i++)
    {
        tabPyramid[milieu+i]=s[i];
		tabPyramid[milieu-i]=s[i];
    }
    tabPyramid[taille*2]='\0';

	for (int i = 0; i < taille; i++)
	{
		tabPyramid[min+i]=' ';
		tabPyramid[max-i]=' ';
    	tabPyramid[taille*2]='\0';
		
		for (int j = 0; j < taille*2; j++)
		{
			printf("%c", tabPyramid[j]);
		}
		printf("\n");
	}

    tabPyramid[taille*2]='\0';

	s = tabPyramid;

	return s;
}


char* toFractionnate(char *s){
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[0]>'a' && s[0]<'z'){
			s[0]=s[0]-32;
		}
		if(s[i]==' '){
			if(s[i+1]>'a' && s[i+1]<'z'){
				printf("\n");
				s[i+1]=s[i+1]-32;
			}
		}else{
			printf("%c", s[i]);
		}
	}
	printf("\n");
	return s;
}