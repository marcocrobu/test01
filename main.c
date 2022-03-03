#include <stdio.h>

int main(void) {
  int f,r;
  
do{
 printf("inserire il fattoriale:\n");
 scanf("%d",&r);
}while (r<0||r>20);

if (r==0||r==1)
 printf("il fattoriale è 1\n");


for(f = r-1;f > 1; f--)
          r = r * f;

  printf("il fattoriale è: %d",r);
  return 0;
}