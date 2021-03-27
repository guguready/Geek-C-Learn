/*Date：2021，3，26
By：Geek-Men
Hello world
printf()*/

#include <stdio.h>		//#include <stdio.h> 是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件

int main()		//int main() 是主函数，程序从这里开始执行
{
	printf("Hello World \n");		// printf(...) 是 C 中另一个可用的函数，会在屏幕上显示消息 "Hello, World!"
	
	return 0;		// return 0; 终止 main() 函数，并返回值 0
}

