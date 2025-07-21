/*
 * Library.hpp
 *
 *  Created on: 19 jul 2025
 *      Author: sebas
 */

#ifndef LIBRARY_HPP_
#define LIBRARY_HPP_

#include <cstdint>
#include "Book.hpp"
#include <vector>


class Library{

	private:
		static const uint32_t BOOKS_LIMIT {5};
		uint8_t * name;
//		Book *MyBooks[BOOKS_LIMIT];
		std::vector<Book> MyBooks;
		uint32_t books_count = 0;

	public:

		Library(uint8_t* name_);
		~Library();

		void Add_book(uint8_t* this_name, uint8_t* this_author, uint32_t this_pages, uint32_t this_publication_year);

		uint32_t Get_book_count(void);
		void Get_Book_info(uint32_t books_count);
		uint32_t Get_free_space(void);
		void Get_all_books(void);

		void Delete_book(uint32_t position);

};




#endif /* LIBRARY_HPP_ */
