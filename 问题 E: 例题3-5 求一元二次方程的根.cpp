#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double r1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	double r2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	printf("r1=%7.2f\nr2=%7.2f\n", r1,r2);                   //别忘记打r1=和r2=了，百分号后面的7表示:输出的数字里面数字+小数点+小数共7位，.2代表该小数点后面保留2位小数
	return 0;
}                                              
