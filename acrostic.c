// ACROSTIC WORD PUZZLE

#include <stdio.h>

main()

{

char puzz[5][6];
int i,j;

for(i=0;i<5;i++)
{
printf("Enter String %d :",i+1);
gets(puzz[i]);
}


for(i=4;i>=0;i--)
{

for(j=4;j>=0;j--)
{
printf("%c",puzz[i][j]);
}

}
}

