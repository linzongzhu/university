#ifndef NCLL_H
    #define NCLL_H

#include "../../myhead.h"
#include <iomanip>
template<typename ElemType>
class linkList
{
public:

    class linkNode
    {
    public:
        ElemType data;
        linkNode *next;
    };
    typedef linkNode * nodeP;

    // 逆置非循环单链表
    void adverse();

    void display();
    
    // 把非循环单链表置为空
    void clear();

    // 删除非循环单链表中数据域为e的第一个结点
    bool deleteElem(ElemType e);

    // 删除非循环单链表中的重复值
    void deleteRepeat();

    // 取非循环单链表的第i个结点
    Status getElem(int i, ElemType & e);

    // 取第一个结点的指针
    nodeP getHead();

    // 求非循环单链表结点的个数
    int getLength();

    // 在第i个结点之前插入一个数据域为e的结点
    Status insert(int i, ElemType e);

    // 判断非循环单链表是否为空
    bool isEmpty();

    // 查找第1个与e满足compare()关系的结点
    Status locateElem(ElemType e, Status (*compare)(ElemType, ElemType), int &i);

    // 返回某结点后继的数据域
    Status nextElem(ElemType e, ElemType & next_e);

    // 重载赋值运算符的定义
    linkList<ElemType> operator = (linkList<ElemType> rightL);

    // 返回某结点前驱的数据域
    Status priorElem(ElemType e, ElemType & prior_e);

    // 非循环单链表析构函数
    ~linkList();

    // 非循环单链表拷贝初始化构造函数
    linkList(const linkList<ElemType> & linkNode);

    // 非循环单链表构造函数
    linkList();
    
    void randList();
    
    void input();

protected:
    nodeP head;
};

template <typename ElemType>
void linkList<ElemType>::input()
{
    cout << " 请输入非循环单链表中结点的个数:";
    clear();

    int n;
    cin >> n;
    cout << " 请输入" << n << "个数据: ";
    int array[10000];
    for(int i = 0; i < n; i++)
        cin >> array[i];

    nodeP p, s;
    p = head;
    for(int i = 1; i <= n; i++)
    {
        s = new linkNode;
        assert(s != 0);

        s->data = array[i - 1];
        if(!head)
            head = s;
        else
            p->next = s;
        p = s;
    }
    if(head)
        p->next = NULL;
    cout << " 当前输入的非循环单链表为: " << endl;
    display();
}

template <typename ElemType>
void linkList<ElemType>::display()
{
    nodeP p = head;
    int n = getLength();
    cout << " ";
    for(int i = 1; i <= n; i++)
        cout << "[" << i << "] ";
    cout << endl;
    cout << " ";
    while(p != NULL)
    {
        cout << setw(2) << p->data;
        if(p->next != NULL)
            cout << "->";
        else
            cout << "^";
        p = p->next;
    }
    cout << endl;
}

// 逆置非循环单链表
template <typename ElemType>
void linkList<ElemType>::adverse()
{
    nodeP r, p, q;
    if(!head)
        return;
    r = NULL, p = head, q = p -> next;
    while(p)
    {
        p->next = r;
        r = p;
        p = q;
        if(q)
            q = q->next;
    }
    head = r;
}

// 把非循环单链表置为空
template <typename ElemType>
void linkList<ElemType>::clear()
{
    nodeP p, q;
    p = NULL, q = head;
    while(q)
    {
        p = q;
        q = q->next;
        delete p;
    }
    head = NULL;
}

// 删除非循环单链表中数据域为e的第一个结点
template <typename ElemType>
bool linkList<ElemType>::deleteElem(ElemType e)
{
    nodeP r, p;
    r = NULL, p = head;
    while(p && !equal(p->data, e))
    {
        r = p;
        p = p->next;
    }
    if(p == NULL)
        return false;
    if(r == NULL)
        return false;
    else
        r->next = p->next;
    free(p);
    return true;
}

// 删除非循环单链表中的重复值
template <typename ElemType>
void linkList<ElemType>::deleteRepeat()
{
    nodeP r,p,s;
    r = NULL, p = head;
    while(p)
    {
        s = head;
        while(s != p)
        {
            if(s->data == p->data)
            {
                r->next = p->next;
                delete p;
                p = r;
                break;
            }
            s = s->next;
        }
        r = p;
        if(p)
            p = p->next;
    }
}

