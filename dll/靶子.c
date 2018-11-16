#include<stdio.h>
//_declspec(dllexport)  导出函数,外部接口可以调用的函数
//$(ProjectName)
_declspec(dllexport) void mainA(){

	void (*p)()=(void (*)())0xe21064;
	int (*p1)(int a,int b)=(int (*)(int a,int b))0xe210f5;
	int *pA=(int *)0x12ffe10;
	p();
	printf("老夫计算的结果%d",p1(100,900));
	*pA=9999;
}