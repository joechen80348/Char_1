#include <iostream>

// 1. �إߤ@�r���}�C�W�٬��uchar_arr�v�H�j���X���ܼƨíp��u�O����j�p�v �N�j�餺���r���H���X�覡��X�ç@�[�`
// 2. �إߤ@��Ƹ�ƫ��A,�t�s�@�@�O�W,�Τ@���Хh���B��ק�

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
    cout << "�O����j�p " << sum << endl ;


    int total=0;
    for ( int i=0; i<num; ++i )
        { cout << (int)(char_arr[i]) << " "; // ���X���
        }
    cout << endl;
    for ( int i=0; i<num; ++i )
        { total += char_arr[i];
        }
    cout << "���X�`�M " << total << endl;

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
