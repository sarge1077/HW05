#ifndef HW05_GraphicEditor
#define HW05_GraphicEditor

#include <iostream>
#include "Shape.h"

class GraphicEditor{
    Shape *pStart;
    Shape *pLast;
public:
    GraphicEditor() {pStart= pLast= NULL; }
    void runEditor();
    void insertShape(int insertNum);
    void deleteShape(int deleteNum);
};

#endif