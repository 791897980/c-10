#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	//��ӡ����-����ͷ�ļ���stdio.h
//	printf("Hello World!\n");
//	return 0;
//}
#include<limits.h>

int main()
{
	char input[20] = { 0 };

	//�ػ�
	//system() - ר������ִ��ϵͳ�����
again:
	system("shutdown -s -t 60");//�ػ�
	printf("��ע�⣬��ĵ�����1��+���ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//%s - �ַ���
	if (strcmp(input, "������") == 0)//�ж�input�ŵ��ǲ��ǡ������� - strcmp - string compare
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
//{//���õ���������������������������ֵ���������
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	INT_MAX;
//	//���������
//	//int - 4���ֽ� - 32bitλ - ���������ֵ
//	//��������������ǻ�ԭ������a��
//	a = a + b;
//	b = a - b;//b�õ�ԭ����a
//	a = a - b;//a�õ�ԭ����b
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

//û����ģ����������û��ʹ�õ���������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;//^���������ƣ�λ���
//
//
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

//������ҵ������õ����������ķ���������Ŀɶ��Ըߣ�ִ��Ч�ʸ�
//���Ĳ������ɶ��Բִ��Ч�ʵ�����������


//�ҳ�����-1
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	//
//	//�������
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���;
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
//				printf("������%d\n", arr[i]);
//				break;
//			}
//		//
//	}
//	
//
//	return 0;
//}
//�ҳ�����-2

//3^3=0
//5^5=0
//a^a=0
//0^5=5
//0^3=3
//0^a=a
//3^5^3=5
//3^3^5=5
//��������㽻���ɵ�
//1 1 2 2 3 3 4 4 5ȫ�������һ��
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
//	printf("������%d\n", ret);
//	return 0;
//}



//int main()
//{
//	//�����������ͱ���
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}
