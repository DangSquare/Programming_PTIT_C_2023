// BẮT ĐẦU VÀ KẾT THÚC

/*
Viết chương trình kiểm tra một số nguyên dương bất kỳ (2 chữ số trở lên, không quá 9 chữ số) có chữ số bắt đầu và kết thúc bằng nhau hay không.

Input
Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương tương ứng cần kiểm tra. 

Output
Mỗi bộ test viết ra YES hoặc NO, tương ứng với bộ dữ liệu vào

Ví dụ

Input
2
12451
1000012


Output
YES
NO

*/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int last=n%10;
		int first;
		while(n!=0)
		{
			first=n%10;
			n/=10;
		}
		if(first==last)
			printf("YES\n");
		else
			printf("NO\n");
	}	
}





