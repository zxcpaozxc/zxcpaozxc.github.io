#include<Windows.h>
#include<stdio.h>

class person {
public:
	virtual void test1()
	{
		printf("虚函数打开!\n");
	}
	virtual void test2()
	{
		printf("虚函数2\n");
	}
};

int main()
{
	person* person1 = new person();
	DWORD* person3 = (DWORD*)person1;
	for (int i = 0; i < 2; i++) {
		DWORD  xubiao = *((DWORD*)(*person3) + i);
		printf("%x \n", (xubiao));
	}
	//person1->test1();
	//person1->test2();
	//person person2;
	//printf("%d \n",sizeof(person1));
	system("pause");
	return 0;
}