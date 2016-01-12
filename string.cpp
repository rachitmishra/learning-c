<? php

$sentence = "I am the best Programmer.";
for(int i = 0; $sentence[i]!='.'; i++)
length = i +1;
cout<<"String length is "<<length;
//fractor ( sentence,length,space);
}

fractor ( char senten[100], int len,int arr) {
		char words[arr][100];
		for( int a = 0; a<=len;)	{
				for( int b= 0; b<=arr; b++ )	{
						words[a][b] = senten[b];
						if(senten[b]==' ')	{
								words[a][b]='\0';
								a++;
						}
				}
		}
	}
};

int main( ) {
Stringer string;
string.stringer( );
return 0;
}
