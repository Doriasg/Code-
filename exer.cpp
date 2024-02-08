#include <iostream>
int main()
{
    std::cout << "Entrez deux nombres" << std::endl;
    float number1, number2;
    std::cin >> number1 >> number2;
    std::cout << "A present faites le choix d'une operation a effectuer. Les operations disponibles sont: +, -,/, et *" << std::endl;
    std::string operation;
    std::cin >> operation;
    if (operation == "+")
    {
        std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
    }
    else if (operation == "-")
    {
        std::cout << number1 << " - " << number2 << " = "<< number1 - number2<<std::endl;
    }
    else if  (operation == "*")
    {
        std::cout << number1 << " * " << number2 << " = "<< number1*number2<<std::endl;
    }
    else if  (operation == "/")
    {
    if(number2 ==0)
    {
        std::cout <<"Erreur"<<std::endl;
    }
     else if (number2!=0)
    {
        std::cout << number1 << " / " << number2 << " = "<< number1/number2<<std::endl;
    }
    }
    else{
        std::cout <<"Error";
    }
   //comment faire pour le compilateur me renvoie erreur automatiquement apres avoir entré une lettre//
}