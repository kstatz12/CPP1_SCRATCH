//using System;
#include<iostream>
#include<cstdio>
class A;

class Console
{
public:
	static void WriteLine(const char * s)
	{
		printf("%s\n", s);
	}
};

int main()
{
	Console::WriteLine("Hello World");
}

