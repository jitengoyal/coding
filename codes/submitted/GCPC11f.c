#include<stdio.h>
int main()
{
	    int i,j,n,counter;
	    char a,array1[27];
	    char array[1001];
	    int arr[27]={0},index;

	    scanf("%d\n",&n);
	    for(i=0;i<n;i++)
	    {
		    counter=0;
		    index=0;
		    j=0;
		    scanf("%c",&a);
		    while(a!='\n')
		    {
			    if(a!=' ')
			    {
			   	 index=a-'A'+1;
			  	  arr[index]++;
			    }
			    array[j]=a;
			    scanf("%c",&a);
			    j++;
		    }
		    array[j]='\0';


		    int max=-1,pos=0,dup=0;
		    for(j=1;j<27;j++)
		    {
			    if(arr[j]==max)
				    dup++;
			    else if(arr[j]>max)
			    {
				    max=arr[j];
				    dup=0;
				    pos=j;
			    }
			    arr[j]=0;
		    }
		    if(dup>=1)
			    printf("NOT POSSIBLE\n");
		    else
		    {
			    int diff=pos-5,val;
			    if(diff>=0)
				    printf("%d ",diff);
			    else
				    printf("%d ",diff+26);
			    j=0;
			    while(array[j]!='\0')
			    {
				    if(array[j]!=' ')
				    {
					    val=(array[j]-'A'+1-diff);
					    if(val<=0)
						    val=val+26;
					    else if(val>26)
						    val=val-26;
					    array[j]=val+64;
				    }
				    printf("%c",array[j]);
				    j++;
			    }
			    printf("\n");
		    }
	    }
	    return 0;
}
