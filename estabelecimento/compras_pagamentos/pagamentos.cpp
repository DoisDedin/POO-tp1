#include "pagamentos.hpp"

Pagamentos::Pagamentos(){}
Pagamentos::Pagamentos(double valores, bool foiPago){
    setValores(valores);
    setFoiPago(foiPago);
} 

void Pagamentos::setValores(double valores){
    this->valores = valores;
}
void Pagamentos::setFoiPago(bool foiPago){
    this->foiPago = foiPago;
}

double Pagamentos::getValores() const{
    return valores;
}
bool Pagamentos::getFoiPago() const{
    return foiPago;
}