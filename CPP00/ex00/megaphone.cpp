#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	int i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(argv[i])
		{
			std::string str(argv[i]);
			for (size_t j = 0; j < str.length(); j++)
				std::cout << (char)std::toupper(str[j]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}