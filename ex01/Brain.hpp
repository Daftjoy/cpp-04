#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <string>
# include <cstdlib>
# include <cmath>

class Brain
{
 
    public:
        Brain();
        Brain(const Brain &other);
        ~Brain();

        Brain	&operator=( const Brain &other );

        std::string ideas[100]; 

};


#endif