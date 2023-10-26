#include "speechManager.h"
#include <algorithm>

SpeechManager::SpeechManager()
{
    this->initSpeech();
    this->creatSpeaker();
}

SpeechManager::~SpeechManager()
{
}

void SpeechManager::show_Menu()
{
    cout << "********************************" << endl;
    cout << "******* 欢迎参加演讲比赛 *******" << endl;
    cout << "******* 1. 开始演讲比赛  *******" << endl;
    cout << "******* 2. 查看往届记录  *******" << endl;
    cout << "******* 3. 清空比赛记录  *******" << endl;
    cout << "******* 0. 退出比赛程序  *******" << endl;
    cout << "********************************" << endl;
    cout << endl;
}

void SpeechManager::exitSystem()
{
    cout << "欢迎下次使用" << endl;
    exit(0);
}

void SpeechManager::initSpeech()
{
    this->_v1.clear();
    this->_v2.clear();
    this->_v3.clear();
    this->_speaker.clear();
    this->_index = 1;
}

void SpeechManager::creatSpeaker()
{
    string nameSeed = "ABCDEFGHIJKL";

    for (int i = 0; i < nameSeed.size(); i++) {
        string name = "选手";
        name += nameSeed[i];

        Speaker sp;
        sp._name = name;

        for (int j = 0; j < 2 ; j++){
            sp._score[j] = 0;
        }

        this->_v1.push_back(i + 10001);
        this->_speaker.insert(make_pair(i + 10001, sp));
    }
}

void SpeechManager::speechDraw()
{
    cout << "第 << " << this->_index << " >> 轮比赛选手抽签" << endl;
    cout << "-----------------------" << endl;
    cout << "抽签后演讲顺序： " << endl;

    if (this->_index== 1) {
        // 第一轮比赛
        random_shuffle(_v1.begin(), _v1.end());
        for (vector<int>::iterator it = _v1.begin(); it != _v1.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    } else {
        // 第二轮比赛
        random_shuffle(_v2.begin(), _v2.end());
        for (vector<int>::iterator it = _v2.begin(); it != _v2.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }

    cout << "-----------------------" << endl;
    cout << endl;
}

void SpeechManager::startSpeech()
{
    // 第一轮比赛
    
    // 1.抽签
    this->speechDraw();
    
    // 2.比赛
    
    // 3.显示晋级结果
    
    // 第一轮比赛
    
    // 1.抽签
    
    // 2.比赛
    
    // 3.显示最终结果
    
    // 4.保存分数到文件中
}
