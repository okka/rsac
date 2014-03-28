#include<stdio.h>	
#include <time.h>
#include <stdlib.h>
#include <math.h>
int isprimer(long long int t){
long long int a,i,r; 
int p;

	a=t;
	for(i=2;i<=a/2;i++){
		r=a%i;
		if (r==0)
		{
			p=0;
			break;
		}
	}

	if (r==0)
	{
		p=0;
	}
	else{
		p=1;
	}
	
	return(p);
}


long long int Random (long long int iMin, long long int iMax) 
{ 
return (iMin + (rand () % (iMax-iMin+1))); 
} 


int pgcd(long long int a,long long int b)
{
	long long int r,p;
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;

	}
	if(b==1){
		p=1;
	}
	else{
		p=0;
	} 

return p;
}


main(){

long long int n,p,q,e,fi,y;





	srand(time(NULL));


	p=q=e=4;
	
	
	while (isprimer(p)!=1)
 	{
 		p=Random(10000000,100000000000);
 	}
 	while ((isprimer(q)!=1))
 	{
 		q=Random(10000000,1000000000000);
 	}

	n=p*q;

	fi=(p-1)*(q-1);	
	
	y=0;
	while (y==0)
 	{

 		e=Random(1000000000000,fi-1);
 		if(pgcd(fi,e)==1){
 			if(isprimer(e)==1){
 				y=1;

 			}
 		} 
 				
 	}      
      
	printf("n= %lli \n", n);
	printf("e= %lli \n", e);
	printf("fi= %lli \n", fi);


	srand(time(NULL));

}	
	






	
