#include "SolveQE.h"

int main()
{
    //Cài đặt chương trình sử dụng tiếng Việt có dấu:
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    SetConsoleTitleW(L"Giải Phương Trình Bậc Hai!");
    HANDLE hdlConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX consoleFont;
    consoleFont.cbSize = sizeof(consoleFont);
    GetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);
    memcpy(consoleFont.FaceName, L"consolas", sizeof(L"consolas"));
    SetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);

    //Chạy chương trình đến khi người dùng ngưng sử dụng
    while(1)
    {
        //Nhập dữ liệu chương trình
        std::wcout << L"Giải Phương Trình Bậc Hai!" << std::endl;
        std::wcout << L"ax\u00B2 + bx + c = 0" << std::endl;;
        float a = Input_Value('a');
        float b = Input_Value('b');
        float c = Input_Value('c');
        Print_Equation(a,b,c);//Hàm dùng để in ra màn hình phương trình đã nhập dữ liệu


        //Giải chương trình
        Result_QE x1,x2;
        Solve_QuadraticEquation(a,b,c,&x1,&x2);
        Print_Result_QE(x1,x2);


        //Lựa chọn thoát hoặc tiếp tục chương trình
        std::wcout << L"Ấn phím ESC để thoát chương trình...";
        getch();
        if(GetKeyState(VK_ESCAPE) & 0x8000)
        {
            return 0;
        }
        system("cls");
    }

}
