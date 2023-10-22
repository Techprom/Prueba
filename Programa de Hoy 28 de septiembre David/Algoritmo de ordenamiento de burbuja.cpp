#include <stdio.h>
#define N 6
void intercambia(int *f,int *g) {
int tmp;
tmp = *f;
*f = *g;
*g = tmp;
}
int main() {
int i,j, v[N]={3,4,5,2,6,8};
for (i=N-1;i>1;i--)
for (j=0;j<i;j++)
if (v[j]>v[j+1])
intercambia(&v[j],&v[j+1]);
for (i=0;i<N;i++)
printf("%d\n",v[i]);
return 0;
}
