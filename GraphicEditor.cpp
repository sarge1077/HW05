#include <iostream>
#include "GraphicEditor.h"
#include "UI.h"
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

void GraphicEditor::insertShape(int insertNum){
    Shape *pTmp=NULL;
    switch (insertNum)
    {
    case 1:
        pTmp=new Line();
        break;
    case 2:
        pTmp=new Circle();
        break;
    case 3:
        pTmp=new Rect();
        break;
    }
    if(pStart==NULL) {
        pStart=pTmp;
        pLast=pTmp;
    }
    pLast->add(pTmp);
    pLast = pLast->getNext();
}

void GraphicEditor::deleteShape(int deleteNum){
    Shape*pNext=pStart;
    Shape*pPre=pStart;
    for(int i=0;i<deleteNum;i++){
        pPre=pNext;
        pNext=pNext->getNext();
    }
    if(pNext==pStart){
        pStart=pNext->getNext();
        delete pNext;
    }
    else{
        pPre->add(pNext->getNext());
        delete pNext;
    }
}

void GraphicEditor::runEditor(){
    int checkNum,insertNum,deleteNum;

    cout<<"그래픽 에디터입니다.\n";
    while(true){
        checkNum=UI::setInterface();
        if(checkNum==1){
            insertNum=UI::setShape();
            insertShape(insertNum);
        }
        else if(checkNum==2){
            deleteNum=UI::setDeleteShape();
            deleteShape(deleteNum);
        }
        else if(checkNum==3){
            Shape* tmp = pStart;
		    int i = 0;
		    while (tmp != NULL) {
			    cout << i++ << ": ";
			    tmp->paint();
			    tmp = tmp->getNext();
		    }
        }
        else if(checkNum==4) {
            cout<<"종료되었습니다.";
            break;
        }
    }
}