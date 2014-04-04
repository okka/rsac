#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
//fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
#include <string.h>

 long long int inverse(long long int en,long long int f){
	long long int a,b,u,v,q,r,l,k;
	a=f; b=en;
	u=0;v=1; q=(a/b); r=(a%b);
	while (r!=0){
		l=v; k=(u-(v*q)); u=l; v=k; a=b; b=r; q=(a/b); r=(a%b);
	}
	k=(k+f)%f;return k;
}


main(){


long long int n,e,fi,j,d,y,k;

long long int base,m,res,jj,puis,bit;


char  lnp[10000];
long long int  plan[10000];
char  cypher[10000];
char  pln[10000];


char buf[10000];

	printf("n = "); scanf("%lli;",&n);
	printf("e = "); scanf("%lli;",&e);
	printf("fi = "); scanf("%lli;",&fi);





	d=inverse(e,fi);

printf("%lli %lli\n",d,(e*d)%fi );


	long long int * ptr = (& puis) ;
    
printf("enter cipher text!\n");

scanf("%c",&buf[0]);
int i=0;
	while(buf[i]!='.')
	{
		i++;
		scanf("%c",&buf[i]);
	}



 int aa=strlen(buf); 
j=aa-2;
 i=0;
while(buf[i]!='.')
{
	cypher[j]=buf[i];
	j--;
	i++;

}

cypher[i]=buf[i];
printf("%s\n", buf);
printf("%s\n", cypher);
y=0;
    i=0;
    k=0;
while(cypher[k]!='.')
{
	y=0;
	j=k;
	while (j<k+64)
	{
		
		if (cypher[j] == '1')
			y= y * 2 + 1;
		else if (cypher[j] == '0')
			y*= 2;
		j++;
	}
	k=j;
	printf("%lli\n", y);
	plan[i]=y;
	i++;
	
}

plan[i]=n+1;
	

long long int o=n+1;

k=0;
i=0;
while(plan[k]!=o)	
		{
			

m=plan[k];
printf("%lli\n", m);
 	base=m;
 	puis=d;
 	res=1;
 	bit=1;

	ptr = (& puis) ;
    
   
      
      jj=n;

      while(puis!=0){


      		bit=(puis & 1);
      		if(bit==1){
      			res=res*base;
      			res= res % jj;
      		}

      		
   			*ptr >>= 1 ;
   			base=base*base;
   			base= base % jj;



      }

			y= res % jj;
			printf("%lli\n", y);
			pln[i]=(char)y;
			
			i++;
			k++;

		}

pln[i]='.';

j=i-1;
i=0;
while(pln[i]!='.')
{
	lnp[j]=pln[i];
	i++;
	j--;
}
lnp[i]='.';


i=0;
while(lnp[i]!='.')
{
	printf("%c",(char)lnp[i]);
	//putc((char)lnp[i],plan_text);
	i++;
}




}
