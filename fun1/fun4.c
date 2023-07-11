// with argument with return

#include<stdio.h>
int number(int a)
{
	return a;
	
}
int main()
{
	int i;
	for(i = 10; i>=1;  i--)
	{
		printf(" %d",number(i));
	}

}