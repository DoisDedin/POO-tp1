#include "pagamentos.hpp"

Pagamentos::Pagamentos(){}
Pagamentos::Pagamentos(double valor, bool foiPago) : valor(valor), foiPago(foiPago){}
Pagamentos::~Pagamentos(){}

void Pagamentos::setValor(double valor){
    this->valor = valor;
}
void Pagamentos::setFoiPago(bool foiPago){
    this->foiPago = foiPago;
}

double Pagamentos::getValor() const{
    return valor;
}
bool Pagamentos::getFoiPago() const{
    return foiPago;
}