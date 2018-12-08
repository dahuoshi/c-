/*、箔1-2+3-4+。。。。-100*/
#include <stdio.h>
int main()
{
	int a,b,c,d;
	for(a=1;a<=100;a++)
	{	b=a%2 ;
		if(b==0)
		{
			d=a*-1 ;
		}
		else
		{
			d=a;
		}
		c=c+d ;
	}
	printf("%d",c);
	return 0;
}
