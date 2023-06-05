#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <cstring>
# include "Info.hpp"

# define SUCCESS 1
# define ERROR -1
# define MAX_INPUT_SIZE 100

class PhoneBook
{
private:
    int contactNum_;
    Info contact[8]; 

    std::string cutLettersToTen(const std::string str) const;

public:
    PhoneBook(void) : contactNum_(0){};
    int addContact(void);
    int searchContact(void);
    void printAllContact(void) const;
    void PrintDetailContact(const int i) const;
    int getContactNum(void) const;
};

#endif