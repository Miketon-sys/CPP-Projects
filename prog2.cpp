#include <iostream>


int main()
{
    int sales=95000;
    const float stateTaxRate=0.04;
    const float countyTaxRate=0.02;

    std::cout <<"Sales: $" <<(sales)<<"\n"
              <<"State Tax Total: $" <<(stateTaxRate*sales)<<"\n"
              <<"County Tax Total: $" <<(countyTaxRate*sales)<<"\n"
              <<"Total Tax: $" <<(stateTaxRate*sales)+(countyTaxRate*sales);

    return 0;
}
