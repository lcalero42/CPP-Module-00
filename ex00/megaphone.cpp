#include <iostream>
#include <string>
#include <cctype>

void	putstr(const std::string &s)
{
	for (std::string::size_type i = 0; i < s.length(); ++i)
	{
		char letter = std::islower(s[i]) ? std::toupper(s[i]) : s[i];
		std::cout << letter;
	}
}

int	main(int argc, char** argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else 
	{
		for (int i = 1; i < argc; ++i) {
			putstr(argv[i]);
		}
	}
	std::cout << std::endl;
	return 0;
}
