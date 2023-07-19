/*
* 库函数strlen 
* 用来求字符串长度,统计\0之前的字符个数。
* C99和C11标准专门为strlen（）返回类型添加了%zd转换说明。
* 事实上其返回类型通常为unsigned 或 unsigned long。
*/

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("abc\0def"));
	char arr[] = "abcdef";
	char arr_1[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr_1));//警告：可能没有为字符串arr_1添加字符串零终止符。

	return 0;
}