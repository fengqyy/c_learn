#include <stdio.h>

//猜数字游戏
//电脑自动生成1~100的随机数
//玩家猜数字，反馈

//生成随机数 rand
//int rand(void)
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	//RAND_MAX; //0x7fff ---> 32767
//	
//	srand((unsigned)time(NULL));
//
//	printf("%d\n", rand()); 
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	//伪随机数
//
//	//srand  初始化种子
//	// void srand (unsigned int seed);
//	
//	// time  随时变化
//	// time_t time(time_t*timer);
// 	// 时间戳
//	//time_t;//int / long long
//	//time(NULL)
//
//	//限制随机数范围  取模
//	//rand()%100+1;  //1~100
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	//求100~200的随机数
//	//100 + rand()%(200 - 100 + 1);
//	//余数落在0~100之间，加上100
//
//	//所以a~b的随机数
//	//a+rand()%(b-a+1);
//
//
//
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("******************");
//	printf("******1.play******");
//	printf("******0.exit******");
//	printf("******************");
//}
//
//
//void game()
//{
//
//	int guess = 0;
//	//生成随机数
//	int r = rand() % 100 + 1;//循环位
//
//	//猜数字       
//	
//	
//	while(1)
//	{
//		printf("请输入数字：");
//
//		if (guess > r)
//		{
//			printf("猜大了\n");//大
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");//小
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//	{
//		int input = 0;
//		srand((unsigned int)time(NULL));
//
//		do
//		{
//			menu();
//			switch (input)
//			{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("重新输入\n");
//				break;
//			}
//		} while (input);
//
//
//		return 0;
//	}	
//
//
//
//void game()
//{
//
//	int guess = 0;
//	//生成随机数
//	int r = rand() % 100 + 1;//循环位
//
//	//猜数字       
//	//限制次数
//	int count = 0;
//	while (count)
//	{
//		printf("你还有%d次机会\n",count);
//		printf("请输入数字：");
//
//		if (guess > r)
//		{
//			printf("猜大了\n");//大
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");//小
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//		
//		count--;
//	}
//	if (count == 0)
//	{
//		pritnf("失败，正确答案是：%d\n",r);
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("重新输入\n");
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}



//数组
//1，概念：相同类型元素的集合
//2，一维数组
//		数组创建     type arr_name[常量值]       int arr[20]
//      数组初始化    int arr[4]={1,2,3,4};//完全初始化
//					 int arr[6]={1,2,3};//不完全初始化   默认0
//					 int arr[]={1,2,3};//省略大小
					//int arr[4] = { 1,2,3,4,5 };//错误

//		素组的类型
//char ch[8] = { 'a','b','c' }; //类型是 char [8]


//3，一维数组的使用
		//素组的下标，从零开始
		//下标引用操作符  []
		
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

			//type arr_name[常量值]    常量值
			//C99  标准之前数组大小只能使用常量指定，不能使用变量；之后可以使用（变长数组）


//数组的输入
//int main()
//{
//	int arr[5];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	return 0;
//}


//数组在内存中的存储
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("*aar[%d]=%p\n",arr[i], & arr[i]);//%p  打印地址
//		//连续存放，地址由低到高
//	}
//
//	return 0;
//}



//sizeof 计算元素个数

//int main()
//{
//	int arr[10] = { 1,2,3 };
//	printf("%d\n",sizeof(arr));//sizeof(数组名)，计算数组所占内存空间的大小，单位字节
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//元素个数
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		for (i = 0; i < sz; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	
//		return 0;
//}

//int a = 10;
//sizeof(int);
//sizeof(a);
//sizeof a;
//size_t 类型 ，无符号整型类型



//二维数组的创建
	//概念
	//语法   type arr_name[][]  int arr[3][5]	
	//初始化 int arr[3][5]={}；
	//		完全/不完全初始化
	
//int main()
//{
//
//	int arr[3][3] = { {1,2},{1,2,3},{1} };
//	//行可以省略，列不能
//
//	return 0;
//}
	
	//二维数组的使用
	//		下标
	//		
	//      输入
	//		输出
	//				
	//		地址    连续存放，由低到高
	//		
	
	
	
	
	
	//	C99  变长数组	
	// 
	// 之前：创建数组的大小使用常量，常量表达式指定
	//		int arr[10]  int arr[10+1]  int arr[]={1,3}
	// 
	// C99中，允许数组的大小是变量
	//		int  n=0;
	//		scanf("%d",&n);
	//		int arr[n];
	//变长数组不能初始化
	//数组的大小可以指定

//vs code    gcc        



//练习

//1，多段字符从两端移动，向中间汇聚

//welcome to bit!!!!!!!
//*********************

//思路：把上面的替换给下面

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{

	char arr1[] = "yangtianxiang";
	char arr2[] = "*************";

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;

		Sleep(1000);//休眠，单位ms
		system("cls");//system执行系统命令，cls清除
	}
	return 0;
}










