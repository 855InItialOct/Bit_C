#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	float score;
};

void print(struct Stu* ps)
{
	//1.
	printf("s2:name = %-12sage = %-12dscore = %-f\n", (*ps).name, (*ps).age, (*ps).score);
	//2.
	printf("s2:name = %-12sage = %-12dscore = %-f\n", ps->name, ps->age, ps->score);
}

int main()
{
	struct Stu s1 = { "ZhangSan",18,95.5f };
	struct Stu s2 = { "Lisi",20,59.5f };

	printf("s1:name = %-12sage = %-12dscore = %-f\n", s1.name, s1.age, s1.score);
	printf("s2:name = %-12sage = %-12dscore = %-f\n", s2.name, s2.age, s2.score);

	print(&s2);

	return 0;
}