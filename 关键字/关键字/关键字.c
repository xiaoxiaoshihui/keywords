#include  <stdio.h>
//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//变量名字不能是关键字
//常见关键字auto break case char const continue default do  double else
//enum extern float for goto if int long register return short signed 
//sizeo static struct switch typedef union unsigned void volatile while
// auto 是自动挡 —每个局部变量都是auto修饰的
//
//int main() {
//	{
//		auto int a = 10; //自动创建自动销毁
//		//auto 省略掉了
//	}
//
//	return 0;
//}
//寄存器			越往上造价越高 速度越快 空间越小
//高速缓存			
//内存
//硬盘
//网盘



//typedef 类型定义  结构名也可以从命名
//类型重定义 类型重命名
//李四 —— 小四
//typedef unsigned int u_int;
//
//int main() {
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//
//	return 0;
//}

//关键字static - 静态的
//1.static 修饰局部变量 改变局部变量的生命周期（本质上是改变了变量的存储类型）
//2.static 修饰全局变量
//3.static 修饰函数
//static的修饰仅仅是改变了变量的存储类型 这使局部变量的生命周期和全局变量一样长 但作用域仍是局限的
void test() {
	static int a = 1;//不销毁 生命周期边长了
	a++;
	printf("%d ", a);
}

int main() {
	int i = 0;
	while (i < 10) {
		test();
		i++;
	}


	return 0;
}

//栈区 局部变量 函数的参数
//堆区 动态内存分配的！！
//静态区 全局变量 static修饰的静态变量 程序不结束静态区的生命周期不销毁