#include <iostream>
#include <iomanip>

void calendarOutput(std::string mounthName, int padding, int days) {
	std::cout << std::endl;
	std::cout << "\t\t" << mounthName << std::endl;
	std::cout << std::endl;

	int counter = padding - 1;
	if (padding == 1)
	{
		std::cout << std::setw(4);
		for (int i = 1; i <= days; i++)
		{
			if (!(counter % 7))
			{
				std::cout << std::endl;
			}

			std::cout << i << std::setw(4);
			counter++;
		}
		std::cout << std::endl;
		return;
	}

	for (int i = 0; i < padding; i++)
	{
		std::cout << "   ";

	}
	std::cout << std::setw(padding);
	for (int i = 1; i <= days; i++)
	{
		if (!(counter % 7))
		{
			std::cout << std::endl;
		}

		std::cout << i << std::setw(4);
		counter++;
	}
	std::cout << std::endl;

}