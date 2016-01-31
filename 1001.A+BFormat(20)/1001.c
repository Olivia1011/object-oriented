#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b,c,i,j,k,m;
	char s[10];
	scanf("%lld %lld",&a,&b);
	if(-1000000<=a && a<=1000000 && -1000000<=b && b<=1000000)
	{
		c=a+b;
        k=0;
	    if(c<0)
        {
        	k=1;
    	    c=-c;
	    }
	    m=c;
		for(i=0,j=0;c!=0;c=c/10)
	    {
		    
			s[i]='0'+c%10;
			i++;
		    j++;
		    if(j==3)
		    {
		    	j=0;
	    		s[i++]=',';
		    }
    	}
    	if(m==0)
		{
			printf("%lld",m);
		}
    	if(k==1)
    	{
    		printf("-");
    	}
    	for(i-=1+(s[i-1]==',');i>=0;i--)
    	{
    		printf("%c",s[i]);
    	}
    	printf("\n");
    }
	else	printf("Input Error!");	
	return 0;
}
