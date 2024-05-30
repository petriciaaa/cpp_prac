#include "variables.h"
#include <iostream>

std::string getMounth() {
	std::string  mounthName;
	switch (mounth)
	{
	case 1: {

		days = 31;
		mounthName = "Январь";
		break;
		}
	case 2: {

		days = 28;
		mounthName = "Февраль";
		break;
	}
	case 3: {

		days = 31;
		mounthName = "Март  ";
		break;
	}
	case 4: {

		days = 30;
		mounthName = "Апрель  ";
		break;
	}
	case 5: {

		days = 31;
		mounthName = "Май  ";
		break;
	}
	case 6: {

		days = 30;
		mounthName = "Июнь  ";
		break;
	}	
	case 7: {

		days = 31;
		mounthName = "Июль  ";
		break;
	}
	case 8: {

		days = 31;
		mounthName = "Август ";
		break;
	}
	case 9: {

		days = 30;
		mounthName = "Сентябрь   ";
		break;
	}	
	case 10: {

		days = 30;
		mounthName = "Октябрь   ";
		break;
	}
	case 11: {

		days = 30;
		mounthName = "Ноябрь  ";
		break;
	}
	case 12: {

		days = 31;
		mounthName = "Декабрь  ";
		break;
	}
	default:
		break;
	}
	return mounthName;
}