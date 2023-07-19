enum Sex
{
	Male,
	Female
};

enum RGB
{
	Red=4,//默认值为0,依次增加
	Green,//1
	Blue//2
};

#include <stdio.h>

int main()
{
	//枚举：一一列举（有穷）
	//性别：男、女
	//三原色：红、绿、蓝
	enum RGB color01 = Blue;
	enum RGB color02 = Red;
	printf("Red = %d\nGreen = %d\nBlue = %d\n",Red,Green,Blue);
    
	return 0;
}