/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Casa.cpp
 * Author: 2015100354
 *
 * Created on 5 de Junho de 2018, 12:09
 */

#include "Casa.h"

//Construtor de casa
Casa::Casa(string tipo ,int identificador,string dono,int nQuartos,int nVagas,int nPavi,float areaPavi,float precoMetro,float areaLivre,float precoLivre):
    Resid(tipo , identificador, dono, nQuartos, nVagas){
        this->nPavi=nPavi;
        this->areaPavi=areaPavi;
        this->precoMetro=precoMetro;
        this->areaLivre=areaLivre;
        this->precoLivre=precoLivre;
}
// Constutor por copia
Casa::Casa(const Casa& orig) : Resid(orig) {
    this->nPavi=orig.nPavi;
    this->areaPavi=orig.areaPavi;
    this->precoMetro=orig.precoMetro;
    this->areaLivre=orig.areaLivre;
    this->precoLivre=orig.precoLivre;
}
// função que retorna o preco da casa
float Casa::preco(){
    return nPavi*areaPavi*precoMetro + areaLivre*precoLivre;
}

//função de comparação da casa
int Casa:: compara(Casa *a){
    if (this->nQuartos==a->nQuartos){
        //compara por identificador caso o numero de quartos seja a mesma
        return this->getId() > a->getId();
    }
    return this->nQuartos > a->nQuartos;
}
