# include <stdio.h>
# include <string.h>
# include <stdlib.h>


void sorting(char a[][10],int n);

int  main()
{
char s[10][10];
int i;


	for(i=0;i<10;i++)
	{
		printf("Enter name:");
		gets(s[i]);
	}


	sorting(s,10);
	printf("\nSorted Names\n");
	for(i=0;i<10;i++)
		{
		printf("%s\n",s[i]);
		}
return 0;
}

void sorting(char a[][10],int n)
{
	int i,j;
	int choice;
	char temp[10];


				for(i=0;i<10;i++)
					{
						for(j=i+1;j<10;j++)
						{
							if(strcmp(a[j],a[i])<0)
								{
									strcpy(temp,a[i]);
									strcpy(a[i],a[j]);
									strcpy(a[j],temp);
								}
						}
					}
			 }


