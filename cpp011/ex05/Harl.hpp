#include <iostream>
#include <string>
#include <array>

class Harl
{
    public:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void complain(std::string level);
};