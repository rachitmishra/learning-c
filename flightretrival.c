# include <stdio.h>

main()


{

 char ch[5],dest[4][4]={0};
 int i,j=0;


for(i=0;i<5;i++)
{
while(j<4)
{
puts("Enter Origin");
gets(ch);
dest[i][j]=(int)ch;
j++;
puts("Enter Departure Time");
gets(ch);
dest[i][j]=(int)ch;
j++;
puts("Enter Destination");
gets(ch);
dest[i][j]=(int)ch;
j++;
puts("Enter Arrival Time");
gets(ch);
dest[i][j]=(int)ch;
j++;
}
}


for (i=0;i<5;i++)
{
puts("\n");
for (j=0;j<5;j++)
{
printf("\t%c",dest[i][j]);
}
}



}


 
 