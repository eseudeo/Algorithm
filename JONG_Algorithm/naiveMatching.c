#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  char str1[20],str2[20];
  int m,n,i,j,count;

  printf("\nEnter text string : ");
  scanf("%s",&str1);

  printf("Enter pattern to search : ");
  scanf("%s",&str2);

  m = strlen(str1);
  n = strlen(str2);

  for(i=0;i<m-n+1;i++)
  {
    for(j=0;j<n;j++)
    {
     count++;
	 if(str1[i+j] != str2[j])
       break;
    }
    count++;
    if(j == n)
    {
      printf("\n\n Pattern found at %d. %d ",i,count);
    }
  }
  getch();
}
