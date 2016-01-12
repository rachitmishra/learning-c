#include<stdio.h>

int main()
{
	int a,fhn,hn,fif,tn,fiv,coin;
	printf("Enter the final amount :");
	scanf("%d",&a);
	fhn=a/500;
	hn=a%500/100;
	fif=(a%500)%100/50;
	tn=((a%500)%100)%50/10;
	coin=(((a%500)%100)%50)%10/1;
	printf("Give :%d Five Hundred Ruppees Notes\nGive :%d Hundred Ruppees Notes\nGive :%d Fifty Ruppees Notes\nGive :%d Ten Ruppees Notes\nGive :%d One Ruppees Coin\n",fhn,hn,fif,tn,coin);
	return 0;
}
