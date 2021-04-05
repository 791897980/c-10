#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	//打印函数-引用头文件：stdio.h
//	printf("Hello World!\n");
//	return 0;
//}
#include<limits.h>

int main()
{
	char input[20] = { 0 };

	//关机
	//system() - 专门用来执行系统命令的
again:
	system("shutdown -s -t 60");//关机
	printf("请注意，你的电脑在1分+钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//%s - 字符串
	if (strcmp(input, "我是猪") == 0)//判断input放的是不是“我是猪” - strcmp - string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}


//int main()
//{//不用第三个变量，交换这两个数的数值：有问题的
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	INT_MAX;
//	//溢出的问题
//	//int - 4个字节 - 32bit位 - 整型有最大值
//	//两个超级大的数是还原不出来a的
//	a = a + b;
//	b = a - b;//b得到原来的a
//	a = a - b;//a得到原来的b
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//没问题的：不会溢出，没有使用第三个变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;//^按（二进制）位异或
//
//
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//进入企业：会采用第三个变量的方法，代码的可读性高，执行效率高
//异或的操作；可读性差，执行效率低于其他方法


//找出单身狗-1
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	//
//	//暴力求解
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次;
//		int j = 0;
//		int count = 0;
//			for (j = 0; j < sz; j++)
//			{
//				if (arr[i] == arr[j])
//				{
//					count++;
//				}
//			}
//			if (1 == count)
//			{
//				printf("单身狗：%d\n", arr[i]);
//				break;
//			}
//		//
//	}
//	
//
//	return 0;
//}
//找出单身狗-2

//3^3=0
//5^5=0
//a^a=0
//0^5=5
//0^3=3
//0^a=a
//3^5^3=5
//3^3^5=5
//异或是满足交换律的
//1 1 2 2 3 3 4 4 5全部异或在一起
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗：%d\n", ret);
//	return 0;
//}



//int main()
//{
//	//交换两个整型变量
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("交换前：a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}
