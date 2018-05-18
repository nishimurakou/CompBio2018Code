#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
  int i,r,M,N,x;
  srand(time(NULL));
  M=1;
  N=6;
  x=0;
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>100){
      printf("%d" ,i);
      break;
    }
  }
  return 0;
}
