#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "GraphicEditor.h"
#include "UI.h"
#include "Shape.cpp"
#include "Circle.cpp"
#include "Rect.cpp"
#include "Line.cpp"
#include "GraphicEditor.cpp"
#include "UI.cpp"

int main(){
    GraphicEditor graphiceditor;
    graphiceditor.runEditor();
}