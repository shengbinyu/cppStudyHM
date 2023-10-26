#include <iostream>
using namespace std;

#include "speechManager.h"

int main()
{
    // 创建演讲比赛管理对象 
    SpeechManager sm;

    // 测试选手创建
    // for (map<int, Speaker>::iterator it = sm._speaker.begin();
    //      it != sm._speaker.end(); it ++){
    //     cout << "选手编号：" << it->first << " 姓名：" << it->second._name << " 分数：" << it->second._score[0] << endl;
    // }

    int choice = 0;

    while (true)
    {
        sm.show_Menu();
        cout << "请输入您的选择：" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1: // 开始比赛
            sm.startSpeech();
            break;
        case 2: // 查看往届比赛记录
            break;
        case 3: // 清空比赛纪录
            break;
        case 0: // 退出
            sm.exitSystem();
            break;
        default:
            system("clear");
            break;
        }
    }

    //pause();
    return 0;
}

