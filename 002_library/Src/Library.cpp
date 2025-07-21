/*
 * Library.cpp
 *
 *  Created on: 19 jul 2025
 *      Author: sebas
 */


#include "Library.hpp"
#include <iostream>


Library::Library(uint8_t* name_): name(name_){

};

Library::~Library() = default;

void Library::Add_book(uint8_t* this_name, uint8_t* this_author, uint32_t this_pages, uint32_t this_publication_year){
	if(this->books_count >= BOOKS_LIMIT){
		std::cout<<"No hay espacio para mas libros"<<std::endl;
	}else{
		this->MyBooks.push_back(Book(this_name,this_author,this_pages, this_publication_year));
		this->books_count++;
	}
}

uint32_t Library::Get_book_count(){
	return this->books_count;
}

void Library::Get_Book_info(uint32_t books_count){
	std::cout<<"nombre: "<<MyBooks.at(books_count).Get_Book_name()<<std::endl;
	std::cout<<"autor: "<<MyBooks.at(books_count).Get_Book_author()<<std::endl;
	std::cout<<"paginas: "<<MyBooks.at(books_count).Get_pages()<<std::endl;
	std::cout<<"publicacion: "<<MyBooks.at(books_count).Get_publication_year()<<std::endl;
}

uint32_t Library::Get_free_space(){
	return BOOKS_LIMIT - this->books_count;
}


void Library::Get_all_books(void){
	std::cout<<"_____________Coleccion de libros_______________"<<std::endl;
	for(uint32_t i =0; i<this->books_count; i++){
		std::cout<<"Libro " << i+1 << ": " <<MyBooks.at(i).Get_Book_name()<<std::endl;
	}
	std::cout<<"_______________________________________________"<<std::endl;

}

void Library::Delete_book(uint32_t position){
	MyBooks.erase(MyBooks.begin() + position);

	this->books_count--;
}



