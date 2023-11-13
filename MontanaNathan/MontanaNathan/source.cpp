// Montana Nicholas


#include <iostream>

int main()

{

	int region = 0;
	char letter = ' ';

	std::cout << "select a region 1. Americas, 2. Europe, 3. Africa, 4. Asia, 5. Rest of the world" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "ERROR - you need to select a number between 1 ans 5" << std::endl;
		return 0;
	}

			std::cout << "Pick a letter from A to A or Z to Z" << std::endl;
			std::cin >> letter;
			if (letter < 'A' || letter > 'Z') // not a capital letter
			{
				if (letter < 'a' || letter > 'z') //not a lower case letter
				{
					std::cout << "You need to select a letter from A to Z " << std::endl;
					return 0;
				}
			}
			if (letter == 'b' || letter == 'B')
			{
				if (region == 1)
				{
					std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia" << std::endl;
				}
				if (region == 2)
				{
					std::cout << "Belarus, Belgium, Bosnia" << std::endl;
				}
				if (region == 3)
				{
					std::cout << "Botswana, Benin" << std::endl;
				}
				if (region == 4)
				{
					std::cout << "Bahrain Arabia Peninsula, Bangladesh, Bhutan" << std::endl;
				}
				if (region == 5)
				{
					std::cout << "there are no places in region 5" << std::endl;
				}
			}
		}