// 取非循环单链表的第i个结点
template <typename ElemType>
Status linkList<ElemType>::getElem(int i, ElemType & e)
{
    int j = 1;
    nodeP p = head;
    while(p && j < i)
    {
        p = p->next;
        ++j;
    }
    if(!p||j>i)
        return ERROR;
    e = p->data;
    return OK;
}

// 取第一个结点的指针
template <typename ElemType>
typename linkList<ElemType>::nodeP linkList<ElemType>::getHead()
{
    return head;
}

// 求非循环单链表结点的个数
template <typename ElemType>
int linkList<ElemType>::getLength()
{
    int n = 0;
    nodeP p = head;
    while(p)
    {
        ++n;
        p = p->next;
    }
    return n;
}
    
// 在第i个结点之前插入一个数据域为e的结点
template <typename ElemType>
Status linkList<ElemType>::insert(int i, ElemType e)
{
    int j = 1;
    nodeP p = head;
    nodeP s;
    while(p && j < i - 1)
    {
        ++j;
        p = p->next;
    }

    if(!p || j > i)
        return ERROR;
    s = new linkNode;
    assert(s!=0);
    s->data = e;
    if(i == 1)
    {
        s->next = head;
        head = s;
    }
    else
    {
        s->next = p->next;
        p->next = s;
    }
    return OK;
}

// 判断非循环单链表是否为空
template <typename ElemType>
bool linkList<ElemType>::isEmpty()
{
    return (head ? false : true);
}


// 查找第1个与e满足compare()关系的结点
template <typename ElemType>
Status linkList<ElemType>::locateElem(ElemType e, Status (*compare)(ElemType, ElemType), int & i)
{
    nodeP p = head;
    i = 1;
    while(p && !(*compare)(p->data, e))
    {
        p = p->next;
        ++i;
    }
    if(!p)
        return ERROR;
    return OK;
}

// 返回某结点后继的数据域
template <typename ElemType>
Status linkList<ElemType>::nextElem(ElemType e, ElemType & next_e)
{
    nodeP p = head;
    while(p && !equal(p->data, e))
        p = p->next;
    if(!p || !p->next)
        return ERROR;
    next_e = p->next->data;
    return OK;
}

// 重载赋值运算符的定义
template <typename ElemType>
linkList<ElemType> linkList<ElemType>::operator = (linkList<ElemType> rightL)
{
    nodeP p = NULL, rp = rightL.getHead(), s;
    if(this != &rightL)
    {
        clear();

        while(rp)
        {
            s = new linkNode;
            assert(s != 0);
            s->data = rp->data;
            if(!head)
                head = s;
            else
                p->next = s;
            p = s;
            rp = rp->next;
        }
        if(p)
            p->next = NULL;
    }
    return *this;
}

// 返回某结点前驱的数据域
template <typename ElemType>
Status linkList<ElemType>::priorElem(ElemType e, ElemType & prior_e)
{
    nodeP r = NULL, p = head;
    while(p && !equal(p->data, e))
    {
        r = p;
        p = p->next;
    }
    if(!p||!r)
        return ERROR;

    prior_e = r->data;
    return OK;
}

// 非循环单链表析构函数
template <typename ElemType>
linkList<ElemType>::~linkList()
{
    clear();
}

// 非循环单链表拷贝初始化构造函数
template <typename ElemType>
linkList<ElemType>::linkList(const linkList<ElemType> & otherL)
{
    nodeP p, op = otherL.head, s;
    head = p = NULL;
    while(op)
    {
        s = new linkNode;
        assert(s != 0);
        s->data = op->data;
        if(!head)
            head = s;
        else
            p->next = s;
        p = s;
        op = op->next;
    }
    if(head)
        p->next = NULL;
}

// 非循环单链表构造函数
template <typename ElemType>
linkList<ElemType>::linkList()
{
    head = NULL;
}

template <typename ElemType>
void linkList<ElemType>::randList()
{
    clear();

    int array[6];
    cout << " 用如下的随机数生成的非循环单链表: " << endl;
    cout << " ";
    for(int i = 0; i < 6; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << " ";
    }
    cout << endl;

    nodeP p, s;
    p = head;
    for(int i = 1; i <= 6; i++)
    {
        s = new linkNode;
        assert(s != 0);

        s->data = array[i - 1];
        if(!head)
            head = s;
        else
            p->next = s;
        p = s;
    }
    if(head)
        p->next = NULL;
    cout << " 随机生成的非循环单链表为: " << endl;
    display();
}

#endif

