#  include <stdio.h>

main()

{
FILE *fp;
int usec='Y';
struct click {

char name[16];
int age;
char code;
};

struct click ob;

fp=fopen("data.dat","wb+");

if (fp==NULL)
{
puts("Error In Opening File");
exit(0);
}

while(usec=='Y')
{
printf(" Enter the Details : ");
scanf("%s%d",ob.name,&ob.age);

fwrite(&ob,sizeof(ob),1,fp);

fflush(stdin);

puts("Continue(Y/N) : ");
usec=getchar();
}

fread(&ob,sizeof(ob),1,fp);
printf("%s-%d",ob.name,ob.age);

fclose(fp);

}


