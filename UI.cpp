#include <iostream>
#include "UI.h"
using namespace std;

int UI::setInterface(){
    int chk;
    cout<<"삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
    cin>>chk;
    return chk;
}

int UI::setShape(){
    int chk;
    cout<<"선:1, 원:2, 사각형:3 >> ";
    cin>>chk;
    return chk;
}

int UI::setDeleteShape(){
    int chk;
    cout<<"삭제하고자 하는 도형의 인덱스 >> ";
    cin>>chk;
    return chk;
}