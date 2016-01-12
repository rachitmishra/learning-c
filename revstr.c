/*Reversing Any Input String
*/



# include<stdio.h>

 main()

{

char str[50];
puts("Enter Your String :");
gets(str);
int i=0,j;
for(i=0;str[i]!='\0';i++)
{
}

for(j=i;j>=0;j--)
printf("%c",str[j]);

}