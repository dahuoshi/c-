/*4¡¢Çó 1-1/2+1/3-1/4+.......-1/20*/
#include <stdio.h>
int main()
{
	int a,d;
	float b,c;
	
	for(a=1;a<=20;a++)
	{
			
			d=a%2;
			
			if(d==0)
			{
			
			b=(-1)/(float)a;
			}
			
			else
			{
			
			b=1/(float)a;
			}
		
		printf("%.3f\n",b);
		c=c+b;
	}
	
	printf("\n%lf\n",c);
	return 0;
}
