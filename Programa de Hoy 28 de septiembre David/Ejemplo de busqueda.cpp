#include <stdio.h>
#define N 3
int main() {
int i,j,max,min, a[N][N];
for(i=0; i<N; i++)
for(j=0; j<N; j++)
a[i][j] = rand();
max=-1000;
min= 1000;
for(i=0;i<N;i++)
for(j=0;j<N;j++) {
if (a[i][j]>max)
max = a[i][j];
if (a[i][j]<min)
min = a[i][j];
}
printf("el maximo es %d y el minimo es %d\n",max,min);
return 0;
}
