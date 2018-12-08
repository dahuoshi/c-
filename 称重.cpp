/*2、从键盘连续输入函件重量，超过2000克，提示“超重”，小于等于0，则提示不合法结束，如果重量合法，则计算资费。
前100克，每20克0.8元，不足20克按照20克计算。超过100克的部分，每100克2.6元，不足100克按照100克计算。
邮政信息1801  赵伟栋 
*/
#include<stdio.h>
int main()
{
	int b, a,c;
 
   if (a<=0)
   {
       printf("不合法\n");
   }
   else if(a>2000)
   {
       printf("超重\n");
   }
  
   else
   {
       while(a<=100)					//当 a  小于100时   
       {   
            a=a/20;						 
           while(a)						//a 能被20 整除则执行while内语句 
           {
               (float)a=((a+1)*0.8);
               printf("价格是%.2f",a);
               break;
            }
           (float) a=a*0.8;					//a 不能被整除则执行词语段。 
            printf("价格是%.2f",a);
            break;
       }
       while(a>100)
        {    
            a=a-100;
            a=a/100;
            b=a%10;					//算出a能否被100整除 
            while(b=0)						//若能被整除，则b=0 while的值为   “假 ” 则不会执行，
            {
                (float)c=((a+1)*2.6)+4;
                printf("价格是%.2f",c);
                break;
            }
                (float)c=(a*2.6)+4;				// 若 为“真 true” 则执行词语段. 
                printf("价格是%.2f",c);
                break;

       } 
   }
   return 0;
}
