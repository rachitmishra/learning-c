# include<stdio.h>

# define ADD a+b

int getch(void);

main()

{

int a,b;

puts("Enter the two nos.");
scanf("%d%d",&a,&b);

printf("%d",ADD);
fflush(stdin);
getch();

}

int getch(void)
{
char c;
c=getc(stdin);
return(c);
}
