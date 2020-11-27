#ifndef HOSPITAL_H_INCLUDED
#define HOSPITAL_H_INCLUDED
#include <windows.h>
#include <ctime>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class hospital          //定义医院类
{
public :
    int delete_file();  //删除本地文件
    int delete1();      //重载删除函数
    int delete1(long i);//删除函数
    int cz_menu();      //查找删除函数菜单
    int serch(int i);   //重载serch函数实现两种不同查找方式
    int serch();        //查找删除函数
    void f_write();     //写文件函数，用于在程序关闭之前保存数据到本地
    void f_read();      //读文件函数，用于在程序打开之前读取数据要程序中
    int input();        //输入函数
    void menu();        //主菜单函数
    void tj();          //统计功能函数
    int gh_menu();      //挂号功能选择菜单
    int tj_menu();      //统计功能选择菜单函数
    int gjzh();         //挂急诊号
    int yygh();         //预约挂号函数
    int ghxd();         //挂号向导函数
    int ghrs();         //挂号情况统计函数
    int jzrs();         //各科就诊人数统计函数
    int nlb();          //年龄人数统计函数
    int ghsr();         //挂号收入情况
    int gdrh();         //挂当日号函数
    int show();         //展示病人名单
    void room(char room);         //分诊室函数
};

#endif // HOSPITAL_H_INCLUDED