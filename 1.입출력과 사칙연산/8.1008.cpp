#include<stdio.h>

int main (int argc, char const *argv[]){
    double a;
    double b;
    scanf("%lf %lf",&a , &b);

    /*
    lf출력은 소수점 6자리 까지 출력 => 소숫점 자리를 늘려야함
    */
   printf("%.13lf",a/b);
   return 0;
}