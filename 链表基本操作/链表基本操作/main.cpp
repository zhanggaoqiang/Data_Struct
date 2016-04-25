//
//  main.cpp
//  链表基本操作
//
//  Created by zgq on 16/4/25.
//  Copyright © 2016年 zgq. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#define LEN sizeof(struct student)
/*------------------数据定义-------------------*/
//定义一个学生信息的结构体，包括学号，姓名和结构体类型的指针
struct student
{
    long num;
    char name[128];
    struct student *next;//结构体指针
};
typedef struct student  *stuNode;
int n;//全局变量，记录链表的长度
/*------------------函数声明-----------------*/
stuNode Create();//创建一个新的链表
void Print(stuNode head);//通过传入的链表头指针打印整个链表
stuNode insert(stuNode head,stuNode newStu);//依照学生学号的顺序向链表中插入新元素

/*-----------------函数定义------------------*/
struct student *Create()
{
    struct student *head,*p1,*p2;
    //开辟一个LEN大小的空间，并让p1,p2指针指向它
    p2=p1=(struct student*)malloc(LEN);
    head=NULL;
    //创建链表结点并给节点点元素赋值
    printf("请输入学生的学号和姓名：");
    scanf("%ld %s",&p1->num,p1->name);
    while (p1->num!=0) {
        n+=1;
        if (NULL==head) {
            head=p1;
        }else {
            p2->next=p1;
        }
        
        p2=p1;
        p1=(struct student *)malloc(LEN);
        printf("请输入学生的学号和姓名");
        scanf("%ld %s",&p1->num,p1->name);
    }
    //将尾节点的指针置空
    p2->next=NULL;
    return head;
    
    
}








int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
