#include <stdio.h>
#include<time.h>
int main(){
 int n, aleatorio, cont=0;
  srand(time(NULL));
  aleatorio = rand()%10;

do{
   printf("[%d]adivinhe o numero:\n", aleatorio);
  scanf("%d",&n);
 if(n < aleatorio)
   printf("vc digitou um numero menor:\n");
 if(n > aleatorio)
   printf("vc digitou um numero maior:\n");
 if(n == aleatorio)
   printf("Parabens vc acertou:\n");
  cont++;
  }while(cont<5 && n!=aleatorio);

  
  }
