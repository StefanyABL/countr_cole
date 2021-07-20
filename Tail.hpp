/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tail.hpp
 * Author: Sala 6
 *
 * Created on 31 de agosto de 2018, 03:26 PM
 */

#ifndef TAIL_HPP
#define TAIL_HPP

#include "ListNode.hpp"

template<class T>
class Tail {
public:
    Tail();
    bool isEmpty ();
    void addNote (T);
    T getNode ();
  
    virtual ~Tail();
private:
    ListNode<T>* head;
};

#endif /* TAIL_HPP */

