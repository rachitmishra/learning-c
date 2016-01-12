#include <stdio.h>

main()
{

FILE *pt;

char alpha='Y';

struct emp 
{
char name[50];
int age;
int salary;

};
struct emp e;

pt=fopen("demo.dat","wb");

if(pt==NULL)
{
puts("\nFile Can't be Opened");
exit(0);
}

while (alpha=='Y')
{
printf("\n Enter Employee details : ");
scanf("%s%d%d",e.name,&e.age,&e.salary); 
fflush(stdin);
fwrite(&e,sizeof(e),1,pt);

puts(" Other records (Y/N): ");
alpha=getchar();

}

fclose(pt);
}