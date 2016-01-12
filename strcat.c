
#include<stdio.h>

main()
{
int i,k;
char str[13],str_[6];

gets(str);
gets(str_);

for(i=0;str[i]!='\0';i++);
// printf("%d",i);

for(k=0;str_[k]!='\0';k++)
{
str[i]=str_[k];
i++;
}
str[i]='\0';


puts(str);

}