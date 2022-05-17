#include <iostream>
#include "function.h"
#include "struct.h"
#include "forward.h"
#include "randomizer.h"
using namespace std;


int main(void) {
	setlocale(LC_ALL, "Russian");

	int random;
	
	std::cout << "Добро пожаловать в ... " << std::endl;
	std::cout << "Для начала игры выберите расу:\n1.Человек\n2.Эльф\n3.Дварф\n" <<
		"Каждая раса успешна в чем-то свеом. Люди обладают повышенной ловкостью.\n" <<
		"Эльфы обладают высоким интеллектом. А дварфы превосходят предыдущих в силе.\n" << std::endl;
	int answer;
	std::cout << "-->  ";
	std::cin >> answer;
	std::cin.ignore();

	system("cls");

	switch (answer) {
	case 1: human(answer, Game); break;
	case 2: elf(answer, Game); break;
	case 3: dwarf(answer, Game); break;
	default: std::cout << "Такого выбора не существует!\n"; break;
	}
	system("cls");

	std::cout << "Налево(1), направо(2), вперед(3)?" << std::endl;
	std::cout << "-->";
	int put;
	std::cin >> put;
	std::cin.ignore();
	switch (put) {
	case 1: LeftPut1(put, Game); break;
//	case 2: RigthPut1(); break;
	case 3: 
		random = Randomizer(random, 1, 101);
		if (random != 14 || random != 42)
			Forward(put, Game);
		else {
			system("cls");
			std::cout << "Не выходи из комнаты, не совершай ошибку." << std::endl;
			std::cout << "Зачем тебе Солнце, если ты куришь Шипку ? " << std::endl;
			std::cout << "	За дверью бессмысленно вс ? , особенно -- возглас счастья." << std::endl;
				std::cout << "Только в уборную -- и сразу же возвращайся." << std::endl << std::endl;

				std::cout << "О, не выходи из комнаты, не вызывай мотора." << std::endl;
				std::cout << "Потому что пространство сделано из коридора" << std::endl;
				std::cout << "и кончается счетчиком.А если войдет живая" << std::endl;
				std::cout << "милка, пасть разевая, выгони не раздевая." << std::endl << std::endl;

				std::cout << "Не выходи из комнаты; считай, что тебя продуло." << std::endl;
				std::cout << "Что интересней на свете стены и стула ?" << std::endl;
				std::cout << "Зачем выходить оттуда, куда вернешься вечером" << std::endl;
				std::cout << "таким же, каким ты был, тем более -- изувеченным ?" << std::endl  << std::endl;

				std::cout << "О, не выходи из комнаты.Танцуй, поймав, боссанову" << std::endl;
				std::cout << "в пальто на голое тело, в туфлях на босу ногу." << std::endl;
				std::cout << "В прихожей пахнет капустой и мазью лыжной." << std::endl;
				std::cout << "Ты написал много букв; еще одна будет лишней." << std::endl << std::endl;

				std::cout << "Не выходи из комнаты.О, пускай только комната" << std::endl;
				std::cout << "догадывается, как ты выглядишь.И вообще инкогнито" << std::endl;
				std::cout << "эрго сум, как заметила форме в сердцах субстанция." << std::endl;
				std::cout << "Не выходи из комнаты!На улице, чай, не Франция." << std::endl << std::endl;

				std::cout << "Не будь дураком!Будь тем, чем другие не были." << std::endl;
				std::cout << "Не выходи из комнаты!То есть дай волю мебели," << std::endl;
				std::cout << "слейся лицом с обоями.Запрись и забаррикадируйся" << std::endl;
				std::cout << "шкафом от хроноса, космоса, эроса, расы, вируса." << std::endl;
		}
		break;
	default: std::cout << "Такого выбора не существует!\n"; break;
	}







	return 0;
}