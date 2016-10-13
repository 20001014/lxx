#include<stdio.h>
#include<math.h>
int main()
{
	int c[129][129],i,j,t,Sp=0,n,d,s=0,Smax=0;
	scanf("%d%d",&d,&n);
	int x[n],y[n],k[n];
	for(i=0;i<n;i++)
		scanf("%d %d %d",&x[i],&y[i],&k[i]);
	for(i=0;i<129;i++)
	{
		for(j=0;j<129;j++)
		{
			s=0;
			for(t=0;t<n;t++)
			{
				if(x[t]<=i+d && x[t]>=i-d && y[t]<=j+d && y[t]>=j-d)
					s+=k[t];
			}
			if(s>Smax)
			{
				Smax=s;
				Sp=1;
			}
			else if(s==Smax)
				Sp++;
		}
	}
	printf("%d %d\n",Sp,Smax);
	return 0;
}
