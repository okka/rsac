#include <stdio.h>	
#include <time.h>
#include <stdlib.h>
#include <math.h>
long int  isprimer(long int  t){
long int  a,i,r; 
long int  p;

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


long int  Random (long int  iMin, long int  iMax) 
{ 
return (iMin + (rand () % (iMax-iMin+1))); 
} 


long int  pgcd(long int  a,long int  b)
{
	long int  r,p;
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

long int  n,p,q,e,fi,y;





	srand(time(NULL));


	p=q=e=4;
	
	
	while (isprimer(p)!=1)
 	{
 		p=Random(1000000,10000000);
 		printf("%li\n", p);
 	}
 	while ((isprimer(q)!=1))
 	{
 		q=Random(1000000,100000000);
 		printf("%li\n", q);
 	}

	n=p*q;

	fi=(p-1)*(q-1);	
	
	y=0;
	while (y==0)
 	{

 		e=Random(10000000,fi-1);
 		printf("%li\n", e);
 		if(pgcd(fi,e)==1){
 			if(isprimer(e)==1){
 				y=1;

 			}
 		} 
 				
 	}      
      
	printf("n= %li; \n", n);
	printf("e= %li;\n", e);
	printf("fi= %li; \n", fi);


	srand(time(NULL));

}	
	






	
