#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//ָ�루3��

//��ι��Ұָ��

//	ָ���ʼ��
//int main()
//{
//	int a = 10;
//	int* p = &a;//��ʼ��
//
//	int* ptr = NULL;//��ָ�� NULL 0
//
//	return 0;
//}
//

//	С��ָ��Խ��

//	ָ���������ʹ��ʱ����ʱ��NULL��ָ��ʹ��֮ǰ����Ƿ���Ч

//int main()
//{
//	int a = 0;
//	int* p = &a;
//
//	if (p != NULL)
//	{
//		//ʹ��p
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
//	//����ʹ��p
//	p = NULL;
//
//	return 0;
//}

//	���ⷵ�ؾֲ������ĵ�ַ
//  ����ջ�ռ��ַ����
//int* tset()
//{
//	//�ֲ�����
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//...
//	return arr;
//}
//
//int main()
//{
//	int*p=test();
//	//pΪҰָ��
//	return 0;
//}


//assert����
//assert.h    assert()

//#define ENDBUG    //�رն���
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



//ָ���ʹ�úʹ�ַ����

//�����������ͱ���

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
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}

//��ֵ ��ַ



//strlen��ģ��ʵ��
//#include <assert.h>
//size_t my_strlen(const char* str)
//{ 
//	size_t count = 0;
//	assert(str != NULL);//ȷ��ָ�����Ч��
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



//�����������
//������Ԫ�صĵ�ַ
// ��������������
//1��sizeof(������)��������������ʾ�������飬������������Ĵ�С����λʱ�ֽ�
//2��&���������������������ʾ�������飬ȡ����ʱ��������ĵ�ַ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &arr[0]);//int*
//	printf("%p\n", &arr[0]+1);//����4���ֽ�
//
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);//����4���ֽ�
//
//	printf("%p\n", &arr);//����____
//	printf("%p\n", &arr+1);//����40���ֽ�
//
//	printf("%d\n", sizeof(arr));
//
//
//	return 0;
//}
//
//
////ʹ��ָ���������
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", p + i);
//		scanf("%d", p++);
//	}
//	p = arr;
//	//���
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
//		//arr[i]�ȼ���*(arr + i)
//		//*(p + i)�ȼ���p[i]
//		
//		//arr[i]==*(arr + i)==*(i+arr)==i[arr]
//
//	}
//	return 0;
//}



//һά���鴫�εı���

//void print(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ò��������Ԫ�ظ���
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
//	//int sz = sizeof(arr) / sizeof(arr[0]);//�ò��������Ԫ�ظ���
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
//	print(arr,sz);//��ӡarr���������
//	//arr ����������Ԫ�صĵ�ַ
//	return 0;
//}


//ð������

void sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//����
	{
		int flag = 1;//��������������
		int j = 0;
		for (j = 0; j < sz-i-1; j++)//һ�˵Ĵ���
		{
			if (arr[j] > arr[j + 1])//����
			{
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
				flag = 0;//��������
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
	//��Ϊ����
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr,sz);
	print(arr,sz);
	return 0;
}





















