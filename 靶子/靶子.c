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
		//声明再函数前，否则会报错
	  int num=0;
	  void(*p)() = change;//定义一个指针，存储函数change的地址
	  //必须了解函数的输入和输出，定义指针的类型
	  //通过函数指针来调用
	  int (*p1)(int a,int b)=add;
	  p();
	  printf("%d\n",p1(9,8));
       printf("%x,%x,%x",change,add,&num);//三个关键地址
       while(1){
              printf("\n%d",num++);
              Sleep(5000);
       }
}