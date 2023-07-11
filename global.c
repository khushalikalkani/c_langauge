#include<stdio.h>
int display( int m, int s, int e, float per, int t)
{
	printf("maths\tsciense\tenglish\ttotal\tper");
	printf("\n%d\t%d\t%d\t%d\t%.2f",m, s, e, t, per);
}

int calc(int m, int s, int e)
{
	int t;
	float per;
	t = m + s + e;
	per = (float)t/3;
	display(m, s, e, per, t);
}
int setData()
{
	int m, s, e;
	printf("Enter maths marks");
	scanf("%d",&m);
	printf("Enter science marks");
	scanf("%d",&s);
	printf("Enter english marks");
	scanf("%d",&e);
	calc(m, s, e);
}
int main()
{
	setData();
}