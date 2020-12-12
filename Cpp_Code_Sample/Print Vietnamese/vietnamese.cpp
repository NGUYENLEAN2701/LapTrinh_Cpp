#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <windows.h>

using namespace std;

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
    wcout << L"Tiếng Việt có dấu" << endl;
    wstring test;
    wcout << L"Hãy nhập vào một chuỗi ký tự:" << endl;
    getline(wcin, test);
    wcout << L"Chuỗi ký tự mà bạn vừa mới nhập:" << endl;
    wcout << test << endl;
    return 0;
}
