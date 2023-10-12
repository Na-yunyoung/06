#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n);
int combination(int n,int r);

int main(int argc, char *argv[]) 
{
	int n,r;
	
	printf("n을 입력하시오 :");
	scanf("%i",&n);
	
	printf("r을 입력하시오 :");
	scanf("%i",&r);
	
	printf("C(%i,%i) = %i",n,r,combination(n,r));
	
	
	

	return 0;
}

int factorial(int n){

	int res = 1;
	int i;
	
	
	for (i=1;i<=n;i++)
		res = res*i;
	
	return res;
}

int combination(int n,int r) {
	int div1, div2; //div1:분자 div2:분모 
	
	div1 = factorial(n);
	div2 = factorial(n-r)*factorial(r);
	
	return (div1/div2);
}

