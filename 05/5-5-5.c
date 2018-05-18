#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
  int i,j,r,M,N,x;
  double k,l;
  srand(time(NULL));
  k=0;
  M=1;
  N=6;


for(j=0;j<5;j++){
    x=0;
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
      break;
    }
  }
    k=k+i;
  }
  l=k/5;
  printf("%f" ,l);
  return 0;
}
