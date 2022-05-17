#include <iostream>
#include "function.h"
#include "struct.h"
#include "forward.h"
#include "randomizer.h"
using namespace std;


int main(void) {
	setlocale(LC_ALL, "Russian");

	int random;
	
	std::cout << "����� ���������� � ... " << std::endl;
	std::cout << "��� ������ ���� �������� ����:\n1.�������\n2.����\n3.�����\n" <<
		"������ ���� ������� � ���-�� �����. ���� �������� ���������� ���������.\n" <<
		"����� �������� ������� �����������. � ������ ����������� ���������� � ����.\n" << std::endl;
	int answer;
	std::cout << "-->  ";
	std::cin >> answer;
	std::cin.ignore();

	system("cls");

	switch (answer) {
	case 1: human(answer, Game); break;
	case 2: elf(answer, Game); break;
	case 3: dwarf(answer, Game); break;
	default: std::cout << "������ ������ �� ����������!\n"; break;
	}
	system("cls");

	std::cout << "������(1), �������(2), ������(3)?" << std::endl;
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
			std::cout << "�� ������ �� �������, �� �������� ������." << std::endl;
			std::cout << "����� ���� ������, ���� �� ������ ����� ? " << std::endl;
			std::cout << "	�� ������ ������������ �� ? , �������� -- ������� �������." << std::endl;
				std::cout << "������ � ������� -- � ����� �� �����������." << std::endl << std::endl;

				std::cout << "�, �� ������ �� �������, �� ������� ������." << std::endl;
				std::cout << "������ ��� ������������ ������� �� ��������" << std::endl;
				std::cout << "� ��������� ���������.� ���� ������ �����" << std::endl;
				std::cout << "�����, ����� �������, ������ �� ��������." << std::endl << std::endl;

				std::cout << "�� ������ �� �������; ������, ��� ���� �������." << std::endl;
				std::cout << "��� ���������� �� ����� ����� � ����� ?" << std::endl;
				std::cout << "����� �������� ������, ���� ��������� �������" << std::endl;
				std::cout << "����� ��, ����� �� ���, ��� ����� -- ����������� ?" << std::endl  << std::endl;

				std::cout << "�, �� ������ �� �������.������, ������, ���������" << std::endl;
				std::cout << "� ������ �� ����� ����, � ������ �� ���� ����." << std::endl;
				std::cout << "� �������� ������ �������� � ����� ������." << std::endl;
				std::cout << "�� ������� ����� ����; ��� ���� ����� ������." << std::endl << std::endl;

				std::cout << "�� ������ �� �������.�, ������ ������ �������" << std::endl;
				std::cout << "������������, ��� �� ���������.� ������ ���������" << std::endl;
				std::cout << "���� ���, ��� �������� ����� � ������� ����������." << std::endl;
				std::cout << "�� ������ �� �������!�� �����, ���, �� �������." << std::endl << std::endl;

				std::cout << "�� ���� �������!���� ���, ��� ������ �� ����." << std::endl;
				std::cout << "�� ������ �� �������!�� ���� ��� ���� ������," << std::endl;
				std::cout << "������ ����� � ������.������� � ����������������" << std::endl;
				std::cout << "������ �� �������, �������, �����, ����, ������." << std::endl;
		}
		break;
	default: std::cout << "������ ������ �� ����������!\n"; break;
	}







	return 0;
}