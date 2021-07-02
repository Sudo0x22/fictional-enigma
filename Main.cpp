#include<iostream>
#include<vector>
#include<string>
#include<conio.h>
#include<Windows.h>
#include<cmath>
#include<stdlib.h>
#include"Main.h"


#define AppTitle BlueSoftware
#define boxSize 14 - 12
#define BoxHeight 12
#define BoxWidth 13

void draw()
{
	system("Color 09");
    std::cout << R"(
__________.__                    _________       _____  __                                 
\______   \  |  __ __   ____    /   _____/ _____/ ____\/  |___  _  _______ _______   ____  
 |    |  _/  | |  |  \_/ __ \   \_____  \ /  _ \   __\\   __\ \/ \/ /\__  \\_  __ \_/ __ \ 
 |    |   \  |_|  |  /\  ___/   /        (  <_> )  |   |  |  \     /  / __ \|  | \/\  ___/ 
 |______  /____/____/  \___  > /_______  /\____/|__|   |__|   \/\_/  (____  /__|    \___  >
        \/                 \/          \/                                 \/            \/ 	
)" << '\n';
	std::cout << " [+] Blue software Created By sk/blue " << std::endl;
	std::string About = " [+] All in one tool for calculator link checker and downloader Apex Cheat Soon";
	if (About == "") {
		fprintf(stderr, "[-] Please reload the loader: ");
		exit(EXIT_FAILURE);
	}
	else {
		system("Color 9");
		std::cout << About << std::endl;
	}
}

void login()
{
	char toPin = 'Y';
	printf("\n");
	printf(" [+] Enter Y to Being the login process: ");
	std::cin >> toPin;
	if (toPin == 'Y') {
		int key;
		printf(" [+] Enter Key: ");
		std::cin >> key;
		if (key == 0) {
			fprintf(stderr, " [-] Please enter a key: ");
			Sleep(3);
			exit(EXIT_FAILURE);
		}
		else {

			std::string User;
			printf("\n");
			printf(" [+] Enter Username: ");
			std::cin >> User;
			if (User == "") {
				fprintf(stderr, "[-] Please enter a username and try again\n");
				Sleep(3);
				exit(EXIT_FAILURE);
			}
			else {
				std::cout << " [+] Enter Password: ";
				char s[10] = { 0 };
				int i;
				for (i = 0; i < 10; i++) {
					s[i] = _getch();
					if (s[i] == 13) {
						break;
					}
					else {
						_putch('*');
					}
				};
				getchar();
				printf("\n");
				std::cout << " [+] Welcome to Blue software: " << " [ " << User << " ] " << std::endl;
			}
		}
	}
	else {
		fprintf(stderr, " [-] please enter y to being login: ");
		Sleep(3);
		exit(EXIT_FAILURE);
	}
}

