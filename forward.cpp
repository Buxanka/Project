#include <iostream>
#include "forward.h"


void Forward(int a, characteristics& A) {
	do {
		std::cout << "За вашей спиной стена начала движение. Пути назад больше нет." << std::endl;
		std::cout << "На двери перед вами загадка:\n" << std::endl;
		int answer;
		do {
			std::cout << "2 + 2 * 2 = ???\n";
			std::cout << "-->  ";
			std::cin >> answer;
			std::cin.ignore();
			system("cls");
			if (answer != 6) {
				std::cout << "Неверно! Попробуйте подумать еще...\n\n\n";
				system("pause");
				system("cls");
			}
		} while (answer != 6);
		std::cout << "Верно! Дверь открыта!" << std::endl;
		system("pause");
		system("cls");

		std::cout << "За вашей спиной стена начала движение. Пути назад больше нет." << std::endl;
		std::cout << "На двери перед вами загадка:\n" << std::endl;
		int answer2;
		do {
			std::cout << "75 + 193 + 954 = ???\n";
			std::cout << "-->  ";
			std::cin >> answer2;
			std::cin.ignore();
			system("cls");
			if (answer2 != 1222) {
				std::cout << "Неверно! Попробуйте подумать еще...\n\n\n";
				system("pause");
				system("cls");
			}
		} while (answer2 != 1222);
		std::cout << "Верно! Дверь открыта!" << std::endl;
		system("pause");
		system("cls");

		std::cout << "За вашей спиной стена начала движение. Пути назад больше нет." << std::endl;
		std::cout << "На двери перед вами загадка:\n" << std::endl;
		int answer3;
		do {
			std::cout << "1000 / 25 * 20 = ???\n";
			std::cout << "-->  ";
			std::cin >> answer3;
			std::cin.ignore();
			system("cls");
			if (answer3 != 8000) {
				std::cout << "Неверно! Попробуйте подумать еще...\n\n\n";
				system("pause");
				system("cls");
			}
		} while (answer3 != 8000);
		std::cout << "Верно! Дверь открыта!" << std::endl;
		system("pause");
		system("cls");

		std::cout << "За вашей спиной стена начала движение. Пути назад больше нет." << std::endl;
		std::cout << "На двери перед вами загадка:\n" << std::endl;
		int answer4;
		do {
			std::cout << "1 + 1 + 1 = ???\n";
			std::cout << "-->  ";
			std::cin >> answer4;
			std::cin.ignore();
			system("cls");
			if (answer4 != 3) {
				std::cout << "Неверно! Попробуйте подумать еще...\n\n\n";
				system("pause");
				system("cls");
			}
		} while (answer4 != 3);
		std::cout << "Верно! Дверь открыта!" << std::endl;
		system("pause");
		system("cls");
	} while (a != 'q');
}
