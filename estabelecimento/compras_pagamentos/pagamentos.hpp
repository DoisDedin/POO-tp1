#ifndef PAGAMENTOS_HPP
#define PAGAMENTOS_HPP

#include <iostream>
#include <string>

using namespace std;

class Pagamentos{
    private:
        double valores;
        bool foiPago;
    public:
        Pagamentos();
        Pagamentos(double valoes = 0, bool foiPago = 0);
        void setValores(double valores);
        void setFoiPago(bool foiPago);

        double getValores() const;
        bool getFoiPago() const;
};



#endif