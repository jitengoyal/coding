#include<stdio.h>
#include<string.h>

int func(char *arr1, char *arr2,int j,int k);
int min(int a,int b,int c);

int j=0,k=0,ans1=0,ans2=0,ans3=0,ans4=0;
char arr1[2100],arr2[2100];

int main()
{
	int i,num,ans;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s",arr1);
		scanf("%s",arr2);
		ans=func(arr1,arr2,0,0);
		printf("%d\n",ans);
	}
	return 0;
}

int func(char *arr1, char *arr2,int j,int k)
{
//	printf("%d %d\n",j,k);
	if(j==strlen(arr1))
		return strlen(arr2)-k;
	if(k==strlen(arr2))
		return strlen(arr1)-j;

	if(arr1[j]!=arr2[k])
	{
//		printf("%c %c\n",arr1[j],arr2[k]);
		return min(1+func(arr1,arr2,j+1,k),1+func(arr1,arr2,j,k+1),1+func(arr1,arr2,j+1,k+1));
	}
	else
		return func(arr1,arr2,j+1,k+1);
}

int min(int a,int b,int c)
{
//	printf("a:b:c %d %d %d\n",a,b,c);
	if(a>b)
	{
		if(b>c)
			return c;
		else
			return b;
	}
	else
	{
		if(a>c)
			return c;
		else
			return a;
	}

}
