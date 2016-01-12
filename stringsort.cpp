#include <iostream>
#include <string>
using namespace std;
main ( )
{


	string inputstring;
	int numberofwords = 0;
	int i, j, k, length = 0;
	cout<<"Enter the string (ending with FULLSTOP) : ";
	getline(cin, inputstring);
	cout<<inputstring<<endl;

	for(i = 0; inputstring[ i ]!='.'; i++)
	{
		if(inputstring[ i ]==' ')
		numberofwords++;	
	}


	length = i;
	cout<<"String length is "<<length<<endl;

	char words[numberofwords][50];
	k=0;

	for(j=0; j<numberofwords;)	{
		for(; k<length; k++)	{

					words[j][k]=inputstring[k];
					if( inputstring[k]==' ')
					j++;
			}
	}

	for(j=0; j<numberofwords;j++)	{
		for(k=0;k<length;k++)		{

			cout<<words[j][k];
		}
	}

}