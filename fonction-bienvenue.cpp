#include "fonction-bienvenue.h"
#include <iostream>
void afficherBienvenue()
{
std::cout << "Bienvenue le monde !" << std::endl;
}

#include "fonction-bienvenue.h"
#include <iostream>
void afficherBienvenue(std::string message/*="Bienvenue le monde !"*/)
{
std::cout << message << std::endl;
}
