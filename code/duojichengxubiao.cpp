#include<stdio.h>
#include<Windows.h>
class base1 {
public:
	virtual void test1()
	{
		printf("base1 function\n");
	}
};
class base2 {
public:
	virtual void test2()
	{
		printf("base2 function\n");

	}
};

class son : base1, base2 {
public:
	virtual void test3()
	{
		printf("son function\n");

	}
};
typedef void(*test)(void);
test function;
int main()
{

	son son1;
	for (int i = 0; i < 2; i++) {
		DWORD pointer1 = *((DWORD*)(*(DWORD*)&son1)+i);
		function= (test)pointer1;
		function();
		printf("%x \n",pointer1);
	}
	for (int i = 0; i < 2; i++)
	{
		DWORD pointer1 = *((DWORD*)(*(DWORD*)((DWORD)&son1+4)) + i);
		printf("%x \n", pointer1);
	}
	system("pause");
	return 0;
}