#include <iostream>
using namespace std;
int main()
{
int matriz [3][3]= {32,27,64,18,95,14,90,70,60};
int valor;
for(int i=0;i<3;i++)
{
for(int j=0; j<3;j++)
{
cout<<"Ingrese el valor de la matriz en la posicion ["<<i<<","<<j<<"]"<<endl;
cin>>valor;
matriz[i][j] = valor;
}
}

for(int i=0;i<3;i++)
{
cout<<"|";
for(int j=0; j<3;j++)
{
cout<<"\t"<<matriz[i][j]<<"\t";
}
cout<<"|"<<endl;
}
return 0;
}
