#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char *str_concat(char *s1, char *s2)
{
	int cat = 0, rat = 0;
	char *buff;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[cat] != '\0')
		cat++;

	while(s2[rat] != '\0')
		rat++;
	buff = malloc(sizeof(char) * (cat + rat + 1));
	if (buff != NULL)
	{
		cat = rat = 0;
		while (s1[rat] != '\0')
		{	buff[rat] = s1[rat];
			rat++;
		}
		while (s2[cat] != '\0')
		{
			buff[rat] = s2[cat];
			rat++,cat++;
	
		}
	}
		return (buff);
		
		
}
