#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int MAX_LENGTH = 1000;
    char str[MAX_LENGTH];

    cout << "Enter string: ";

    cin.getline(str, MAX_LENGTH);

    int len = strlen(str);
    
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    std::cout << "Reversed string: " << str << std::endl;
    return 0;
}
