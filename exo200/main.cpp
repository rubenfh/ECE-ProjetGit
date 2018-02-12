#include <iostream>
#include <string>

int main()
{
    int x;
    float y;
    std::string phrase("Saisir un entier puis un flottant separes par un espace");
    std::string& Reference(phrase);

    std::cout << std::endl <<Reference<<":"<<std::endl;

    std::cin >>x;
    std::cin >>y;

    std::cout<<"Affichage: "<<x<<";" <<y;


    return 0;
}
