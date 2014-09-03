#include<stdio.h>
int main()
{
    int i,n,m;
    char a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char array[50];
        scanf("%d\n",&m);
        scanf("%c",&a);
        int j=0;
        while(a!='\n')
        {
            array[j]=a;
            j++;
            scanf("%c",&a);
        }
        array[j]='\0';
        int k=0,z=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
        while(k<=j-3)
        {
            if(array[k]=='T' && array[k+1]=='T' && array[k+2]=='T')
                z++;
            else if(array[k]=='T' && array[k+1]=='T' && array[k+2]=='H')
                b++;
            else if(array[k]=='T' && array[k+1]=='H' && array[k+2]=='T')
                c++;
            else if(array[k]=='T' && array[k+1]=='H' && array[k+2]=='H')
                d++;
            else if(array[k]=='H' && array[k+1]=='T' && array[k+2]=='T')
                e++;
            else if(array[k]=='H' && array[k+1]=='T' && array[k+2]=='H')
                f++;
            else if(array[k]=='H' && array[k+1]=='H' && array[k+2]=='T')
                g++;
            else if(array[k]=='H' && array[k+1]=='H' && array[k+2]=='H')
                h++;
            k++;
        }
        printf("%d %d %d %d %d %d %d %d %d\n",m,z,b,c,d,e,f,g,h);
    }
    return 0;
}
