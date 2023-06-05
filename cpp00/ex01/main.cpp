#include "PhoneBook.hpp"

void printHeader(void)
{
    std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗\n";
    std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝\n";
    std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ \n";
    std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ \n";
    std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗\n";
    std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝\n";
    std::cout << "                                                                    by ayaman\n";
}

int main(void)
{
    std::string command;
    PhoneBook pb;

    PhoneBook hb;

    printHeader();
    while (true)
    {
        std::cout << std::endl << "Choose one command and input >> [ ADD | SEARCH | EXIT] : ";
        
        if (!(std::getline(std::cin, command)))
            exit(1);
        if (std::cin.eof())
            exit(1);
        if (command.compare("ADD") == 0 || command.compare("Add") == 0 || command.compare("add") == 0)
        {
            if (pb.addContact() == ERROR)
                exit(1);
        }
        else if (command.compare("SEARCH") == 0 || command.compare("Search") == 0 || command.compare("search") == 0)
        {
            if (pb.searchContact() == ERROR)
                exit(1);
        }
        else if (command.compare("EXIT") == 0 || command.compare("Exit") == 0 || command.compare("exit") == 0)
        {
            std::cout << "Goodbye!" << std::endl;
            break ;
        }
        else
            std::cout << "This command dosen't exist." << std::endl;
    }
    return (0);
}