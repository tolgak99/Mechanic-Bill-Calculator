//Tolga KALAYCIOĞLU 201711040


#include <stdio.h>

int main (void)

{
	
	int ha,ma,hd,md,z,x,q,w,e,l,n,v; // ha=Hour vehicle arrived-ma=Minute vehicle arrived-hd=Hour vehicle left-md=Minute vehicle left-z=Entry hour convert to minute-x=Left hour convert to minute.
	char g,t,r,b;// g=Continue or Exit-t=Vehicle type-r=Rate type-b=Simple or Complex in Mechanical repair Rate.
	double c,sum;// c=Time-sum=Money.
	
	printf("Input I for inputting arrival and departure time or E to exit: ");
	scanf(" %c",&g);
	
	sum=0;
	
	 while(g!='E')
	 {
	 	
	 	
	 	printf("Input Type of vehicle: 'C' for car, 'B' for bus, 'T' for truck: ");
	 	scanf(" %c",&t);
	 	
	 	printf("Input Hour vehicle arrived ( 0 - 24 ): ");
	 	scanf("%d",&ha);
	 	
	 	printf("Input Minute vehicle arrived ( 0 - 60 ): ");
	 	scanf("%d",&ma);
	 	
	 	printf("Input Hour vehicle left ( 0 - 24 ): ");
	 	scanf("%d",&hd);
	 	
	 	printf("Input Minute vehicle left ( 0 - 60 ): ");
	 	scanf("%d",&md);
	 	
	 	printf("Inut Type of the maintenance (T: Tire change/repair, L: Oil Change, M: Mechanical repair, O:Other):");
	 	scanf(" %c",&r);
	 	
	 	printf("---------- \n");
	 	
	 	if(hd>ha)
	 	{
		 
	 	
	 	 if(t=='C')
	 	 {
	 	 	printf("Type of vehicle : Car\n");
	 	 	printf("TIME-IN       %d:%d\n",ha,ma);
	 	 	printf("TIME-OUT      %d:%d\n",hd,md);
	 	 	z=(60*ha)+ma;
	 	 	x=(60*hd)+md;
	 	 	c=x-z;//Kaç saat kaldığı
	 	 	printf("Total Time:    %.2lf hours\n",c/60);
	 	 	v=(c/60)*20;//işçilik parası
	 	 	printf("------------ \n");
	 	 	 if (r=='T')
	 	 	   {
	 	 	   	 q=v+80;
					  printf("TOTAL CHARGE FOR CUSTOMER 80.00 TL + %dTL labor=%dTL\n",v,q);
					  printf("********** \n");
					  sum=sum+q;
	 	 	   	}
	 	 	   	else if(r=='L')
	 	 	   	{
	 	 	   		w=v+120;
					  printf("TOTAL CHARGE FOR CUSTOMER 120.00 TL + %dTL labor=%dTL\n",v,w);
					  printf("********** \n");
					  sum=sum+w;
					 }
					 else if (r=='O')
					 {
					 	e=v+500;
					  printf("TOTAL CHARGE FOR CUSTOMER 500.00 TL + %dTL labor=%dTL\n",v,e);	
					  printf("********** \n");	
					  sum=sum+e;		
					}
					else if(r=='M')
					{
						printf("Input Type of repair: 'S' for simple, 'C' for complex: ");
						scanf(" %c",&b);
						
						if(b=='S')
						{
							n=500*(c/60);//simple parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						else if (b=='C')
						{
							n=500*(c/60);//complex parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						printf("********** \n");
					}
	 	  }
	 	  
	 	  if(t=='B')
	 	  {
	 	  	printf("Type of vehicle : Bus\n");
	 	 	printf("TIME-IN       %d:%d\n",ha,ma);
	 	 	printf("TIME-OUT      %d:%d\n",hd,md);
	 	 	z=(60*ha)+ma;
	 	 	x=(60*hd)+md;
	 	 	c=x-z;//Kaç saat kaldığı
	 	 	printf("Total Time:    %.2lf hours\n",c/60);
	 	 	v=(c/60)*20;//işçilik parası
	 	 	printf("------------ \n");
	 	 	 if (r=='T')
	 	 	   {
	 	 	   	 q=v+100;
					  printf("TOTAL CHARGE FOR CUSTOMER 100.00 TL + %dTL labor=%dTL\n",v,q);
					  printf("********** \n");
					  sum=sum+q;
	 	 	   	}
	 	 	   	else if(r=='L')
	 	 	   	{
	 	 	   		w=v+150;
					  printf("TOTAL CHARGE FOR CUSTOMER 150.00 TL + %dTL labor=%dTL\n",v,w);
					  printf("********** \n");
					  sum=sum+w;
					 }
					 else if (r=='O')
					 {
					 	e=v+700;
					  printf("TOTAL CHARGE FOR CUSTOMER 700.00 TL + %dTL labor=%dTL\n",v,e);	
					  printf("********** \n");	
					  sum=sum+e;			
					}
					else if(r=='M')
					{
						printf("Input Type of repair: 'S' for simple, 'C' for complex: ");
						scanf(" %c",&b);
						
						if(b=='S')
						{
							n=500*(c/60);//simple parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						else if (b=='C')
						{
							n=n=500*(c/60);//complex parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						printf("********** \n");
					}
		   }
		   
		   if(t=='T')
		   {
		   	printf("Type of vehicle : Truck\n");
	 	 	printf("TIME-IN       %d:%d\n",ha,ma);
	 	 	printf("TIME-OUT      %d:%d\n",hd,md);
	 	 	z=(60*ha)+ma;
	 	 	x=(60*hd)+md;
	 	 	c=x-z;//Kaç saat kaldığı
	 	 	printf("Total Time:    %.2lf hours\n",c/60);
	 	 	v=(c/60)*20;//işçilik parası
	 	 	printf("------------ \n");
	 	 	 if (r=='T')
	 	 	   {
	 	 	   	 q=v+150;
					  printf("TOTAL CHARGE FOR CUSTOMER 150.00 TL + %dTL labor=%dTL\n",v,q);
					  printf("********** \n");
					  sum=sum+q;
	 	 	   	}
	 	 	   	else if(r=='L')
	 	 	   	{
	 	 	   		w=v+200;
					  printf("TOTAL CHARGE FOR CUSTOMER 200.00 TL + %dTL labor=%dTL\n",v,w);
					  printf("********** \n");
					  sum=sum+w;
					 }
					 else if (r=='O')
					 {
					 	e=v+1000;
					  printf("TOTAL CHARGE FOR CUSTOMER 1000.00 TL + %dTL labor=%dTL\n",v,e);	
					  printf("********** \n");	
					  sum=sum+e;			
					}
					else if(r=='M')
					{
						printf("Input Type of repair: 'S' for simple, 'C' for complex: ");
						scanf(" %c",&b);
						
						if(b=='S')
						{
							n=200*(c/60);//simple parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						else if (b=='C')
						{
							n=500*(c/60);//complex parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						printf("********** \n");
					}
		   }
	 }
	 
	 if(ha>hd)
	 {
	 	
	 	if(t=='C')
	 	 {
	 	 	printf("Type of vehicle : Car\n");
	 	 	printf("TIME-IN       %d:%d\n",ha,ma);
	 	 	printf("TIME-OUT      %d:%d\n",hd,md);
	 	 	z=(60*ha)+ma;
	 	 	x=(60*hd)+md;
	 	 	c=z-x;//Kaç saat kaldığı
	 	 	printf("Total Time:    %.2lf hours\n",c/60);
	 	 	v=(c/60)*20;//işçilik parası
	 	 	printf("------------ \n");
	 	 	 if (r=='T')
	 	 	   {
	 	 	   	 q=v+80;
					  printf("TOTAL CHARGE FOR CUSTOMER 80.00 TL + %dTL labor=%dTL\n",v,q);
					  printf("********** \n");
					  sum=sum+q;
	 	 	   	}
	 	 	   	else if(r=='L')
	 	 	   	{
	 	 	   		w=v+120;
					  printf("TOTAL CHARGE FOR CUSTOMER 120.00 TL + %dTL labor=%dTL\n",v,w);
					  printf("********** \n");
					  sum=sum+w;
					 }
					 else if (r=='O')
					 {
					 	e=v+500;
					  printf("TOTAL CHARGE FOR CUSTOMER 500.00 TL + %dTL labor=%dTL\n",v,e);	
					  printf("********** \n");	
					  sum=sum+e;		
					}
					else if(r=='M')
					{
						printf("Input Type of repair: 'S' for simple, 'C' for complex: ");
						scanf(" %c",&b);
						
						if(b=='S')
						{
							n=500*(c/60);//simple parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						else if (b=='C')
						{
							n=500*(c/60);//complex parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						printf("********** \n");
					}
	 	  }
	 	  
	 	  if(t=='B')
	 	  {
	 	  	printf("Type of vehicle : Bus\n");
	 	 	printf("TIME-IN       %d:%d\n",ha,ma);
	 	 	printf("TIME-OUT      %d:%d\n",hd,md);
	 	 	z=(60*ha)+ma;
	 	 	x=(60*hd)+md;
	 	 	c=x-z;//Kaç saat kaldığı
	 	 	printf("Total Time:    %.2lf hours\n",c/60);
	 	 	v=(c/60)*20;//işçilik parası
	 	 	printf("------------ \n");
	 	 	 if (r=='T')
	 	 	   {
	 	 	   	 q=v+100;
					  printf("TOTAL CHARGE FOR CUSTOMER 100.00 TL + %dTL labor=%dTL\n",v,q);
					  printf("********** \n");
					  sum=sum+q;
	 	 	   	}
	 	 	   	else if(r=='L')
	 	 	   	{
	 	 	   		w=v+150;
					  printf("TOTAL CHARGE FOR CUSTOMER 150.00 TL + %dTL labor=%dTL\n",v,w);
					  printf("********** \n");
					  sum=sum+w;
					 }
					 else if (r=='O')
					 {
					 	e=v+700;
					  printf("TOTAL CHARGE FOR CUSTOMER 700.00 TL + %dTL labor=%dTL\n",v,e);	
					  printf("********** \n");	
					  sum=sum+e;			
					}
					else if(r=='M')
					{
						printf("Input Type of repair: 'S' for simple, 'C' for complex: ");
						scanf(" %c",&b);
						
						if(b=='S')
						{
							n=500*(c/60);//simple parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						else if (b=='C')
						{
							n=n=500*(c/60);//complex parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						printf("********** \n");
					}
		   }
		   
		   if(t=='T')
		   {
		   	printf("Type of vehicle : Truck\n");
	 	 	printf("TIME-IN       %d:%d\n",ha,ma);
	 	 	printf("TIME-OUT      %d:%d\n",hd,md);
	 	 	z=(60*ha)+ma;
	 	 	x=(60*hd)+md;
	 	 	c=x-z;//Kaç saat kaldığı
	 	 	printf("Total Time:    %.2lf hours\n",c/60);
	 	 	v=(c/60)*20;//işçilik parası
	 	 	printf("------------ \n");
	 	 	 if (r=='T')
	 	 	   {
	 	 	   	 q=v+150;
					  printf("TOTAL CHARGE FOR CUSTOMER 150.00 TL + %dTL labor=%dTL\n",v,q);
					  printf("********** \n");
					  sum=sum+q;
	 	 	   	}
	 	 	   	else if(r=='L')
	 	 	   	{
	 	 	   		w=v+200;
					  printf("TOTAL CHARGE FOR CUSTOMER 200.00 TL + %dTL labor=%dTL\n",v,w);
					  printf("********** \n");
					  sum=sum+w;
					 }
					 else if (r=='O')
					 {
					 	e=v+1000;
					  printf("TOTAL CHARGE FOR CUSTOMER 1000.00 TL + %dTL labor=%dTL\n",v,e);	
					  printf("********** \n");	
					  sum=sum+e;			
					}
					else if(r=='M')
					{
						printf("Input Type of repair: 'S' for simple, 'C' for complex: ");
						scanf(" %c",&b);
						
						if(b=='S')
						{
							n=200*(c/60);//simple parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						else if (b=='C')
						{
							n=500*(c/60);//complex parası
							l=n+v;
							printf("TOTAL CHARGE FOR CUSTOMER  %d TL + %dTL labor=%dTL\n",n,v,l);
							sum=sum+l;
						}
						printf("********** \n");
					}
		   }
}
	 	  printf("Input I for inputting arrival and departure time or E to exit: ");
	      scanf(" %c",&g);
	 	  
	 	
	 }
	 
	 printf("Total Daily Income: %.2lf TL\n",sum);
	 printf("BYE\n");
	  
	
	
	
	
	
	return(0);
	
	
}
