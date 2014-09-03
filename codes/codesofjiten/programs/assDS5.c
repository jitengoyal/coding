#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	printf("%d",n);
	char s1[10],s[1000][20],ch;
	double a[1000],b[1000];
	int ar[1000];
	double yu;
	scanf("%lf",&yu);
	printf("%lf\n",yu);
	for(i=0;i<n;i++)
	{
		printf("hi\n");
		scanf("%s",s1);
		scanf("%s",s1);
		scanf("%s",s1);
		while(s1[0]!=',')
		{
			scanf("%s",s1);
		}
		scanf("%lf",&a[i]);
		scanf("%s",s1);
		scanf("%s",s[i]);
		scanf("%s",s1);
		scanf("%lf",&b[i]);
	}
	/*for(i=0;i<n;i++)
	{
		ar[i]=(int)s[i][0]+(int)s[i][1];
	}
	double count=0,sum=0;
	for(i=0;i<n;i++)
	{
		if(b[i]>yu)
		{
		sum=sum+a[i];
		count=count+1;
		}
	}
	printf("%lf\n",sum*1.0/count);
	printf("%lf\n",count);*/
	return 0;
}
