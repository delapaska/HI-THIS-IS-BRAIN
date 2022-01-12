// HI THIS IS BRAIN.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "String: " << str << std::endl;
	std::cout << "String address is: " << &str << std::endl;
	std::cout << "stringPTR address is: " << stringPTR << std::endl;
	std::cout << "stringREF address is: " << &stringREF << std::endl;
	std::cout << "String Pointer: " << *stringPTR << std::endl;
	std::cout << "String Reference: " << stringREF << std::endl;
   
}
 