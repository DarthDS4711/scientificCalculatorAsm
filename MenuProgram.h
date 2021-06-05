#ifndef MENUPROGRAM_H
#define MENUPROGRAM_H
#include "MathAsm.h"

class MenuProgram
{
    public:
        MenuProgram();
        void menu();
    private:
        void selectOperationBasics();
        void selectTrigonometircFunction();
        void enterDataExponential();
        void enterDataPow();
        void enterDataRoots();
        void selectLogaritm();
        void enterDataFactorial();
};

#endif // MENUPROGRAM_H
