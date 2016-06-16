#include <iostream>

// 1. 建立一字元陣列名稱為「char_arr」以迴圈輸出該變數並計算「記憶體大小」 將迴圈內的字元以內碼方式輸出並作加總
// 2. 建立一整數資料型態,另製作一別名,及一指標去做運算修改

using namespace std;

int main()
{
    const int num = 26;
    char* char_arr = new char[num];
    for ( int i=0; i<num; ++i )
        { char_arr[i]='a'+i;
        }

    for ( int i=0; i<num; ++i )
        { cout << char_arr[i] << " ";
        }
    cout << endl;

    int sum=0;
    for ( int i=0; i<num; ++i )
        { sum += sizeof(char_arr[i]);
        }
    cout << "記憶體大小 " << sum << endl ;


    int total=0;
    for ( int i=0; i<num; ++i )
        { cout << (int)(char_arr[i]) << " "; // 內碼表示
        }
    cout << endl;
    for ( int i=0; i<num; ++i )
        { total += char_arr[i];
        }
    cout << "內碼總和 " << total << endl;

    int x=3;
    int& y=x;
    int* z= &x;

    x=x+1;
    cout << x << endl;
    y=y+1;
    cout << y << endl;
    *z=*z+1;
    cout << *z << endl;

    return 0;
}
