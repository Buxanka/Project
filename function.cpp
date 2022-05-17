#include <iostream>
#include "function.h"

void human(int a, characteristics& A) {
	(A.Dexterity + 2);
	std::cout << "Вы выбрали представителя человеческой расы!" << std::endl;
	std::cout << "- Вам начислено 2 очка ловкости;\n- Ваше оружее: одноручный меч;\n- ...\n";
	system("pause");
}

void elf(int a, characteristics& A) {
	(A.Intelligence + 2);
	std::cout << "Вы выбрали представителя эльфийской расы!" << std::endl;
	std::cout << "- Вам начислено 2 очка интеллекта;\n- Ваше оружее: одноручный меч;\n- ...\n";
	system("pause");
}

void dwarf(int a, characteristics& A) {
	(A.Strength + 2);
	std::cout << "Вы выбрали представителя расы дварфов!" << std::endl;
	std::cout << "- Вам начислено 2 очка силы;\n- Ваше оружее: двуручный меч;\n- ...\n";
	system("pause");
}

void LeftPut1(int a, characteristics& A) {
	std::cout << "Перед вами волчий пес" << std::endl;
	std::cout << "1. Напасть первым;" << std::endl;
	std::cout << "2. Спрятаться в щель в стене;" << std::endl;
	std::cout << "3. Приготовиться блокировать атаки." << std::endl;
	std::cout << "-->  ";
	int num;
	std::cin >> num;
	std::cin.ignore();
	switch (num) {
	case 1:
		std::cout << "Зверь оказался достаточно слаб. Поздравляем, Вы одержали победу. \n+1 сила\n" << std::endl;
		(A.Strength++);
		system("pause");
		system("cls");
		break;
	case 2:
		std::cout << "Забравшись в щель, Вы увидели проход. Можно подождать, пока волк уйдет, а можно прополсти дальше на раззведку.\n+1 ловкость" << std::endl;
		(A.Dexterity++);
		std::cout << "1. Ждать;" << std::endl;
		std::cout << "2. Ползти." << std::endl;
		std::cout << "-->  ";
		int num2;
		std::cin >> num2;
		std::cin.ignore();
		system("pause");
		system("cls");
		if (num2 == 1) {
			do {
				std::cout << "Он все еще здесь..." << std::endl;
				system("pause");
				std::cout << "1. Ждать;" << std::endl;
				std::cout << "2. Ползти." << std::endl;
				std::cout << "-->";
				std::cin >> num2;
				system("pause");
				system("cls");
			} while (num2 == 2);
		}
		else
			Slot(1, Game);
		break;
	case 3:
		std::cout << "Оказалось он и не планировал нападать. И судя по всему Вы ему подравились. Поздравляем, у вас новый друг!" << std::endl;
		std::cout << "+1 интеллект";
		(A.Intelligence++);
		std::cout << "Теперь можно двигаться дальше." << std::endl;
		std::cout << "1. Идти вперед;" << std::endl;
		std::cout << "2. Проверить щель." << std::endl;
		std::cout << "-->  ";
		int num3;
		std::cin >> num3;
		std::cin.ignore();
		system("pause");
		system("cls");
		switch (num3) {
		//case 1: LeftPut2(Game); break;
		case 2: Slot(2, Game); break;
		default: std::cout << "Такого выбора не существует!\n"; break;
		}
		break;
	default: std::cout << "Такого выбора не существует!\n"; break;
	};
};
void Slot(int a, characteristics& A) {
	std::cout << "Вы оказались в темном просторном зале. Похоже посередине есть сундук..." << std::endl;
	std::cout << "1. Открыть;" << std::endl;
	std::cout << "2. Обойти весь зал по пириметру;" << std::endl;
	std::cout << "3. Выйти из зала по коридору." << std::endl;
	std::cout << "-->";
	int num;
	std::cin >> num;
	std::cin.ignore();
	if (num == 1) {
		std::cout << "Открыв сундук, вы нашли сапфир...\n+3 сила" << std::endl;
		(A.Strength + 3);
		std::cout << "1. Обойти весь зал по пириметру;" << std::endl;
		std::cout << "2. Выйти из зала по коридору." << std::endl;
		std::cout << "-->";
		int num2;
		std::cin >> num2;
		std::cin.ignore();

	}
	if (num == 2) {
		std::cout << "Пройдя до конца зала, в самый темный угол, Вы замечаете небольшое свечение..." << std::endl;
		std::cout << "Это кольцо!\n +2 сила\n+1 интеллект" << std::endl;
		(A.Strength + 2);
		(A.Intelligence++);
		system("cls");
		std::cout << "Вы вышли из зала." << std::endl;
		//AfterTheHall(Game);
	}
	//else
		//AfterTheHall(Game);
}

