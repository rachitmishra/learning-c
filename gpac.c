#include<stdio.h>
int main()
{
int x=1,i=1,ch,sum=0,aver,gpa[30];

system("clear");
puts("\n|||\tWelcome to GPA Calculator\t|||\n");				
puts("\n\tEnter Your GPA : ");
scanf("%d",&gpa[x]);

do 
{
puts("\n____________________________");
puts("\n\tWhat you want to do : \n");
puts("\t1.Enter Your GPA : ");
puts("\t2.Calculate Average : ");
puts("\t3.Quit !!");
puts("\nEnter Your Choice(1-3):");
scanf("\n%d",&ch);
puts("\n____________________________");

if(ch==1)
{
puts("\n\n\tEnter Your GPA : ");
x++;
scanf("\n%d",&gpa[x]);
}

else if (ch==2)
{
for(i=1;i<=x;i++)
{
sum=sum+gpa[i];
 aver=sum/i;
}
puts("\n____________________________");
printf("\n\tThe Average is : %d\n",aver);
puts("\n____________________________");
}

}while(ch!=3);


return 0;
}