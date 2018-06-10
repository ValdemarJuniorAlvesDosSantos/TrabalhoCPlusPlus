/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: vj-estudos
 *
 * Created on 5 de Junho de 2018, 21:10
 */

#ifndef LISTA_H
#define LISTA_H
#include <cstdlib>
using namespace std;
template <class T>
class Lista {
    
    class No {
    public:
        No* prox;
        T info;
    };
    private:   
No* prim;

public:
Lista() { prim = NULL; }
void insereInicio(T valor);
T pegaNaLista(int n);
void imprime();
};

template <class T>
void Lista<T>::insereInicio(T valor) { 
    No* novo = new No();
    novo->info= valor;
    novo->prox=this->prim;
    this->prim=novo;
}
template <class T>
T Lista<T>::pegaNaLista(int n){
    
    No* aux = this->prim;
    for (int i = 1; i < n;i++){
        aux=aux->prox;
    }
    return aux->info;
}
template <class T>
void Lista<T>::imprime(){
    No* aux = this->prim;
    while (aux!=NULL){
        aux->info->imprime();
        aux=aux->prox;
    }
}

#endif /* LISTA_H */

