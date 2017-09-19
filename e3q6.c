#include<stdio.h>
void main()
{
	int p = 30000,inc;
	inc = p * 20 /100;
	p = p + inc;
	inc = p * 30 /100;
	p = p + inc;
	printf("Total Population after 2 years is %d \n",p);
}
