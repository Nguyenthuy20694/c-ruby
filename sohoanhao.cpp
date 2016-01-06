#include<stdio.h>
#include<math.h>
bool sohoanhao(int a){
	int i,s=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		s+=i;
	}
	if(s==a)
	return true;
	else return false;
}
 main(){
 	int i;
 	for(i=1;i<500000;i++)
 	{
 		if(sohoanhao(i)== true)
 		printf("%d\t",i);
	 }
 	
 	}
