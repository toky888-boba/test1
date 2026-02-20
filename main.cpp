#include <iostream>
#include <string>

void salut(std::string &a, std::string &c){

    std::cout << "salut " << a << std::endl;
    std::cout << "salut " << c << std::endl;

}

int main(){

    std::string b;
    std::cout << "Entrez votre nom : ";
    std::cin >> b;
    salut(b);
    std::string d;
    std::cout << "Entrez votre prenom : ";
    std::cin >> d;
    salut(d);
    


    
    return 0;
    

}
