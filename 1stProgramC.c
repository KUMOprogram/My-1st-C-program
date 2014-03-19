#include <stdio.h>
#include <stdbool.h>
void main()
{
     system("color F1");
     int a[5];
     int i,j,c,n,sum,max,min,sitmax,sitmin;   //DHLWSH
     float MO;
     _Bool k;                      //shmantiko na ballw _bool 0
     
     k=0;
     for (i=0; i<5; i++)
     {
         printf("Dwse noumero %i: ",i+1);       // DIABASMA PINAKA
         scanf("%i",&a[i]);        
     }
     printf("\n");


     printf("Dwse ena noumero: ");      //ANAZHTHSH
     scanf("%i",&n);
     
     i=0;                              //i=0; wste na mpei sthn while
     while ((i<5)&&(k==0))
     {
           if (n==a[i])
           {
              printf("!!! UPARXEI !!!\n");
              k=1;
           }
           i++;
     }
     if (k==0)
     {
           printf("@@@ DEN UPARXEI @@@\n");
     }

     
     max=a[1];                //MAX MIN
     min=a[1];
     sitmax=0;
     sitmin=0;
     for (i=0; i<5; i++)
     {
         if (a[i]>max)
         {
                      max=a[i];
                      sitmax=i;
         }             
         if (a[i]<min)
         {
                      min=a[i];
                      sitmin=i;
         }                              
     }
     
           
     for (i=0; i<4; i++)         //FUSALIDA
     {
         for (j=4; j>i; j--)
         {
             if (a[j]<a[j-1])
             {
                             c=a[j];
                             a[j]=a[j-1];
                             a[j-1]=c;
             }
         }
     }
     
     printf("\n PINAKAS TA3INOMIMENOS\n");     //EMFANISH FUSALIDAS
     for (i=0; i<5; i++)
     {
         printf("      %i: %i\n",i+1,a[i]);        
     }
     printf("\n");

     
     printf("   MAX: %i sthn 8esh %i\n",max,sitmax+1);   //EKTUPWSH MIN MAX
     printf("   MIN: %i sthn 8esh %i\n",min,sitmin+1);
     printf("\n");
     
     sum=0;                 //SUM
     for (i=0; i<5; i++)
     {
         sum+=a[i];        
     }
     MO=sum/5.0;
     printf("   SUM: %i\n",sum); 
     printf("   M.O: %.2f\n",MO);     //MO
     
     printf("\n\n");     
     system("PAUSE"); 
}
