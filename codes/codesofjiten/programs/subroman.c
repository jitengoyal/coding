#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30],c[100],i,a2[100],b2[100];
	scanf("%s %s",a,b);
	i=0;
	int n[26];
	//n[8]=21 23 11 2 3 12
	n[8]=1;
	n[21]=5;
	n[23]=10;
	n[11]=50;
	n[2]=100;
	n[3]=500;
	n[12]=1000;
	int j=0,ck=0;
	while(a[i+1]!='\0' && a[i]!='\0')
	{
		ck=n[a[i]-'A']-n[a[i+1]-'A'];	
		if(ck>=0)
		{	
			a2[j]=a[i];
			i++;
			j++;
		}
		else
		{
			if(ck==-4)
			{
				a2[j]=a2[j+1]=a2[j+2]=a2[j+3]='I';
				j+=4;
			}
			else if(ck==-9)
			{	
				a2[j]='V';
				a2[j+4]=a2[j+1]=a2[j+2]=a2[j+3]='I';
				j+=5;
			}
			else if(ck==-40)
			{
				a2[j]=a2[j+1]=a2[j+2]=a2[j+3]='X';
				j+=4;
			}
			else if(ck==-90)
			{
				a2[j]='L';
				a2[j+4]=a2[j+1]=a2[j+2]=a2[j+3]='X';
				j+=5;
			}
			else if(ck==-400)
			{
				a2[j]=a2[j+1]=a2[j+2]=a2[j+3]='C';
				j+=4;
			}
			else if(ck==-900)
			{
				a2[j]='D';
				a2[j+4]=a2[j+1]=a2[j+2]=a2[j+3]='C';
				j+=5;
			}
			i+=2;
		}
	}
	if(a[i]=='\0')
		a2[j]='\0';
	else
	{
		a2[j]=a[i];a2[j+1]='\0';
	}
	i=j=0;
	//        printf("%s\n",a2);
	int p=strlen(a2),M=0,D=0,C=0,L=0,X=0,V=0,I=0,sd=0,ds=0,ds2=0,diff,ka;
	char ani[100];
	i=0;
	for(i=0;i<p;i++)
	{                        
		if(a2[i]=='M')M++;
		if(a2[i]=='D')D++;
		if(a2[i]=='C')C++;
		if(a2[i]=='L')L++;
		if(a2[i]=='X')X++;
		if(a2[i]=='V')V++;
		if(a2[i]=='I')I++;
	}
	I=I+(M*1000) + D*500 + C*100 + L*50 + X*10 + V*5 ;
	ds=I;
	//		printf("%d %d %d\n",I,ds,sd);
	for(sd=0;sd<ds;sd++)
	{ 
		ani[sd]='I';
	}
	ani[sd]='\0';
	//	su=strlen(ani);
	//	printf("%s\n",ani);
	ck=0,i=0,j=0;
	while(b[i+1]!='\0')
	{
		ck=n[b[i]-'A']-n[b[i+1]-'A'];
		if(ck>=0)
		{
			b2[i]=b[j];
			i++;
			j++;
		}
		else
		{
			if(ck==-4)
			{
				b2[j]=b2[j+1]=b2[j+2]=b2[j+3]='I';
				j+=4;
			}
			else if(ck==-9)
			{
				b2[j]='V';
				b2[j+4]=b2[j+1]=b2[j+2]=b2[j+3]='I';
				j+=5;
			}
			else if(ck==-40)
			{
				b2[j]=b2[j+1]=b2[j+2]=b2[j+3]='X';
				j+=4;
			}
			else if(ck==-90)
			{
				b2[j]='L';
				b2[j+4]=b2[j+1]=b2[j+2]=b2[j+3]='X';
				j+=5;
			}
			else if(ck==-400)
			{
				b2[j]=b2[j+1]=b2[j+2]=b2[j+3]='C';
				j+=4;
			}
			else if(ck==-900)
			{
				b2[j]='D';
				b2[j+4]=b2[j+1]=b2[j+2]=b2[j+3]='C';
				j+=5;
			}
			i+=2;
		}
	}
	if(b[i]=='\0')
		b2[j]='\0';
	else
	{
		b2[j]=b[i];b2[j+1]='\0';
	}
	//	printf("%s\n",b2);
	M=0,D=0,C=0,L=0,X=0,V=0,I=0,ani,sd=0;
	p=strlen(b2);
	char ani2[100],ani3[100];
	i=0;
	for(i=0;i<p;i++)
	{                        
		if(b2[i]=='M')M++;
		if(b2[i]=='D')D++;
		if(b2[i]=='C')C++;
		if(b2[i]=='L')L++;
		if(b2[i]=='X')X++;
		if(b2[i]=='V')V++;
		if(b2[i]=='I')I++;
	}
	I=I+(M*1000) + D*500 + C*100 + L*50 + X*10 + V*5 ;
	ds2=I;
	//				printf("%d %d %d\n",I,ds2,sd);
	for(sd=0;sd<ds2;sd++)
	{ 
		ani2[sd]='I';
	}
	ani2[sd]='\0';
	//			printf("%s\n",ani2);
	diff=ds-ds2;
	if(diff<0){
		diff=-1*diff;
	}
	i=0;
	for(i=0;i<diff;i++){
		ani3[i]='I';
	}
	ani3[diff]='\0';
	//           printf("%d\n",diff);
	//	    printf("%s\n",ani3);
	M=0,D=0,C=0,L=0,X=0,V=0,I=0,ani,sd=0,i=0;
	char ans[100];
	M=diff/1000;
	for(i=0;i<M;i++){
		ans[i]='M';
	}
	diff=diff%1000;
	D=diff/500;
	for(i=M;i<D+M;i++){
		ans[i]='D';
	}
	diff=diff%500;
	C=diff/100;
	for(i=D+M;i<C+D+M;i++){
		ans[i]='C';
	}
	diff=diff%100;
	L=diff/50;
	for(i=C+D+M;i<L+C+D+M;i++){
		ans[i]='L';
	}
	diff=diff%50;
	X=diff/10;
	for(i=L+C+D+M;i<X+L+C+D+M;i++){
		ans[i]='X';
	}
	diff=diff%10;
	V=diff/5;
	for(i=X+L+C+D+M;i<V+X+L+C+D+M;i++){
		ans[i]='V';
	}
	diff=diff%5;
	for(i=V+X+L+C+D+M;i<diff+V+X+L+C+D+M;i++){
		ans[i]='I';
		//		}
	ans[diff+V+X+L+C+D+M]='\0';
}
//		printf("%s\n",ans);
M=0,D=0,C=0,L=0,X=0,V=0,I=0,ani,sd=0,i=0,p=0;
p=strlen(ans);
//		printf("%d\n",p);
for(i=0;i<p;i++)
{
	if(ans[i]=='M')M++;
	if(ans[i]=='D')D++;
	if(ans[i]=='C')C++;
	if(ans[i]=='L')L++;
	if(ans[i]=='X')X++;
	if(ans[i]=='V')V++;
	if(ans[i]=='I')I++;
}
if(I>4){
	V+=I/5;
	I=I%5;
}
if(V>1){
	X+=V/2;
	V=V%2;
}
if(X>4){
	L+=(X/5);	
	X=X%5;
}
if(L>1){
	C+=L/2;
	L=L%2;
}
if(C>4){
	D+=C/5;
	C=C%5;
}
if(D>1){
	M+=D/2;
	D=D%2;
}
int sum=M+D+C+L+X+V+I;
char d[sum+1];
i=0;
while(M!=0){
	d[i]='M';
	i++;
	M--;}
	if(D==1 && C==4 && I==0 && V==0 && X==0 && L==0){
		d[i]='C';
		d[i+1]='M';
		i+=2;
	}
else{
	while(D!=0){
		d[i]='D';
		i++;
		D--;
	}
	if(C==4){
		d[i]='C';
		d[i+1]='D';
		i+=2;
	}
	else
		while(C!=0){
			d[i]='C';
			i++;
			C--;
		}
	if(X==4 && L==1 && V==0 && I==0){
		d[i]='X';
		d[i+1]='C';
		i+=2;
	}
	else{
		while(L!=0){
			d[i]='L';
			i++;
			L--;
		}
		if(X==4){
			d[i]='X';
			d[i+1]='L';
			i+=2;
		}
		else
			while(X!=0){
				d[i]='X';
				i++;
				X--;
			}
		if(V==1 && I==4){
			d[i]='I';
			d[i+1]='X';
			i+=2;
		}
		else{
			while(V!=0){
				d[i]='V';
				i++;
				V--;
			}
			if(I==4){
				d[i]='I';
				d[i+1]='V';
				i+=2;
				d[i]='\0';
			}
//			if(I==4){
//			d[i]='\0';}
			else
				for(ka=i;ka<i+I;ka++)
				{
					d[ka]='I';
				}
			d[I+i]='\0';
		}
	}
}

printf("%s\n",d);
return 0;
}
