<<<<<<< HEAD
<<<<<<< HEAD
// Program used to find countries
// 13/11/2023
// C00296838
// Nathan Mas
// Estimated time 120 minutes
// Actual time 120 minutes

#include <iostream>

int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from N to Y" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0;
		}
	}
	if (letter == 'y' || letter == 'Y') 
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ys in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Yemen Arrabian Peninsula" << std::endl;
		}
	}
	if (letter == 'w' || letter == 'W') 
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Venezuela" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "Vatican City State (Holy See)" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu, Virgin Islands (British), Virgin Islands (U.S.)" << std::endl;
		}
	}
	if (letter == 't' || letter == 'T')
	{
		if (region == 1)
		{
			std::cout << "Trinidad, Tobago" << std::endl; 
		}
		if (region == 2)
		{
			std::cout << "There are no Ts in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Tanzania, Togo, Tunisia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Taiwan, Tajikistan, Thailand, Tibet, Timor-Leste, Turkey, Turkmenistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Tokelau, Tonga, Turks, Caicos Islands, Tuvalu" << std::endl;
		}
	}



	return 1;
}
=======
// Montana Nicholas
>>>>>>> main

=======
// Montana Nicholas

>>>>>>> 9875c74898e3dfde62b83fdca5f44596fb67cf27

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
<<<<<<< HEAD
=======

			if (letter == 'c' || letter == 'C')
			{
				if (region == 1)
				{
					std::cout << "Canada, Cayman Islands, Chile, Colombia, Costa Rica, Cuba" << std::endl;
				}
				if (region == 2)
				{
					std::cout << "Croatia, Czech Republic" << std::endl;
				}
				if (region == 3)
				{
					std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of Congo, Congo Republic" << std::endl;
				}
				if (region == 4)
				{
					std::cout << "Cambodia, China, Christmas Islands, Cyprus" << std::endl;
				}
				if (region == 5)
				{
					std::cout << "Cocos Island, Cook Islands" << std::endl;
				}
			}

>>>>>>> 9875c74898e3dfde62b83fdca5f44596fb67cf27
		}