void calculator()
{
	float x;
	float y;
	float result;
	char op;
	printf(" [+] Enter number: ");
	std::cin >> x;
	if (!x)
	{
		fprintf(stderr, " [-] Please Enter First Number: ");
		Sleep(3);
		exit(EXIT_FAILURE);
	}
	printf(" [+] Enter Opertor: ");
	std::cin >> op;
	if (!op) {
		fprintf(stderr, " [-] Please enter a opertor: ");
		Sleep(3);
		exit(EXIT_FAILURE);
	}
	printf(" [+] Enter Second number: ");
	std::cin >> y;
	if (!y) {
		fprintf(stderr, " [-] Please second Number: ");
		Sleep(3);
		exit(EXIT_FAILURE);
	}
	char toHex = 'y';
	switch (op) {
	case '+':
		result = x + y;
		std::cout << " [+] Total is: " << result << std::endl;
		printf(" [+] Do you want to convert to hex: ");
		std::cin >> toHex;
		if (toHex == 'y') {
			std::cout << " [+] Total in hex is: " << result << std::hex << std::endl;
		}
		else {
			return;
		}
		break;
	case '-':
		result = x - y;
		std::cout << " [+] Total is: " << result << std::endl;
		printf(" [+] Do you want to convert to hex: ");
		std::cin >> toHex;
		if (toHex == 'y') {
			std::cout << " [+] Total in hex is: " << result << std::hex << std::endl;
		}
		else {
			return;
		}
		break;
	case '/':
		result = x / y;
		std::cout << " [+] Total is: " << result << std::endl;
		printf(" [+] Do you want to convert to hex: ");
		std::cin >> toHex;
		if (toHex == 'y') {
			std::cout << " [+] Total in hex is: " << result << std::hex << std::endl;
		}
		else {
			return;
		}
		break;
	case '*':
		result = x * y;
		std::cout << " [+] Total is: " << result << std::endl;
		printf(" [+] Do you want to convert to hex: ");
		std::cin >> toHex;
		if (toHex == 'y') {
			std::cout << " [+] Total in hex is: " << result << std::hex << std::endl;
		}
		else {
			return;
		}
		break;
	case '>':
		result = x > y;
		std::cout << " [+] Total is: " << result << std::endl;
		printf(" [+] Do you want to convert to hex: ");
		std::cin >> toHex;
		if (toHex == 'y') {
			std::cout << " [+] Total in hex is: " << result << std::hex << std::endl;
		}
		else {
			return;
		}
		break;
	case '<':
		result = x < y;
		std::cout << " [+] Total is: " << result << std::endl;
		printf(" [+] Do you want to convert to hex: ");
		std::cin >> toHex;
		if (toHex == 'y') {
			std::cout << " [+] Total in hex is: " << result << std::hex << std::endl;
		}
		else {
			return;
		}
		break;
	case '>=':
		result = x >= y;
		std::cout << " [+] Total is: " << result << std::endl;
		printf(" [+] Do you want to convert to hex: ");
		std::cin >> toHex;
		if (toHex == 'y') {
			std::cout << " [+] Total in hex is: " << result << std::hex << std::endl;
		}
		else {
			return;
		}
		break;
	case '<=':
		result = x <= y;
		std::cout << " [+] Total is: " << result << std::endl;
		printf(" [+] Do you want to convert to hex: ");
		std::cin >> toHex;
		if (toHex == 'y') {
			std::cout << " [+] Total in hex is: " << result << std::hex << std::endl;
		}
		else {
			return;
		} 
		break;
	default:
		fprintf(stderr, " [-] Please enter a opertor\n");
		exit(EXIT_FAILURE);
	}
}

void downloader()
{
	std::string Downloader = " [+] Download for videos via link";
	if (Downloader == "") {
		fprintf(stderr, " [-] try load again\n");
		Sleep(3);
		exit(EXIT_FAILURE);
	}
	else {
		std::cout << Downloader << std::endl;
	}
	float link_down;
	printf(" [+] Enter 1 to start downloader: ");
	std::cin >> link_down;
	std::string Link;
	if (link_down != 0) {
		printf(" [+] Enter Link: ");
		std::cin >> Link;
		if (Link == "") {
			fprintf(stderr, " [-] Please enter a link\n");
			Sleep(3);
			exit(EXIT_FAILURE);
		}
		else {
			std::cout << " [+] Link is: " << Link << std::endl;
		}
	}
	else {
		fprintf(stderr, " [-] please enter 1 to being the downloader\n");
		exit(EXIT_FAILURE);
	}

	bool islink = false;
	bool islinkDown = false;
	if (islinkDown == true && Link == "") {
		fprintf(stderr, " [-] Please try load the loader again\n");
		Sleep(3);
		exit(EXIT_FAILURE);
	}
	do {
		printf(" Downloader Version 1.1");
		int total = 1;
		if (total == 1 && Link != "") {
			
		}
		else if (total == 0 && Link != "") {

		}
		else {
			std::string Leave = " [-] Leaving tool now";
			std::cout << Leave << std::endl;
		}
	} while (islink == true && Link != "");
}

void checker()
{

}

void Options()
{
	char options_t;
	printf(" [+] Enter A Options: C For Calculator, D For Download L For Link Checker: ");
	std::cin >> options_t;
	switch (options_t) {
	case 'C':
		calculator();
		break;
	case 'D':
		downloader();
		break;
	case 'L':
		checker();
		break;
	default:
		fprintf(stderr, " [-] Please enter a option\n");
		Sleep(3);
		exit(EXIT_FAILURE);
	}
	
}

int main()
{
	draw();
	login();
	Options();
}