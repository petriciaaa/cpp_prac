#include <iostream>

void getMonthInfo(int month,int& days,std::string& monthName) {
	switch (month)
	{
	case 1: {

		days = 31;
		monthName = "Январь";
		break;
	}
	case 2: {

		days = 28;
		monthName = "Февраль";
		break;
	}
	case 3: {

		days = 31;
		monthName = "Март  ";
		break;
	}
	case 4: {

		days = 30;
		monthName = "Апрель  ";
		break;
	}
	case 5: {

		days = 31;
		monthName = "Май  ";
		break;
	}
	case 6: {

		days = 30;
		monthName = "Июнь  ";
		break;
	}
	case 7: {

		days = 31;
		monthName = "Июль  ";
		break;
	}
	case 8: {

		days = 31;
		monthName = "Август ";
		break;
	}
	case 9: {

		days = 30;
		monthName = "Сентябрь   ";
		break;
	}
	case 10: {

		days = 30;
		monthName = "Октябрь   ";
		break;
	}
	case 11: {

		days = 30;
		monthName = "Ноябрь  ";
		break;
	}
	case 12: {

		days = 31;
		monthName = "Декабрь  ";
		break;
	}
	default:
		break;
	}

}