#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

//1.��дһ��������ʾ�û�����һ���������жϸ���������������
//�������㣬�������Ӧ�Ľ����ʹ�� if...else if...else ��䡣
//�жϸ������Ƿ�Ϊż������������������


int main() {
	int num,rel;
	printf("������һ������");
	rel=scanf("%d", &num);
	//printf("%d", num);
	if (rel ==1)
	{
		if (num >0)
		{
			printf("�������������������\n");
		}
		else if (num <0) {
			printf("������������Ǹ�����\n");
		}
		else
		{
			printf("��������������㡣\n");
		}

		if (num % 2 == 0) {
			printf("��������ż����\n");
		}
		else {
			printf("��������������\n");
		}
	}
	else
	{
		printf("������Ч��������һ����Ч��������\n");
		while (getchar() != '\n');
	}
	return 0;
}

//2.��дһ������ findMax����������������Ϊ�������������нϴ�
//��һ������ main �����е��øú�����������������Ľϴ�ֵ��

int findMax(int a,int b);
int main() {
	int num1, num2,rel;
	printf("�����������������м��ÿո����: ");
	rel=scanf("%d %d", &num1, &num2);
	//printf("%d %d", num1, num2);
	if (rel==2)
	{
		if (num1=num2)
		{
			printf("����������ȡ�\n");
		}
		else
		{
			rel = findMax(num1, num2);
			printf("���������нϴ��ֵ��: %d\n", rel);
		}
		
	}
	else {
		printf("������Ч��������2����Ч������,����֮����Ҫ�ո�\n");
		while (getchar() != '\n');
	}
	return 0;
}
int findMax(int a, int b) {
	if (a>b)
	{
		return a;
	}
	else  {
		return b;
	}
	return 0;
}

//�޸ĳ���ʹ���ܹ�ʹ�� findMax �����ҳ����������е����ֵ

int findMax(int a, int b);
int main() {
	int num1, num2,num3,rel;
	while (2) {
		printf("�����������������м��ÿո����: ");
		rel = scanf("%d %d %d", &num1, &num2, &num3);
		//printf("%d %d", num1, num2);
		if (rel == 3)
		{
			if (num1 == num2 && num2 == num3)
			{
				printf("����������ȡ�\n");
			}
			else  if (num1 == num2 || num2 == num3 || num1 == num3) {
				printf("��������������������ȡ�\n");
				rel = findMax(findMax(num1, num2), num3);
				printf("���������нϴ��ֵ��: %d\n", rel);
				break;
			}
			else
			{
				rel = findMax(findMax(num1, num2), num3);
				printf("���������нϴ��ֵ��: %d\n", rel);
				break;
			}

		}
		else {
			printf("������Ч��������2����Ч������,����֮����Ҫ�ո�\n");
			while (getchar() != '\n');
		}
	}
	return 0;
}
int findMax(int a, int b) {
	
	return (a > b) ? a : b;
}

// �����������е�ʱ��ʹ��ʹ�����¶���ĺ���

int findMax(int a, int b, int c);
int findMax(int a, int b, int c); int findMax(int a, int b, int c) {
	// �ҵ� a �� b �еĽϴ�ֵ
	int max = (a > b) ? a : b;
	// ��֮ǰ�ҵ��Ľϴ�ֵ�� c �еĽϴ�ֵ���ҳ����ֵ
	max = (max > c) ? max : c;
	return max;
}
int findMaxThree(int a, int b, int c) {
	// ʹ�� findMax �����ҳ� a �� b �еĽϴ�ֵ
	int maxAB = findMax(a, b);
	// ʹ�� findMax �����ҳ� maxAB �� c �еĽϴ�ֵ
	return findMax(maxAB, c);
}

//3.��дһ�����򣬶���һ������5�����������飬��ʾ�û�����5��
//�����������Ǵ洢�������У�Ȼ�������Щ�������ܺ͡�

