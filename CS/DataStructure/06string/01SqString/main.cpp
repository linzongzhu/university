#include <iostream>
#include "sqString.h"
using namespace std;

void menu();
void code1();
void code2();
void code3();
void code4();
void code5();
void code6();
void code7();
void code8();
void code9();
void code10();
void code11();
void code12();
void code13();
void code14();
void code15();
void code16();
void code17();
void code18();
void code19();
void code20();
void code201();
void code202();
void code203();
void code204();
void code205();
void code206();
void code207();
void code208();
void code209();

int main()
{
    while(1)
    {
        system("clear");
        menu();
        // display(a);
        cout << " ----------------------------------------------------------------------- \n";
        cout << " 请选择你要操作的代码<1-20>: ";
        int n;
        cin >> n;
        switch(n)
        {
            case 1:
                code1();
                break;
            case 2:
                code2();
                break;
            case 3:
                code3();
                break;
            case 4:
                code4();
                break;
            case 5:
                code5();
                break;
            case 6:
                code6();
                break;
            case 7:
                code7();
                break;
            case 8:
                code8();
                break;
            case 9:
                code9();
                break;
            case 10:
                code10();
                break;
            case 11:
                code11();
                break;
            case 12:
                code12();
                break;
            case 13:
                code13();
                break;
            case 14:
                code14();
                break;
            case 15:
                code15();
                break;
            case 16:
                code16();
                break;
            case 17:
                code17();
                break;
            case 18:
                code18();
                break;
            case 19:
                code19();
                break;
            case 20:
                code20();
                break;
            default:
                cout << " 结束" << endl;
                return 0;
        }
        cout << " 还继续吗<Y.继续\tN.结束>?";
        char c;
        cin >> c;
        if(c == 'Y' || c == 'y')
            continue;
        else
            break;
    }
    return 0;
}

void code1()
{
    cout << " ----------------------------------------------------------------------- \n";
}

void code2()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code3()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code4()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code5()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code6()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code7()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code8()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code9()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code10()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code11()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code12()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code13()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code14()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code15()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code16()
{
    cout << " ------------------ && 随机生成顺序串(小写英文字母) && ----------------- \n";
    cout << "  随机生成当前字符串顺序串(小写英文字母)为: ";

    cout << " ----------------------------------------------------------------------- \n";
}

void code17()
{
    cout << " --------------- && 用C++String顺序串初始化一个顺序串 && --------------- \n";
    cout << " ------------------- && 利用拷贝初始化构造函数 && ---------------------- \n";
    cout << " ----------------------------------------------------------------------- \n";
}

void code18()
{
    cout << " ------------- && 用另一个Sqstring顺序串初始化一个顺序串 && ------------ \n";
    cout << " ------------------- && 利用拷贝初始化构造函数 && ---------------------- \n";
    cout << " 通过拷贝初始化构造函数, 用当前的SqString顺序串\n";
    cout << " 初始化另一个SqString顺序串为: ";
    cout << " ----------------------------------------------------------------------- \n";
}

void code19()
{
    cout << " -------------------------- && 输入顺序串 && --------------------------- \n";
    cout << " 请输入顺序串: ";
    cout << " ----------------------------------------------------------------------- \n";
}

void code20()
{
    while(1)
    {
        system("clear");
        cout << " ----------------- && 简单的文本编辑器(顺序串的应用) && ---------------- \n";
        cout << " 20.1. 光标下移一行\n"
             << " 20.2. 光标上移一行\n"
             << " 20.3. 光标左移一个字符\n"
             << " 20.4. 光标右移一个字符\n"
             << " 20.5. 删除光标处开始的字符串\n"
             << " 20.6. 在光标之前插入一个文本\n"
             << " 20.7. 用一个文本替换光标处开始的len个字符串\n"
             << " 20.8. 页面设置\n"
             << " 20.9. 输入文本\n"
             << " 其他. 结束\n";
        cout << " ----------------------------------------------------------------------- \n";
        // cout << 当前文本
        cout << " ----------------------------------------------------------------------- \n";
        cout << " 请选择你要操作的代码<1-9>: ";
        int n;
        cin >> n;
        switch(n)
        {
            case 1:
                code 201();
                break;
            case 2:
                code 202();
                break;
            case 3:
                code 203();
                break;
            case 4:
                code 204();
                break;
            case 5:
                code 205();
                break;
            case 6:
                code 206();
                break;
            case 7:
                code 207();
                break;
            case 8:
                code 208();
                break;
            case 9:
                code 209();
                break;
            default:
                cout << " 结束" << endl;
                return ;
        }
        cout << " ----------------------------------------------------------------------- \n";
        cout << " 还继续吗<Y.继续\tN.结束>?";
        char c;
        while(cin >> c)
        {
            if(c == 'n' || c == 'N')
                return ;
            else if(c == 'y' || c == 'Y')
                break;
            else
            {
                cout << " 请输入<Y.继续\tN.结束> ";
                continue;
            }
        }
    }
}

void code201()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code202()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code203()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code204()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code205()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code206()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code207()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void code208()
{

    cout << " ----------------------------------------------------------------------- \n";
}

void menu()
{
    cout << " ----------------------- && 测试顺序串的操作 && ------------------------ \n";
    cout << "    1. 求顺序串的长度\n"
         << "    2. 判断顺序串是否为空\n"
         << "    3. 取顺序串的子串\n"
         << "    4. 在第i个字符前插入另一个顺序串\n"
         << "    5. 删除从第i个字符起长度为len的子串\n"
         << "    6. 判断是否相等 SqString顺序串==C++String顺序串\n"
         << "    7. 判断是否相等 SqString顺序串==SqString顺序串\n"
         << "    8. 加法运算 SqString顺序串 + C++String顺序串\n"
         << "    9. 加法运算 SqString顺序串 + SqString顺序串\n"
         << "   10. 串的朴素匹配(有回溯查找)\n"
         << "   11. 求模式串的next数组\n"
         << "   12. 模式匹配(无回溯KMP方法查找)\n"
         << "   13. 赋值运算 SqString顺序串==C++String顺序串\n"
         << "   14. 赋值运算 SqString顺序串==SqString顺序串\n"
         << "   15. 把顺序串置空\n"
         << "   16. 随机生成顺序串(小写英文字母)\n"
         << "   17. 用C++String顺序串初始化一个顺序串(利用拷贝初始化构造函数)\n"
         << "   18. 用另一个SqString顺序串初始化一个顺序串(利用拷贝初始化构造函数)\n"
         << "   19. 输入顺序串\n"
         << "   20. 简单的文本编辑器(顺序串的应用)\n";
    cout << " 其他. 结束 " << endl;
    cout << " ----------------------------------------------------------------------- \n";
}
