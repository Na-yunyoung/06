#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b);

int square(int n);

int get_max(int x,int y);

int main(int argc, char *argv[]) 
{
	int a,b;
	a = 3;
	b = 5;
	printf("sumTwo result is %i\n",sumTwo(a,b));
	
	int n;
	n = 4;
	printf("square result is %i\n",square(n));
	
	int x,y;
	x = 2;
	y = 5;
	printf("get_max result is %i\n",get_max(x,y));
	
	return 0;
}

int sumTwo(int a,int b) {
	int result;
	
	result = a + b;
	
	return result;
}

int square(int n) {
	int result;
	
	result = n*n;
	
	return result;
}

int get_max(int x,int y) {
	if (x > y)
		return x;
	else
		return y;
}