int main() {
	int arr[5];
	int sum = 0;
	printf("������5���������м��ÿո���������� ÿ���������水�س���ȷ��:\n");
	for (int i = 0; i < 5; i++)
	{
		//printf("������� %d ������: ", i + 1);
		if (scanf("%d", &arr[i])!=1) {
			printf("������Ч����ӵ�%d���������롣\n",i+1);
			while (getchar()!= '\n');
			i--;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("����������ܺ���: %d\n", sum);
	return 0;
}

//�ҳ������е����ֵ����Сֵ����������
int main() {
	int arr[5];
	int sum = 0;
	int max, min;
	printf("������5���������м��ÿո���������� ÿ���������水�س���ȷ��:\n");
	for (int i = 0; i < 5; i++)
	{
		//printf("������� %d ������: ", i + 1);
		if (scanf("%d", &arr[i])!=1) {
			printf("������Ч����ӵ�%d���������롣\n",i+1);
			while (getchar()!= '\n');
			i--;
		}
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];

		if (arr[i]>max)
		{
			max = arr[i];
		}
		if (arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("����������ܺ���: %d\n", sum);
	printf("��������������ֵ��: %d\n", max);
	printf("�������������Сֵ��: %d\n", min);
	return 0;
}

//������д��

void findMaxMin(int* arr, int size, int* max, int* min, int* sum);
int main() {
	int arr[5];
	int sum ;
	int max, min;
	printf("������5���������м��ÿո���������� ÿ���������水�س���ȷ��:\n");
	for (int i = 0; i < 5; i++)
	{
		//printf("������� %d ������: ", i + 1);
		if (scanf("%d", &arr[i]) != 1) {
			printf("������Ч����ӵ�%d���������롣\n", i + 1);
			while (getchar() != '\n');
			i--;
		}
	}
	
	findMaxMin(arr, sizeof(arr) / sizeof(arr[0]), &max, &min,&sum);
	

	printf("����������ܺ���: %d\n", sum);
	printf("��������������ֵ��: %d\n", max);
	printf("�������������Сֵ��: %d\n", min);
	
	return 0;
}
void findMaxMin(int *arr, int size, int* max, int* min,int *sum) {
	
	*sum = 0; // ȷ���ܺʹ�0��ʼ
	*max = arr[0];
	*min = arr[0];
	
	for (int i = 0; i < size; i++)
	{
	
		*sum += arr[i];
		if (arr[i]>*max)
		{
			*max = arr[i];
		}
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}

//4.��дһ�����򣬶���һ��������������ֵΪ10��Ȼ����һ��ָ
//���������ָ�룬ͨ��ָ���޸�������ֵΪ20��������޸ĺ��ֵ��


void priArr(int*arr,int size);
int main() {
	int a = 10;
	int* p=&a;
	*p = 20;
	printf("����%d", a);

	//��չ���򣬶���һ��ָ�������ָ�룬ʹ��ָ��������鲢���
	//ÿ��Ԫ�ص�ֵ

	//�������
	int arr[5];
	printf("������5���������м��ÿո���������� ÿ���������水�س���ȷ��:\n");
	for (int i = 0; i < 5; i++)
	{
		if (scanf("%d", &arr[i]) != 1) {
			printf("������Ч����ӵ�%d���������롣\n", i + 1);
			while (getchar() != '\n');
			i--;
		}
	}
	//priArr(arr, 5);
	int* arrp = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(arrp + i));
	}

	return 0;
}

void priArr(int* arr,int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
		//printf("%d ", *(arr + i));
	}
}


//1.1��дһ������ʵ�ּ򵥵ļ��������ܡ���ʾ�û�������������
//��һ���������� + , -, *, / �������ݲ������Ĳ�ͬ�����ò�ͬ��
//����ִ����Ӧ�����㣬����������
//�C ȷ���������Ϊ�������������������Ϣ�������˳�����

int Add(int x, int y);
int jian(int x, int y);
int chen(int x, int y);
int chu(int x, int y);
int main() {
	int num1, num2;
	int rel, rel2;
	char fuhao;
	while (1) {
		printf("����������������һ���������� + , -, *, / ��: \n");
		rel2 =scanf("%d %d %c", &num1, &num2, &fuhao);
		if (rel2 ==3)
		{
			switch (fuhao)
			{
				case'+':
					rel = Add(num1, num2);
					printf("���: %d\n", rel);
					break;
				case'-':
					rel = jian(num1, num2);
					printf("���: %d\n", rel);
					break;
				case'*':
					rel = chen(num1, num2);
					printf("���: %d\n", rel);
					break;
				case'/':
					if (num2!=0)
					{
						rel = Add(num1, num2);
						printf("���: %.2f\n", (float)rel);
						break;
					}
					else {
						printf("����: ��������Ϊ�㡣���������롣\n");
						continue;
					}
			}
			break;
		}
		else
		{
			printf("������Ч������������������һ���������� + , -, *, / ��\n");
			while (getchar() != '\n');
		}
	}
	return 0;
}

int Add(int x, int y){
	return x + y;
}
int jian(int x, int y) {
	return x - y;
}
int chen(int x, int y) {
	return x * y;
}
int chu(int x, int y) {
	return x / y;
}



//2.1��дһ�����򣬶�̬����һ������5�������������ڴ棬����ʾ��
//��������5��������
//�C ���㲢�����Щ������ƽ��ֵ��Ȼ���ͷŷ�����ڴ档

//��дһ������ʹ��ָ��Ͷ�̬�ڴ���䴴��һ�� struct ���飬
//�洢3��ѧ������Ϣ�����������䡢GPA����
//�C Ȼ��ͨ��ָ����ʺ��޸�����һ��ѧ����GPA��������޸ĺ����
//Ϣ������ͷŷ�����ڴ档