#include<stdio.h>
#include<vector>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int counter=0;
vector < string > v;

void check(char *arr)
{
	string ji="";
	int len=strlen(arr),flag=0;
	for(int i=0;i<len;i++)
	{
		ji=ji+arr[i];
		if(arr[i]=='@')
		{
			i++;
			while(arr[i]!=' ' || arr[i]!='\n')
			{
				ji=ji+arr[i];
				if(arr[i]=='.')
				{
					flag=1;
					cout << ji << endl;
					while(1)
					{
						i++;
						if(arr[i]==' ' || arr[i]=='\n')
							break;
						ji=ji+arr[i];
					}
					cout << ji << endl;
					break;
				}
				i++;
			}
			if(flag==1)
			{
				flag=0;
				v.push_back(ji);
				ji="";
			}

		}
		if(arr[i]==' ' && flag==0)
			ji="";
	}
}

int main()
{
	int n,i;
	char arr[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		gets(arr);
		check(arr);
	}
	sort(v.begin(),v.end());
	cout << v[0];
	for(i=1;i<v.size();i++)
		cout << ";"<< v[i];
	printf("\n");
	return 0;
}
