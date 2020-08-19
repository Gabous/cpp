#include <iostream>
#include <tchar.h>

namespace eixos{

    int x;
    int y;
    int z;

}

int main(int argc, char * argv[]){
    _tsetlocale(LC_ALL, _T("portuguese"));
    eixos::x = 4;
    eixos::y = 5;
    eixos::z = 6;

    std::cout << "Pontuação:" << eixos::x << " Y:" << eixos::y << " Z:" << eixos::z <<std::endl;
    //system("PAUSE");
    return 0;
}