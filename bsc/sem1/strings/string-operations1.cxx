/**
  *  author: m. c., Comp Sc., NNCD collage
  **/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int compare_strings(char a[], char b[])
{
	int c = 0;
	while (a[c] == b[c])
	{
		if (a[c] == '\0' || b[c] == '\0')
			break;
		c++;
	}
	if (a[c] == '\0' && b[c] == '\0')
		return 0;
	else
		return -1;
}
int main()
{
	char str1[10], str2[10], *pt, rev[10];
	int ch, i, j, count = 0, end;
	while (1)

	{
		printf("\n\n 1.show address of each character in a string\n"
		       " 2. concatenate two strings  without using strcat()\n"
		       " 3. concatenate two strings using strcat()\n"
		       " 4. compare two strings \n"
		       " 5.find length of a string\n"
		       " 6.convert all lower case character to upper case \n"
		       " 7. convert all upper case character to lower case\n"
		       " 8. count number of vowels\n"
		       " 9.reverse the string\n"
		       " 10.exit\n enter your choice ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("\nenter a string ");
			scanf("%s", str1);
			printf(" \n address of each character in the string is as follows\n\n ");
			for (i = 0; str1[i] != '\0'; i++)
			{
				printf(" %x", &str1[i]);
			}
			break;
		case 2:
			printf("\n enter first string ");
			scanf("%s", str1);
			printf("\n enter second string ");
			scanf("%s", str2);
			for (i = 0; str1[i] != '\0'; i++)
				;
			for (j = 0; str2[j] != '\0'; i++, j++)
			{
				str1[i] = str2[j];
			}
			str1[i] = '\0';
			printf("\n strings after concatenation %s", str1);
			break;
		case 3:
			printf("\n enter first string");
			scanf("%s", str1);
			printf("\n enter second string");
			scanf("%s", str2);
			printf("\n strings after concatenation %s", strcat(str1, str2));
			break;
		case 4:
			printf("\n enter first string ");
			scanf("%s", str1);
			printf("\n enter second string ");
			scanf("%s", str2);
			if (compare_strings(str1, str2) == 0)
				printf("Equal strings.\n");
			else
				printf("Unequal strings.\n");
			break;
		case 5:
			printf("\n enter a string ");
			scanf("%s", str1);
			pt = str1;
			i = 0;
			while (*pt != '\0')
			{
				i++;
				pt++;
			}
			printf("Length of String : %d", i);
			break;
		case 6:
			i = 0;
			printf("\n enter a string ");
			scanf("%s", str1);
			while (str1[i] != '\0')
			{
				if (str1[i] >= 'a' && str1[i] <= 'z')
				{
					str1[i] = 'str1[i]' - 32;
				}
				i++;
			}
			printf("\n after upper case conversion %s", str1);
			break;
		case 7:
			i = 0;
			printf("\n enter a string ");
			scanf("%s", str1);
			while (str1[i] != '\0')
			{
				if (str1[i] >= 'A' && str1[i] <= 'Z')
				{
					str1[i] = 'str1[i]' + 32;
				}
				i++;
			}
			printf("\n after lower case conversion %s", str1);
			break;
		case 8:
			printf("\n enter a string ");
			scanf("%s", str1);
			count = 0;
			i = 0;
			while (str1[i] != '\0')
			{
				if (str1[i] == 'a' || str1[i] == 'A' || str1[i] == 'e' || str1[i] == 'E' || str1[i] == 'i' || str1[i] == 'I' || str1[i] == 'o' || str1[i] == 'O' || str1[i] == 'u' || str1[i] == 'U')
					count++;
				i++;
			}
			printf("\n total number of vowels %d", count);
			break;
		case 9:
			printf("\n enter a string ");
			scanf("%s", str1);
			count = 0;
			while (str1[count] != '\0')
				count++;

			end = count - 1;
			for (i = 0; i < count; i++)
			{
				rev[i] = str1[end];
				end--;
			}
			rev[i] = '\0';
			printf("reversed string is %s\n", rev);
			break;
		case 10:
			exit(0);
			break;
		default:
			printf("wrong choice");
		}
	}
}
