#include<stdio.h>
#include<math.h>
bool songuyento(int a)
{
	int i;
	if(a<2)return false;
	else{
	if(a%2==0)return false;
	else
	for(i=3;i<sqrt(a);i++)
	{
		if(a%i==0) 
		return false;
	}
	}
   return true;
}
main(){
	int i;
	for(i=0;i<100;i++)
	if(songuyento(i)==true)
	printf("%d\t",i);
}
