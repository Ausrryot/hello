#include <stdio.h>

extern "C" void func();

int main(int argc, char* argv[])
{
	printf("hello git\n");
	printf("hello again\n");
    printf("huxusheng\n");
	func();
	return 1;
}
