#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
  int i,j,r,M,N,x;
  double k,l;
  k=0;
  M=1;
  N=6;
    srand(time(NULL));

for(j=0;j<100;j++){
  x=0;
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
printf("%d\n" ,i);
      break;
    }

  }
    k=k+i;
  }
  l=k/100;
  printf("%f" ,l);
  return 0;
}
