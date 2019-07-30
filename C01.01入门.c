/*
Xiaorans-MacBook-Air:~ xiaoranma$ cd /cc
Xiaorans-MacBook-Air:cc xiaoranma$ gcc hello.c
Xiaorans-MacBook-Air:cc xiaoranma$ ./a.out
*/

#include <stdio.h>

/*当fahr = 0, 20, ... , 300时
  分别打印华氏温度与摄氏温度对照表*/
int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;  /*温度下限*/
	upper = 300;  /*温度上限*/
	step = 20;   

	fahr = lower;
	while (fahr <= upper){
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n",fahr, celsius);
		fahr = fahr + step;
}

}






















