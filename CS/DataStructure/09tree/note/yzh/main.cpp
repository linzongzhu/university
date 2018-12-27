#include <iostream>
#include <string>
#include "biTree.h"
#include "threadTree.h"
#include "huffmanTree.h"
using namespace std;

biTree<char> a, b;
threadTree<char> tt;
huffmanTree<char> ht;

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

int main()
{
    menu();
    return 0;
}

void menu()
{
    a.getByRand(0);
    tt.getByRand(0);
    while(1)
    {
        system("clear");
        cout << " ==================== && 测试顺序表的操作 && =================== " << endl;
        cout << "    1. 求二叉树的结点数" << endl
             << "    2. 求二叉树的叶子数" << endl
             << "    3. 递归求二叉树的深度" << endl
             << "    4. 交换二叉树中所有结点的左右子树" << endl
             << "    5. 前序递归遍历二叉树" << endl
             << "    6. 中序递归遍历二叉树" << endl
             << "    7. 后序递归求二叉树" << endl
             << "    8. 非递归中序遍历二叉树" << endl
             << "    9. 按层次顺序遍历二叉树" << endl
             << "   10. 以顺序存储的方式显示二叉树" << endl
             << "   11. 二叉树的二叉链表储存转化为顺序存储结构" << endl
             << "   12. 二叉树的顺序存储转换为二叉链表存储结构" << endl
             << "   13. 随机生成二叉树" << endl
             << "   14. 输入二叉树" << endl
             << "   15. 中序遍历中序穿线二叉树" << endl
             << "   16. 中序穿线二叉树顺序存储转链式存储" << endl
             << "   17. 中序穿线二叉树中找指定结点中序的前驱和后继" << endl
             << "   18. 随机生成中序穿线二叉树" << endl
             << "   19. 输入中序穿线二叉树" << endl
             << "   20. 哈夫曼树（二叉树的应用）" << endl
             << " 其他. 结束" << endl;
        cout << " ============================================================== " << endl;
        // cout << a << endl;
        cout << " ============================================================== " << endl;
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
                return ;
        }
        cout << " 还继续吗<Y.继续	N.结束>?";
        char c;
        while(cin >> c)
        {
            if(c == 'y' || c == 'Y' || c == 'n' || c == 'N')
                break;
            else
                cout << " 还继续吗<Y.继续	N.结束>?";
        }
        if(c == 'y' || c == 'Y')
            continue;
        else
            return;
    }
}
void code1()
{

    cout << " ============================================================== " << endl;
}

void code2()
{

    cout << " ============================================================== " << endl;
}

void code3()
{

    cout << " ============================================================== " << endl;
}

void code4()
{

    cout << " ============================================================== " << endl;
}

void code5()
{

    cout << " ============================================================== " << endl;
}

void code6()
{

    cout << " ============================================================== " << endl;
}

void code7()
{

    cout << " ============================================================== " << endl;
}

void code8()
{

    cout << " ============================================================== " << endl;
}

void code9()
{

    cout << " ============================================================== " << endl;
}

void code10()
{

    cout << " ============================================================== " << endl;
}

void code11()
{

    cout << " ============================================================== " << endl;
}

void code12()
{

    cout << " ============================================================== " << endl;
}

void code13()
{

    cout << " ============================================================== " << endl;
}

void code14()
{

    cout << " ============================================================== " << endl;
}

void code15()
{

    cout << " ============================================================== " << endl;
}

void code16()
{

    cout << " ============================================================== " << endl;
}

void code17()
{

    cout << " ============================================================== " << endl;
}

void code18()
{

    cout << " ============================================================== " << endl;
}

void code19()
{

    cout << " ============================================================== " << endl;
}

void code20()
{

    cout << " ============================================================== " << endl;
}
