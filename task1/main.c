#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
  //ȷ�����h 
 double t1=0;
 printf("��������߽�t1=");
 scanf("%lf",&t1);
 
 double t2=0;
 printf("�������ұ߽�t2=");
 scanf("%lf",&t2);
 
 double n=0;
 printf("���������㵽n��");
 scanf("%lf", &n);
 double h=0;
 h=(t2-t1)/n;
 printf("h=%f\n", h);
 
 //�����ֵ 
 double y0=0;
 printf("�������ֵy��0��=");
 scanf("%lf",&y0);
 
 //��ʼ���㺯�� 
 
 
 double yn;
 double b=y0-yn;
    double x=h;
 while (b>0.001*h){
  yn=y0-h*y0;
  b=y0-yn;
  printf("x=%f      ˲ʱֵ=%f\n", x, yn);
     y0=yn;
     x=x+h;
  
 }
 
 printf("���ն�̬=%f",yn);
 
 
 
	return 0;
}

