#include <iostream>
using namespace std;

int main(void)
{
    //aを宣言して初期値を0にする
    int a = 0;
    //ｐを宣言しａのポインターにする
    int* p = &a;
    //aを表示させる
    cout << "aの初期値: " << a << endl;
    //ａの代わりに10の数を加える
    *p = 10;
    //加えた値を表示させる
    cout << "aの変更後の値: " << a << endl;

    return 0;
}