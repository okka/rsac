#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


long long int n,p,q,e,d,a,fi,o,y,t;
long long int base,m,res,puis,jj,bit; int i,j,k;


char  plan[100000];
long long int  cypher[1000000];



main(){
	
	printf("\n");

	printf("n = "); scanf("%lli;",&n);
	printf("e = "); scanf("%lli;",&e);

	FILE * cypher_text=fopen("cyphr.txt","w+");

	long long int * ptr = (& puis);
	long long int * ptrr = (& bit);

	printf("enter ur plain text: (don't use '.' only u'r finished ur text)\n");
	scanf("%c",&plan[0]);

	i=0;
	while(plan[i]!='.')
	{
		i++;
		scanf("%c",&plan[i]);

	}

	j=0;
	while(plan[j]!='.')
	{
		j++;
	}

	printf("\n");

	k=0;i=0;
while(plan[k]!='.')	
	{
			

		m=(long long int)plan[k];			
		if (m<0)
		{
			m=(long long int)plan[k]+256;

		}

 	base=m;
 	puis=e;
 	res=1;
 	bit=1;

	ptr = (& puis) ;
	ptrr = (& bit) ;
   
      
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

			y=res % jj;
			cypher[i]=y;
  

		i++;	k++;
}
	cypher[i]=n+1;
	j=0;
	while(cypher[j]!=n+1)
	{
		y=cypher[j];
		//printf("%lli",y);

		ptr = (& y) ;
		i=0;
       		while(i<64){


      			bit=(y & 1);

	      		*ptr >>= 1;
      			i++;
	      		printf("%lli",bit );

      			//fprintf(cypher_text, "%d",bit);
   		}

		j++;
	}
	printf("\n");



}
