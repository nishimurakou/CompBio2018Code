#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
  double i,ii,I,s,ss,S,r,rr,R;
  double a,b,dt;
  int j;
FILE *fp;
dt=0.01;
  i=1;
  s=10;
  r=0;
  a=1.5;
  b=1.2;

  double x1,x2,y1,y2,y3,N;
  srand(time(NULL));
  N=1;

fp=fopen("6-4.csv","w");
fprintf(fp,"%f,%f,%f,%f\n" ,0.0,s,i,r);
  for(j=0;j<1000;j++){
    ss=s-dt*b*s*i;
    ii=i+dt*(b*s*i-a*i);
    rr=r+dt*a*i;

    x1=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    x2=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    y2=sqrt(-2*log(x1))*sin(2*M_PI*x2);
    y3=8*y2;
    S=s-dt*b*s*(i+y3);
    I=i+dt*(b*s*(i+y3)-a*(i+y3));
    R=r+dt*a*(i+y3);
fprintf(fp,"%f,%f,%f,%f\n" ,dt*j,S,I,R);
    s=ss;
    i=ii;
    r=rr;
  }
  fclose(fp);
return 0;

}
