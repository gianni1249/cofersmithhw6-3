/** File name: phoneBook.h
* Class for holding records of names and phone numbers.
*
*/

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "record.h"

using std::string;
const int MAXSIZE = 10;

class Phonebook{
	private:
		Record list[MAXSIZE];
		string bookName;
		int num_records;
		int findName(string s);

	public:
		Phonebook();
		Phonebook(string s);
		string getPhoneBookName();
		int getNumberofRecords();
		void insert(string name, int number);
		void displayPhoneBook();
		void removeName(string s);
		int getPhoneNumber(string s);
		~Phonebook();

};

#endif //PHONEBOOK_H
