/*
 * Book.cpp
 *
 *  Created on: 19 jul 2025
 *      Author: sebas
 */

#include "Book.hpp"


Book::Book(uint8_t* this_name, uint8_t* this_author, uint32_t this_pages, uint32_t this_publication_year) :
						name(this_name),
						author(this_author),
						pages(this_pages),
						publication_year(this_publication_year){

}

Book::Book(){
	this->author = nullptr;
	this->name = nullptr;
	this->pages = 0;
	this->publication_year = 1970;

}

//Book::Book(Book &OneBook):
//		name(OneBook.name),
//		author(OneBook.author),
//		pages(OneBook.pages),
//		publication_year(OneBook.publication_year){
//
//}

Book::~Book() = default;

const uint8_t* Book::Get_Book_author(void){
		return this->author;

}

const uint8_t* Book::Get_Book_name(void){
		return this->name;

}

const uint32_t Book::Get_pages(void){
	return this->pages;
}
const uint32_t Book::Get_publication_year(void){
	return this->publication_year;
}

