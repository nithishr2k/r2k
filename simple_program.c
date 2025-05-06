/*
 
 this program for arithmetic operatons ,and name:nithish, date:5.08.2025,c program
 */
 #include<stdio.h>
     int main(){
         int a, b;
         int sum;
         int sub;
         int div;
         int mul;
         int per;
          
            printf("Enter the two numbers:" );
            scanf("%d %d",&a, &b);
            sum=a+b;
            sub=a-b;
            div=a/b;
            mul=a*b;
            per=a%b;
            printf("sum=%d\n",sum);
            printf("sub=%d\n",sub);
            printf("div=%d\n",div);
            printf("mul=%d\n",mul);
            printf("per=%d",per);
            return 0;
     }
 
