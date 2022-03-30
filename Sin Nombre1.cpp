#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


int main(){
	
	int a[3]={3,2,1};
	int i,j,aux,n=3;

	
	for(i=0;i<=n;i++){
	for(j=0;j<n-1;j++){
	if(a[j]>a[j+1]){
	aux=a[j];
	a[j]=a[j+1];
	a[j+1]=aux;
}
}
}
for(i=0;i<3;i++)
{
cout<<a<<endl;
}
system("pause");
return 0;
}
