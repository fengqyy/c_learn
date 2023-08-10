#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//指针（3）

//如何规避野指针

//	指针初始化
//int main()
//{
//	int a = 10;
//	int* p = &a;//初始化
//
//	int* ptr = NULL;//空指针 NULL 0
//
//	return 0;
//}
//

//	小心指针越界

//	指针变量不再使用时，及时置NULL，指针使用之前检查是否有效

//int main()
//{
//	int a = 0;
//	int* p = &a;
//
//	if (p != NULL)
//	{
//		//使用p
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	
//	//不再使用p
//	p = NULL;
//
//	return 0;
//}

//	避免返回局部变量的地址
//  返回栈空间地址问题
//int* tset()
//{
//	//局部变量
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//...
//	return arr;
//}
//
//int main()
//{
//	int*p=test();
//	//p为野指针
//	return 0;
//}


//assert断言
//assert.h    assert()

//#define ENDBUG    //关闭断言
//#include <assert.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	//if (p != NULL)
//	//{
//	//	//...
//	//}
//
//	assert(p != NULL);
//
//
//	return 0;
//}



//指针的使用和传址调用

//交换两个整型变量

//void swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}

//传值 传址



//strlen的模拟实现
//#include <assert.h>
//size_t my_strlen(const char* str)
//{ 
//	size_t count = 0;
//	assert(str != NULL);//确保指针的有效性
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	size_t len = my_strlen(arr);
//
//	printf("%zd\n", len);
//
//	return 0;
//}



//数组名的理解
//数组首元素的地址
// 但是有两个例外
//1，sizeof(数组名)，这里数组名表示整个数组，计算整个数组的大小，单位时字节
//2，&数组名，这里的数组名表示整个数组，取出的时整个数组的地址
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &arr[0]);//int*
//	printf("%p\n", &arr[0]+1);//跳过4个字节
//
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);//跳过4个字节
//
//	printf("%p\n", &arr);//类型____
//	printf("%p\n", &arr+1);//跳过40个字节
//
//	printf("%d\n", sizeof(arr));
//
//
//	return 0;
//}
//
//
////使用指针访问数组
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", p + i);
//		scanf("%d", p++);
//	}
//	p = arr;
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d",*(p + i));
//
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d", *(p + i));
//		//printf("%d", p[i]);
//		//printf("%d", *(arr + i));
//		//printf("%d", arr[i]);
//		
//		//arr[i]等价于*(arr + i)
//		//*(p + i)等价于p[i]
//		
//		//arr[i]==*(arr + i)==*(i+arr)==i[arr]
//
//	}
//	return 0;
//}



//一维数组传参的本质

//void print(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//得不到数组的元素个数
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}

//void print(int* arr,int sz)//void print(int arr[],int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//得不到数组的元素个数
//	//            4      /       4
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//*(arr=i)
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);//打印arr数组的内容
//	//arr 就是数组首元素的地址
//	return 0;
//}


//冒泡排序

void sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//趟数
	{
		int flag = 1;//假设数组有序了
		int j = 0;
		for (j = 0; j < sz-i-1; j++)//一趟的次数
		{
			if (arr[j] > arr[j + 1])//交换
			{
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
				flag = 0;//不是有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void print(int* arr,int sz)
{	
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//*(arr=i)
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排为升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr,sz);
	print(arr,sz);
	return 0;
}





















