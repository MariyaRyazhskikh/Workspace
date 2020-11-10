#include <iostream>
#include <stdio.h>
int main()
{
int n=30;
int m=15;
int A[n],B[m];
int i,j,f;
for(i=0;i<n;i++)
{
printf("Vvedite A[%d]: ",i+1);
scanf("%d",&A);
}

for(i=0;i<m;i++)
{
printf("Vvedite B[%d]: ",i+1);
scanf("%d",&B);
}

for(i=0;i<n;i++)
{
f=1;
for(j=0;j<m;j++)
{
if(A[i] == B[j])
{
f=0;
break;
}
}
if(f)
printf("A[%d]\n", i+1);
}
getchar();
return 0;
}
