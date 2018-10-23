#include<stdio.h>
#include<stdlib.h>

int afunc(int x);
void bfunc(int x);

int main(void)
{
	int x;
	int t=1;

	srand(time(NULL));

	while(t==1)
	{
		x = (rand()%9000)+1000;
		t = afunc(x);

		if(t==0)
		break;
	}

	bfunc(x);

	printf("Bingo!\n");
}

int afunc(int x)
{
	int q,w,e,r,t=1;

	q = x / 1 % 10;
	w = x / 10 % 10;
	e = x / 100 % 10;
	r = x / 1000 % 10;

	if(q==w || q==e || q==r)
	{t=1;}
	else if(w==q || w==e || w==r)
	{t=1;}
	else if(e==q || e==w || e==r)
	{t=1;}
	else if(r==q || r==w || r==e)
	{t=1;}

	else
	{t=0;}

	return t;
}

void bfunc(int x)
{
	int y;
	int a=0,b=0;
	int i,j,k;

	while(x!=y)
	{
		a=0,b=0;
		printf("Please enter four numbers what you guess :");
		scanf("%d",&y);

		for(i=1;i<=1000;i=i*10)
		{
			if((x/i%10)==(y/i%10))
			{
				a=a+1;
			}
		}

		for(j=1;j<=1000;j=j*10)
		{
			for(k=1;k<=1000;k=k*10)
			{
				if(k==j)
				{
					k=k*10;
				}

				if((x/k%10)==(y/j%10))
				{
					b=b+1;
					break;
				}
			}
		}

	printf("Result : %d A %d B\n",a,b);
	}
}
