#include "mat.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

string ariel::mat(int row,int col,char symbol1,char symbol2){
    if(row > 1 && col > 1){
        return ariel::matPrinterRec(row - 2, col - 2 , symbol1, symbol2);
    }else if(row > 1){
        return ariel::matPrinterRec(row - 2, col, symbol1, symbol2);
    }else if(col > 1){
        return ariel::matPrinterRec(row, col - 2 , symbol1, symbol2);
    }else{
        return ariel::matPrinterRec(row, col , symbol1, symbol2);
    }
}

string ariel::matPrinterRec(int row,int col,char symbol1,char symbol2){
    

}