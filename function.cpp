#include <iostream>
#include "function.h"

void human(int a, characteristics& A) {
	(A.Dexterity + 2);
	std::cout << "�� ������� ������������� ������������ ����!" << std::endl;
	std::cout << "- ��� ��������� 2 ���� ��������;\n- ���� ������: ���������� ���;\n- ...\n";
	system("pause");
}

void elf(int a, characteristics& A) {
	(A.Intelligence + 2);
	std::cout << "�� ������� ������������� ���������� ����!" << std::endl;
	std::cout << "- ��� ��������� 2 ���� ����������;\n- ���� ������: ���������� ���;\n- ...\n";
	system("pause");
}

void dwarf(int a, characteristics& A) {
	(A.Strength + 2);
	std::cout << "�� ������� ������������� ���� �������!" << std::endl;
	std::cout << "- ��� ��������� 2 ���� ����;\n- ���� ������: ��������� ���;\n- ...\n";
	system("pause");
}

void LeftPut1(int a, characteristics& A) {
	std::cout << "����� ���� ������ ���" << std::endl;
	std::cout << "1. ������� ������;" << std::endl;
	std::cout << "2. ���������� � ���� � �����;" << std::endl;
	std::cout << "3. ������������� ����������� �����." << std::endl;
	std::cout << "-->  ";
	int num;
	std::cin >> num;
	std::cin.ignore();
	switch (num) {
	case 1:
		std::cout << "����� �������� ���������� ����. �����������, �� �������� ������. \n+1 ����\n" << std::endl;
		(A.Strength++);
		system("pause");
		system("cls");
		break;
	case 2:
		std::cout << "���������� � ����, �� ������� ������. ����� ���������, ���� ���� �����, � ����� ��������� ������ �� ���������.\n+1 ��������" << std::endl;
		(A.Dexterity++);
		std::cout << "1. �����;" << std::endl;
		std::cout << "2. ������." << std::endl;
		std::cout << "-->  ";
		int num2;
		std::cin >> num2;
		std::cin.ignore();
		system("pause");
		system("cls");
		if (num2 == 1) {
			do {
				std::cout << "�� ��� ��� �����..." << std::endl;
				system("pause");
				std::cout << "1. �����;" << std::endl;
				std::cout << "2. ������." << std::endl;
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
		std::cout << "��������� �� � �� ���������� ��������. � ���� �� ����� �� ��� �����������. �����������, � ��� ����� ����!" << std::endl;
		std::cout << "+1 ���������";
		(A.Intelligence++);
		std::cout << "������ ����� ��������� ������." << std::endl;
		std::cout << "1. ���� ������;" << std::endl;
		std::cout << "2. ��������� ����." << std::endl;
		std::cout << "-->  ";
		int num3;
		std::cin >> num3;
		std::cin.ignore();
		system("pause");
		system("cls");
		switch (num3) {
		//case 1: LeftPut2(Game); break;
		case 2: Slot(2, Game); break;
		default: std::cout << "������ ������ �� ����������!\n"; break;
		}
		break;
	default: std::cout << "������ ������ �� ����������!\n"; break;
	};
};
void Slot(int a, characteristics& A) {
	std::cout << "�� ��������� � ������ ���������� ����. ������ ���������� ���� ������..." << std::endl;
	std::cout << "1. �������;" << std::endl;
	std::cout << "2. ������ ���� ��� �� ���������;" << std::endl;
	std::cout << "3. ����� �� ���� �� ��������." << std::endl;
	std::cout << "-->";
	int num;
	std::cin >> num;
	std::cin.ignore();
	if (num == 1) {
		std::cout << "������ ������, �� ����� ������...\n+3 ����" << std::endl;
		(A.Strength + 3);
		std::cout << "1. ������ ���� ��� �� ���������;" << std::endl;
		std::cout << "2. ����� �� ���� �� ��������." << std::endl;
		std::cout << "-->";
		int num2;
		std::cin >> num2;
		std::cin.ignore();

	}
	if (num == 2) {
		std::cout << "������ �� ����� ����, � ����� ������ ����, �� ��������� ��������� ��������..." << std::endl;
		std::cout << "��� ������!\n +2 ����\n+1 ���������" << std::endl;
		(A.Strength + 2);
		(A.Intelligence++);
		system("cls");
		std::cout << "�� ����� �� ����." << std::endl;
		//AfterTheHall(Game);
	}
	//else
		//AfterTheHall(Game);
}

