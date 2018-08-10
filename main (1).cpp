#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data data1 = Data(31, 12, 2000);
   // Data* data2 = new Data (1, 1, 2000);


/*    data1.set_dia();
    data1.get_dia(dia);
    data1.set_mes();
    data1.get_mes(mes);
    data1.set_ano();
    data1.get_ano(ano);
*/
    data1.AvancarDia();

    cout << data1.dia << "/" << data1.mes << "/" << data1.ano <<endl;



    return 0;
}
