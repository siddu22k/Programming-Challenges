#include<stdio.h>
#include<math.h>
#include<string.h>
int ham[100];
void main()
{
 char str[100],ra[100],str2[100];
 int m,r=0,k=0,i,j,x,count,p,temp;
int bina[100][100];
 printf("Enter the length:");
 scanf("%d",&m);
 

 printf("Enter the string:");
 scanf("%s",&str);
 
 strrev(str);

 while(pow(2,r)<m+r+1)
	r++;
 printf("\n%d",r);



 for(i=1,k=0;i<=m;i++)
 {

   
  if(i==pow(2,k)&&k<=r)
 {
   for(x=m;x>i-1;x--)
   {
   	//printf("\n MOving %d----%d",x-1,x);
    str[x]=str[x-1];
   }
   
   
   str[(int)x]='r';
   //printf("\n putting r in %d",x);
   k++;
   m++;
   str[m]='\0';
   
   
  }
		 
}

printf("\n%s",str);



for(k=0,x=0;k<r;k++)
{ 
 //printf("\nOuter loop:");
	x=pow(2,k);
for(i=0,count=0,temp=0;i<m;)
{		
	//printf("\nInner loop:");	
	if(x==1)
	{
		//printf("\nInner loop:t1");
		while(i<m)
		{
			//printf("\nInner loop:t2");
			if(str[i]=='1')
	 			count++;
	 		i+=2;
	 		
	 	}
	 	//printf("\n%s",str);
		 break; 
    }
	  
   else{	
		
		do
		{
			//printf("\nInner loop:t3");
			i++;
			temp++;
		}while(temp%x!=0);
		
		temp=0;	
		do
		{ 
			//printf("\nInner loop:t4");
			if(str[i]=='1')
	 		count++;
	 		i++;
	 		temp++;
	 	}while(temp%x!=0);
	 	
		 temp=1;
		 
		 //printf("\n%s",str); 
	}
}
if(count%2==0)
   str[(int)pow(2,k)-1]='0';
else
   str[(int)pow(2,k)-1]='1';
}
strrev(str);
printf("\nFinal String::%s",str);
}

