#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针（2）


//指针变量的大小

//int main()
//{
//	int  num = 10;
//	int* p = &num;
//
//	char ch = 'w';
//	int* pc = &ch;
//
//	printf("%zd\n", sizeof(p));
//	printf("%zd\n", sizeof(pc));
//	//X86环境下char*的指针变量和int*的指针变量都是4个字节
//	//指针变量存放地址，大小取决于一个地址需要多大的空间
//	//地址是32个0/1组成的二进制序列，所以指针变量大小为4个字节
//	//X64  8个字节
//
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(float*));
//	
//	return 0;
//}


//指针变量类型的意义
//int mian()
//{
//	int n = 0x11223344;
//	
//	//int* p = &n;//00 00 00 00
//	char* p = &n; //00 33 22 11
//
//	*p = 0;
//
//
//	return 0;
//}
//指针类型决定了指针在解引用时的权限，一次能访问几个字节

//int mian()
//{
//	int n = 0x11223344;
//
//	int* p = &n;
//	char* pc = &n; 
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);//涨了4个字节
//	
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//涨了1个字节
//	
//	return 0;
//}
//指针类型决定了指针的步长，一次跳过几个字节


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//下标访问
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//指针访问
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//		
//		//printf("%d ", *(p+i));
//	}
//	
//	
//	return 0;
//}


//const修饰指针


//int main()
//{
//	const int n = 100;
//	//const修饰变量吗，使得这个变量不能修改
//	
//	//n = 20;//err
//
//	//int* p = &n;
//	//*p = 20;//可以改
//
//	printf("%d\n", n);
//
//	return 0;
//}

//const 放在*左边:限制的是指针指向的内容，不能通过指针来修改指针指向的内容，但指针变量本身可以改
//const 放在*右边：限制的是指针变量本身，不能修改指针变量的指向，但指针指向的内容可以改
//int main()
//{
//	int m = 100;
//	int n = 10;

	//const int* p = &n;// int const * p = &n;
	//
	//*p = 0;//err
	// p = &m;//可以改
	
	 //int* const p = &n;

	 //*p = 0;//可以改
	 // p = &m;//err
//	
//	return 0;
//}



//指针运算

//指针加减整数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//a b c d e f \0
//
//	char* p = &arr[0];
//	
//	while (*p !='\0')
//	{
//		print("%c ", *p);
//		p++;
//	}
//
//	return 0;
//}


//指针-指针
//前提两个指针指向同一块空间
//得到的绝对值，是指针之间元素的个数
//int main()
//{
//	int arr[10] = { 0 };
//
//	int ret = &arr[9] - &arr[0];
//
//	printf("%d\n", ret);
//	return 0;
//}



//strlen
//strlen------string length
//功能：求字符串长度
//\0之前字符的个数
//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//
//
// 
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int my_strlen(char*str)
//{
//	char* start = str;
//	while (*str != '\0')
//		str++;
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//指针的关系运算
//指针比较大小————地址比较大小

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//int* p = &arr[0];
//	int*p=arr;//数组名是数组首元素的地址
//	while (p < arr + sz)//指针的关系运算
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}



//野指针
//指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）

//指针未初始化
//int main()
//{
//	int* p;//局部变量，如果不初始化，会得到一个随机值
//	*P = 20;
//
//
//	return 0;
//}


//指针的越界访问
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	for (i = 0; i <= 11; i++)
//	{
//
//		*(p++) = i;
//		
//		//*p;
//		//p = p + 1;
//	}
//
//	return 0;
//}


//指针指向的空间别释放
int* test()
{
	int n = 100;
	//...
	return &n;
}//n销毁

int main()
{
	int* p = test();
	return 0;
}


//如何规避野指针






