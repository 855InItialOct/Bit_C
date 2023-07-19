#include <stdio.h>

int main()
{
	//换行符
	printf("abc\ndef");
	//三字母词
	// printf("\n%s\n", "(Are you ready\??)");//??) ->] (如果编译系统支持)
	// \
	printf("%c\n", '\'');
	printf("%c\n", '\"');
	// \\
	printf("%s\n", "F:\\C Programming");
	// \t 水平制表符
	// \v 垂直制表符
	// \ddd ddd表示1~3个八进制的数字（超过3位就超出了字符的ASCII值的范围）。 如： \130
	printf("%c\n", '\130');
	// \xdd dd表示2个十六进制数字。 如： \x30
	printf("%c\n", '\x30');

	return 0;
}