#pragma once

#include <iostream>
#include <vector>
#include <map>
#include "speaker.h"

using namespace std;

class SpeechManager
{
public:
    // 构造函数
    SpeechManager(); 

    // 析构函数
    ~SpeechManager();

    // 菜单功能
    void show_Menu();

    // 退出系统
    void exitSystem();

    // 初始化比赛
    void initSpeech();

    // 创建选手
    void creatSpeaker();

    // 开始比赛
    void startSpeech();

    // 抽签
    void speechDraw();

public:
    // 比赛选手 12人
    vector<int> _v1;

    // 第一轮晋级选手 6人
    vector<int> _v2;

    // 胜出的前三名选手
    vector<int> _v3;

    // 存放编号和对应选手
    map<int, Speaker> _speaker;

    // 比赛轮数
    int _index;
};

