#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

int binary_search(int n[], int key, int hi,int low);

int main() 
{
	int a[SIZE],i;
	int ans;
	int key;

	printf("�п�J�Ʀr(0~28):");
	scanf_s("%d", &key);

	printf("���ƦC��:\n");
	for (i = 0; i < SIZE; i++) 
	{
		a[i] = i * 2;
		printf("%4d", i);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	ans=binary_search(a, key, SIZE-1,0);

	if (ans == -1) 
	{
		printf("���ƦC�̨S�����Ʀr\n");
	}
	else 
	{
		printf("%d�󦹰}�C����%d����l\n", key, ans);
	}

	system("pause");
	return 0;
}

int binary_search(int n[], int key, int hi, int low) 
{
	int mid;
	mid = (hi + low) / 2;
	
	printf("\nhi=%d\n", hi);
	printf("low=%d\n", low);
	printf("mid=%d\n", mid);


		if (n[mid] == key) 
		{
			return mid;
		}
		else if (low == mid && hi == mid) 
		{ 
			if (n[mid] == key) 
			{
				return mid;
			}
			else 
			{
				return -1;
			}
		}
		else if (n[mid] > key)   //���b 
		{
			return binary_search(n, key, mid - 1, low);
		}
		else if (n[mid] < key)    //�k�b
		{
			return binary_search(n, key, hi, mid + 1);
		}
}