
#include <iostream>
#include "stringhelper.h"
#include "matrixhelper.h"
#include "foo.h"

int main()
{
	int i = 3;
	std:: cout << i << "    " << foo(i) << std::endl;
	std::string s1 = "s1";
	std::cout << s1 << "    " << StringHelperFun1(s1) << std::endl;
	
	std::string s2 = "s2";
	std::cout << s2 << "    " << StringHelperFun2(s2) << std::endl;


	return 0;
}





