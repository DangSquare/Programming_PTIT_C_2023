// GIÁ TRỊ THẬP PHÂN

/*
Cho số nguyên dương N không quá 9 chữ số. Hãy in ra giá trị thập phân 1/N.

Input
Dòng đầu ghi số bộ test. Mỗi bộ test có duy nhất một số nguyên dương không quá 9 chữ số.

Output
Với mỗi bộ test, ghi ra kết quả trên một dòng với đúng 15 số sau dấu phẩy.

Ví dụ

Input
2
1
23

Output
1.000000000000000
0.043478260869565

*/

#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		printf("%.15lf", 1.0*1/n);
		printf("\n");
	}
}