#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入输出 + 分支循环




//强制类型转换
//int mian()
//{
//	
//	int n=(int)3.14;
//	printf("hello\n world\n");//3
//
//
//	return 0;
//}



//scanf  printf
//输入   输出
//头文件

//printf  print format  -指定某种格式的打印
//不会自动加上换行
//int mian()
//{
//	printf("hello\n world\n");
//	printf("hello\n");
//	printf("world\n");
//	return 0;
//}

//占位符   %+占位符的类型
//printf("%d",100);
//%d整形  %s字符串   
//可以有多个占位符
//占位符表
//int main()
//{
//	printf("%d",100);
//	printf("%s says it is %d clock's","zhangsan",9);
//	return 0;
//}

//输出格式
//	限定宽度
//int main()
//{
//	printf("%d\n",123);
//	printf("%5d\n", 123);//不够左边空格补齐  左对齐
//	printf("%-5\n", 123);//右对齐
//	
//	printf("%f\n",123.45);
//	printf("%12f\n", 123.45);
//	return 0;
//}
////	总是显示正负号
//int main()
//{
//	printf("%+d",12);
//	printf("%+d", -12);
//
//	return 0;
//}
////	限定小数点后面的位      默认6位
//int main()
//{
//
//	printf("%.2f\n", 123.45);
//	printf("%6.2f\n", 0.5);
//	printf("%*.*f\n",6,2, 0.5); //传进去
//	return 0;
//}
////	输出部分字符串  %.[m]s
//int main()
//{
//
//	printf("%.5s\n", "hello world");
//	
//	return 0;
//}



//scanf   读取用户的键盘输入
//int main()
//{
//	int score = 0;
//
//	scanf("%d\n",&score);
//	printf("%d\n",score);
//	return 0;
//}

//回车读取
//头文件
//占位符
//&
//多个数据
//scanf("%d %d %f %f",&a,&b,&c,&d);
//scanf 自动过滤空白字符，空格，制表符，换行符等
//工作原理
//int main()
//{
//	int x;
//	int y;
//	//输入" -13.45e12# 0"
//	scanf("%d",&x);
//	scanf("%f", &y);
//
//	printf("%d\n",x);
//	printf("%d\n", y);
//
//	return 0;
//}

//科学计数法
//e 

//scanf的返回值
//是一个整数，表示成功读取的变量个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0;
//	int r = scanf("%d %d %f", &a, &b, &f);
//
//	printf("a = %d\n", a);
//	printf("a = %d\n", b);
//	printf("a = %f\n", f);
//
//	printf("%d",r);//成功读取的变量个数
//	
//	return 0;
//}

//EOF //end of file  文件结束标志  -1

//%c 不会忽略空白字符
//int main()
//{
//
//	char ch = 0;
//	//输入空格
//	scanf("%c",&ch);//加空格 " %c"  
//	printf("%c", ch);
//	printf("xxxx\n");
//
//
//	return 0;
//}
//%s  非空白字符到空白字符
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);//abc def
//	printf("%s\n",arr);//abc\0
//
//	return 0;
//}

//scanf 不安全  越界
//%[m]s  限定长度

//赋值忽略符 *
//scanf("%d-%d-%d",&a,&b,&c);//要输入"-"
//scanf("%d%*c%d%*c%d",&a,&b,&c);




//分支和循环（上）
//C语言是结构化的程序设计语言
//顺序结构  选择结构  循环结构
//
// 选择语句（分支）:if  switch
// 循环语句：while  do whlie  for
//  
// if语句
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d是奇数\n",num);
//
//	return 0;
//}
////
////else
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//	else
//		print("%d是偶数\n",num);
//	return 0;
//}
////
//int mian()
//{
//	int age = 0;
//	scanf("%d",&age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("最好不要\n");
//	}
//	return 0;
//}
////
////嵌套if
////判断一个整数是：负数 0 正数
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("0\n");
//	else
//	{
//		if (num > 0)
//			printf("正数\n");
//		else
//			printf("负数\n");
//	}
//
//	return 0;
//}
////
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("0\n");
//	else if (num > 0)
//		printf("正数\n");
//	else
//		printf("负数\n");
//
//	return 0;
//}
////
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("偶数\n");
//		else
//			printf("奇数\n");
//	}
//	else
//		printf("不是正数\n");
//
//	return 0;
//}
////
int main()
{
	int age = 0;
	scanf("%d",&age);
	if (age < 18)
		printf("少年\n");
	else if( age<=44)
		printf("青年\n");
	else if ( age <= 59)
		printf("中老年\n");
	else if ( age <= 89)
		printf("老年\n");
	else
		printf("老寿星\n");
	
	return 0;
}
//
//悬空else
//else 与离得最近的 if 匹配
//
//代码风格
//
// 
// 
//关系操作符
//< > <=  >= == !=
//真：1    假：0
//
// 3==a
//
// 多个操作符不宜连用
// i<j<k
// 
// i<j && j<k
// 
// 逻辑操作符
//  && || ！
//
// 
// 
//