#include<stdio.h>
#include<string.h>
int main()
{
	int z,y;
	scanf("%d",&z);
	for(y=0;y<z;y++)
	{
		int i,k,len,t,key,m,counter=0;
		char s[1000],a[1000];
		scanf("%s",s);
		scanf("%d",&key);
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			a[i]=s[i];
		}
		i=0;
		while(1)
		{
			if(i==len)
				break;
			if((s[i]!='a')&&(s[i]!='e')&&(s[i]!='i')&&(s[i]!='o')&&(s[i]!='u'))
			{
				counter++;
			}
			i++;
		}
		if(counter==0)
		{
			key=0;
		}
		else
		{
			key=key%counter;
		}
		for(i=0;i<len;i++)
		{
			if(key==0)
			{
				break;
			}
			k=0;
			m=i;
			if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
			{

			}
			else
			{
				if(m==len-1)
				{
					m=-1;
				}
				for(t=m+1;t<len;t++)
				{
					if((s[t]=='a')||(s[t]=='e')||(s[t]=='i')||(s[t]=='o')||(s[t]=='u'))
					{
						if(t==len-1)
							t=-1;
					}
					else
					{
						k++;
						if(k==key)
						{
							s[t]=a[i];
							break;
						}
						if(t==len-1)
						{
							t=-1;
						}
					}
				}
			}
		}
		printf("%s",s);
		printf("\n");
	}
	return 0;
}
