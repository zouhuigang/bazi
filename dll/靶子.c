#include<stdio.h>
//_declspec(dllexport)  ��������,�ⲿ�ӿڿ��Ե��õĺ���
//$(ProjectName)
_declspec(dllexport) void mainA(){

	void (*p)()=(void (*)())0xe21064;
	int (*p1)(int a,int b)=(int (*)(int a,int b))0xe210f5;
	int *pA=(int *)0x12ffe10;
	p();
	printf("�Ϸ����Ľ��%d",p1(100,900));
	*pA=9999;
}