#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
  //确定间距h 
 double t1=0;
 printf("请输入左边界t1=");
 scanf("%lf",&t1);
 
 double t2=0;
 printf("请输入右边界t2=");
 scanf("%lf",&t2);
 
 double n=0;
 printf("请输入运算到n步");
 scanf("%lf", &n);
 double h=0;
 h=(t2-t1)/n;
 printf("h=%f\n", h);
 
 //输入初值 
 double y0=0;
 printf("请输入初值y（0）=");
 scanf("%lf",&y0);
 
 //开始计算函数 
 
 
 double yn;
 double b=y0-yn;
    double x=h;
 while (b>0.001*h){
  yn=y0-h*y0;
  b=y0-yn;
  printf("x=%f      瞬时值=%f\n", x, yn);
     y0=yn;
     x=x+h;
  
 }
 
 printf("最终定态=%f",yn);
 
 
 
	return 0;
}

