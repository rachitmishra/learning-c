#include<stdio.h>

int main(int argc, char const *argv[]) {

	int x=0, y=0, length=0, i=0, j=0;
	char string[20];
	scanf("%s", string);

	while(string[x]!='\0'){
		length++;
		x++;
	}

	for(i=0; i<length-1; i++){
		for(j=i+1; j<length; j++){
			if( string[j] == string[i] ){
	   		 	string[j]=" ";
			}
		} 
	}

	for( y=0; y<length; y++){
   	    printf("%s",string[i]);  
	}
}