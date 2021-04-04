#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
	std::fstream inf("SomeText.txt", std::ios::in | std::ios::out);
	for (int i = 1; i < 11; i++) {
		inf << "See line #" << i << "!\n";
	}
	std::string strData;
	int n;
	std::cout << "Enter number of line: ";
	std::cin >> n;

	inf.seekg((n - 1) * 14, std::ios::beg);
	getline(inf, strData);
	std::cout << "Your line: ";
	std::cout << strData << "\n";
	return 0;
}