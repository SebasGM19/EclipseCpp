/*
 * main.cpp
 *
 *  Created on: 19 jul 2025
 *      Author: sebas
 */

#include "iostream"
#include "cstring"
#include "Library.hpp"

int main(void){

Library * MyLib = new Library((uint8_t*)"accion");

MyLib->Add_book((uint8_t*)"superman",(uint8_t*)"nucita",34,2018);

uint32_t actual_book = MyLib->Get_book_count();

MyLib->Add_book((uint8_t*)"batman",(uint8_t*)"nucita",34,2018);
MyLib->Add_book((uint8_t*)"iron man",(uint8_t*)"nucita",34,2018);
MyLib->Add_book((uint8_t*)"Bestia",(uint8_t*)"nucita",34,2018);
MyLib->Add_book((uint8_t*)"X man",(uint8_t*)"nucita",34,2018);


MyLib->Get_all_books();

MyLib->Delete_book(1);

MyLib->Add_book((uint8_t*)"sebastian",(uint8_t*)"nucita",34,2018);

MyLib->Get_all_books();



delete MyLib;

	return 0;
}

