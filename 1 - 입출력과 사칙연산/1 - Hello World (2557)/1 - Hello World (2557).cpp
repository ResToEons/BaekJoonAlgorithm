#include <iostream>

namespace Print
{
	class HelloWorld
	{
	public:
		void PrintWorld()
		{
			std::cout << "Hello World!";
			
		}
	};
}

int main()
{
	Print::HelloWorld helloWorld;

	helloWorld.PrintWorld();

	return 0;
}