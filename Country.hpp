/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Country.hpp
 * Author: Sala 6
 *
 * Created on 24 de agosto de 2018, 03:04 PM
 */

#ifndef COUNTRY_HPP
#define COUNTRY_HPP
#include<string>
class Country {
public:
    Country();
    Country(std::string , std :: string,std :: string,double,bool);
    std::string  getName();
    void setName (std::string) ;
    std::string getId ();
    void setId  (std::string);
    std::string getDescription();
    void setDescription (std::string);
    double getValue ();
    void setValue (double);
    bool getStock ();
    void setStock (bool);
    std::string parseDouble (double);
    std::string parseBool (bool);
    std :: string  toString ();
    
    
    virtual ~Country();
private:
    std::string name;
    std :: string id ;
    std :: string description ;
    double value;
    bool stock;
   

};

#endif /* COUNTRY_HPP */

