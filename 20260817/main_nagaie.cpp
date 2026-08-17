
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header_nagaie.h"

using namespace std;

//定数
//ピッチャーの選択の最小値
const int PITING_MIN = 0;
//ピッチャーの選択の最大値
const int PITING_MAX = 3;
//確率
const int PROBABILITY = 4;
//ストライクカウントの回数上限
const int STRIKE_COUNT = 3;
//ボールカウントの回数上限
const int BALL_COUNT = 4;
//アウトカウントの回数上限
const int OUT_COUNT = 3;
//ヒットのカウント
const int HIT_COUNT = 4;

int main(void)
{
    //変数宣言
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //ゲーム開始！！
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        //投げる球の表示
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;

        while (true)
        {
            //入力チェック
            cin >> ply;

            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }


        PitingType(ply);

        //敵の確率をランダムで
        emy = rand() % PROBABILITY;


        prod = rand() % PROBABILITY;

        //ボール、ストライクの判定
        if (ply != emy)
        {
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //ヒット、アウトの判定
        else
        {
            Strike = 0;
            Ball = 0;

            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        //ヒット、アウトのカウント
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            else
            {
                Hit++;
            }

            Strike = 0;
            Ball = 0;
        }
        //プレイ状況の表示
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }


    Result(Out);

    return 0;
}