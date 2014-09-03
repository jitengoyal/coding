#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int array[9][9];


int hathi(int i,int j,int l1)
{
	int k;
	for(k=j+1;k<9;k++)
	{
		if(array[i][k]==l1)
			return 1;
		else if(array[i][k]!=0)
			break;
	}
	for(k=j-1;k>=0;k--)
	{
		if(array[i][k]==l1)
			return 1;
		else if(array[i][k]!=0)
			break;
	}
	for(k=i-1;k>=0;k--)
	{
		if(array[k][j]==l1)
			return 1;
		else if(array[k][j]!=0)
			break;
	}
	for(k=i+1;k<9;k++)
	{
		if(array[k][j]==l1)
			return 1;
		else if(array[k][j]!=0)
			break;
	}
	return 0;

}

int ghoda(int i,int j)
{
	int k=i-1,l=j+2;
	if(k>=0 && l<9 && array[k][l]==3)
		return 1;

	k=i-1;l=j-2;
	if(k>=0 && l>=0 && array[k][l]==3)
		return 1;

	k=i+1;l=j+2;
	if(k<9 && l<9 && array[k][l]==3)
		return 1;

	k=i+1;l=j-2;
	if(k<9 && l>=0 && array[k][l]==3)
		return 1;

	k=i-2;l=j-1;
	if(k>=0 && l>=0 && array[k][l]==3)
		return 1;

	k=i-2;l=j+1;
	if(k>=0 && l<9 && array[k][l]==3)
		return 1;

	k=i+2;l=j-1;
	if(k<9 && l>=0 && array[k][l]==3)
		return 1;

	k=i+2;l=j+1;
	if(k<9 && l<9 && array[k][l]==3)
		return 1;

	return 0;
	
}

int tircha(int i,int j,int l1)
{
	int k=i+1,l=j+1;
	while(1)
	{
		if(k>=9 || l>=9)
			break;
		if(array[k][l]==l1)
			return 1;
		else if(array[k][l]!=0)
			break;
		k++;l++;
	}
	k=i-1;l=j-1;
	while(1)
	{
		if(k<0 || l<0)
			break;
		if(array[k][l]==l1)
			return 1;
		else if(array[k][l]!=0)
			break;
		k--;l--;
	}
	k=i-1;l=j+1;
	while(1)
	{
		if(k<0 || l>=9)
			break;
		if(array[k][l]==l1)
			return 1;
		else if(array[k][l]!=0)
			break;
		k--;l++;
	}
	k=i+1;l=j-1;
	while(1)
	{
		if(k>=9 || l<0)
			break;
		if(array[k][l]==l1)
			return 1;
		else if(array[k][l]!=0)
			break;
		k++;l--;
	}
	return 0;

}

int king(int i,int j)
{
	if(array[i+1][j]==4 && i+1<9)
		return 1;
	if(array[i-1][j]==4 && i-1>=0)
		return 1;
	if(array[i][j+1]==4 && j+1<9)
		return 1;
	if(array[i][j-1]==4 && j-1>=0)
		return 1;
	if(array[i+1][j+1]==4 && i+1<9 && j+1<9)
		return 1;
	if(array[i-1][j-1]==4 && i-1>=0 && j-1>=0)
		return 1;
	if(array[i-1][j+1]==4 && j+1<9 && i-1>=0)
		return 1;
	if(array[i+1][j-1]==4 && j-1>=0 && i+1<9)
		return 1;
	return 0;
}

int queen(int i,int j)
{
	int ll=hathi(i,j,5);
	int ll1=tircha(i,j,5);
	if(ll==0 && ll1 ==0)
		return 0;
	else
		return 1;
}

int pyada_b(int i,int j)
{
	int k=i-1,l=j-1;
	if(k>=0 && l>=0 && array[k][l]==7)	
		return 1;
	k=i-1;l=j+1;
	if(k>=0 && l<9 && array[k][l]==7)	
		return 1;
	return 0;
	
}

int pyada_w(int i,int j)
{
	int k=i+1,l=j-1;
	if(k<9 && l>=0 && array[k][l]==6)	
		return 1;
	k=i+1;l=j+1;
	if(k<9 && l<9 && array[k][l]==6)	
		return 1;
	return 0;

}

int main()
{

	int col,row,counter,i,j,attack;

	char arr[1000];
	while(scanf("%s",arr)!=EOF)
	{
		for(i=1;i<9;i++)
		{
			for(j=1;j<9;j++)
				array[i][j]=0;
		}
		int hold=strlen(arr);
		row=1;col=1;
		for(i=0;i<hold;i++)
		{
			if(arr[i]=='/')
			{
				col=1;
				row++;
				continue;
			}
			if(arr[i]=='K' || arr[i]=='k')
				array[row][col++]=4;
			else if(arr[i]=='Q' || arr[i]=='q')
				array[row][col++]=5;
			else if(arr[i]=='N' || arr[i]=='n')
				array[row][col++]=3;
			else if(arr[i]=='B' || arr[i]=='b')
				array[row][col++]=2;
			else if(arr[i]=='R' || arr[i]=='r')
				array[row][col++]=1;
			else if(arr[i]=='P')
				array[row][col++]=6;
			else if(arr[i]=='p')
				array[row][col++]=7;
			else
				col=col+(arr[i]-'0');
		}

		int ans=0,attack_h,attack_t,attack_k,attack_q,attack_pb,attack_pw,attack_g;
		for(i=1;i<9;i++)
		{
			for(j=1;j<9;j++)
			{
				if(array[i][j]==0)
				{
					attack_h=hathi(i,j,1);
					attack_t=tircha(i,j,2);
					attack_k=king(i,j);
					attack_q=queen(i,j);
					attack_g=ghoda(i,j);
					attack_pb=pyada_b(i,j);
					attack_pw=pyada_w(i,j);
					if(attack_h==1 || attack_g==1 || attack_t==1 || attack_k==1 || attack_q==1 || attack_pb==1 || attack_pw==1)
					{
					}
					else
						ans++;
				}
			}
		}
		cout << ans << "\n";
	}
	return  0;
}
