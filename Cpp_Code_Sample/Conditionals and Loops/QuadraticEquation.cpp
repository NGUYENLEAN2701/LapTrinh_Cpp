#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <windows.h>
#include <math.h>

bool is_number(const std::wstring &s)
{
    std::wstring::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it))
        ++it;
    return !s.empty() && it == s.end();
}

int Input_Value(char c)
{
    std::wstring ws;
    std::wcout << L"Nhập " << c << " = ";
    std::wcin.clear();
    std::wcin.ignore();
    std::getline(std::wcin, ws);
    while (!is_number(ws))
    {
        std::wcout << L"Xin Nhập Lại " << c << " = ";
        std::wcin.clear();
        std::wcin.ignore();
        std::getline(std::wcin, ws);
    }
    return stoi(ws);
}

int main()
{

    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    SetConsoleTitleW(L"Việt Nam Vô Địch!");
    HANDLE hdlConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX consoleFont;
    consoleFont.cbSize = sizeof(consoleFont);
    GetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);
    memcpy(consoleFont.FaceName, L"Consolas", sizeof(L"Consolas"));
    SetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);

    std::wcout << L"Giải Phương Trình Bậc Hai!" << std::endl;
    std::wcout << L"ax^2 + bx + c = 0" << std::endl;
    int a = Input_Value('a');
    int b = Input_Value('b');
    int c = Input_Value('c');

    return 0;
}
