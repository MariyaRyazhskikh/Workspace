#include <stdio.h>
int main(){
 float a=5,c=5;
 int b,d;
 printf("a=%f\n", a);
 printf("c=%f\n", c);
 scanf("%d",&b);
 scanf("%d",&d);
 a+=b-2;
 d+=c-a-1;
 a=a*c-1;
 a=a/10;
 c=c/2;
 b--;
 d=d*(c+b+a);
 printf("%f\n,%d\n,%f\n,%d\n",a,b,c,d);
 getchar();
         return 0;
}
