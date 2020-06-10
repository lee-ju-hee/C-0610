#include <stdio.h>
long dec_to_bin(long n)
{
	long bin, sum = 0, i = 1;
	while(n>0)
	{
		bin = n % 2;
		sum += bin * i;
		n /= 2;
		i *= 10;
	}
	return sum;
}
int main()
{
	int num;
	
	printf("���� �Է�: ");
	scanf("%d", &num);
	
	printf("%d�� ������ %ld�Դϴ�.\n", num, dec_to_bin(num));
	return 0;
}
