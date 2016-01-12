#include<stdio.h>
#define F fflush(stdin);
 main()

{
int i=0,j=0;
char str[101],str_[101],stra[250];


printf("Enter the First String\n\t",i);
gets(str);
printf("Enter the Second String\n\t",i);
gets(str_);
F;
while(str[i]!=0);
{
stra[i]=str[i];
i++;
printf("%s%s%s",str,str_,stra);
}
}



