#include <stdio.h>
int main()
{
	int i, j, k;
	k=0;
	
	printf(" Enter the value of i.\n");
	scanf("	%i", &i);
	printf(" Enter the value of j.\n");
	scanf("	%i", &j);
	printf("select 1 for addition");
	printf("select 2 for subtract");
	printf("select 3 for multiplication");
	printf("select 4 for divide");
	scanf("%i", &k);
	if (k==1){
	
		printf(" %i + %i = %i ", i, j, i+j);
	
		
	}
	
	else if (k==2){
	
		printf(" %i - %i = %i ", i, j, i-j);
	
	}
	
	else if (k==3){
	
		printf(" %i * %i = %i ", i, j, i*j);
	
	}
	
	else if (k==4){
	
		printf(" %i / %i = %i ", i, j, i/j);
	
	}
	
	
	else {
	printf("the selected command is oyut of scope \n");
	}
	
	
	
	return 0;
}
