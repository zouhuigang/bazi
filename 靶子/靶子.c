#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void change(){
       MessageBoxA(0,"aaa","bbb",0);
}
int add(int a,int b){
       return a+b;
}
void main(){
		//�����ٺ���ǰ������ᱨ��
	  int num=0;
	  void(*p)() = change;//����һ��ָ�룬�洢����change�ĵ�ַ
	  //�����˽⺯������������������ָ�������
	  //ͨ������ָ��������
	  int (*p1)(int a,int b)=add;
	  p();
	  printf("%d\n",p1(9,8));
       printf("%x,%x,%x",change,add,&num);//�����ؼ���ַ
       while(1){
              printf("\n%d",num++);
              Sleep(5000);
       }
}