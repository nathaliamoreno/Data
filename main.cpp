#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data data1 = Data(28, 2, 2000);


    cout << "Data inicial: " << data1.dia << "/" << data1.mes << "/" << data1.ano <<endl;
    data1.AvancarDia();
    cout << "Proxima data: "<< data1.dia << "/" << data1.mes << "/" << data1.ano <<endl;


    return 0;
}
