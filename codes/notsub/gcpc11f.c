#include<stdio.h>
int main()
{
    int i,j,n;
    char a,array1[27];
    array1[0]=' ',array1[1]='A',array1[2]='B',array1[3]='C',array1[4]='D',array1[5]='E',array1[6]='F',array1[7]='G',array1[8]='H',array1[9]='I',array1[10]='J',array1[11]='K',array1[12]='L',array1[13]='M',array1[14]='N',array1[15]='O',array1[16]='P',array1[17]='Q',array1[18]='R',array1[19]='S',array1[20]='T',array1[21]='U',array1[22]='V',array1[23]='W',array1[24]='X',array1[25]='Y',array1[26]='Z';
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
	int arr[27]={0},index=0;
	char array[105];
        j=0;
        scanf("%c",&a);
        while(a!='\n')
        {
	    index=a-'A'+1;
	    arr[index]++;
            array[j]=a;
            scanf("%c",&a);
            j++;
        }
	array[j]='\0';
        int max=0,pos=0,dup=0;
        for(j=1;j<27;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
                dup=0;
                pos=j;
            }
	    if(arr[j]==max)
	    {
		    dup++;
	    }
	}
	if(dup>1)
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
				array[j]=array1[val];
			}
			printf("%c",array[j]);
			j++;
		}
            printf("\n");
    }
    }
    return 0;
}
