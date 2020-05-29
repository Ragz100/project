#include<stdio.h>
#define max 9999
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int n,a[max],b[max],r[max],s=0,w,i,j;
	float t,x,u;
	printf("enter th no.of items\n");
	scanf("%d",&n);
	printf("enter the value\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the weight\n");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
		r[i]=a[i]/b[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(r[j]<r[j+1])
			{
				swap(&r[j],&r[j+1]);
				swap(&a[j],&a[j+1]);
				swap(&b[j],&b[j+1]);
			}
		}
	}
	printf("enter the weight\n");
	scanf("%d",&w);
	for(i=0;i<n;i++)
	{
		w=w-b[i];
		if(w>0)
		{
			s=s+a[i];
			t=w;
		}
		else
		{
			s=s+(r[i]*t);
			u=b[i];
			break;
		}
	}
	printf("profit %d\n",s);
	x=(t/u);
	printf("fraction %f",x);
}
