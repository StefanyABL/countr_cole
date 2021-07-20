/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tail.cpp
 * Author: Sala 6
 * 
 * Created on 31 de agosto de 2018, 03:26 PM
 */
#include "Tail.hpp"
#include<stdlib.h>
#include <stddef.h>

template<class T>
Tail<T>::Tail() {
    head == NULL;
}

template<class T>
void Tail<T>::addNote(T info) {
    
    ListNode <T> * newNode = new ListNode()<T>(info);
    if (isEmpty()){
        head = newNode;
    }else{
        ListNode<T>* aux = head;
        while (auxx->head!=NULL){
            aux = aux->next;
            
        }
        aux->next = newNode;
    }
}
    




template<class T>
bool Tail<T>::isEmpty() {
    return head = NULL;

}
template<class T>
T Tail<T>::getNode() {
   // T Tail<T>::addNote(T into);
        

}




template<class T>
Tail<T>::~Tail(){
    
}
