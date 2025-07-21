/*
 * Book.hpp
 *
 *  Created on: 19 jul 2025
 *      Author: sebas
 */

#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <cstdint>


class Book{

	private:

		uint8_t* name;
		uint8_t* author;
		uint32_t pages;
		uint32_t publication_year;

	public:
		Book(uint8_t* this_name, uint8_t* this_author, uint32_t this_pages, uint32_t this_publication_year);
		Book();
//		Book(Book &OneBook);

		~Book();

		const uint8_t* Get_Book_name(void);

		const uint8_t* Get_Book_author(void);

		const uint32_t Get_pages(void);

		const uint32_t Get_publication_year(void);

};




#endif /* BOOK_HPP_ */
