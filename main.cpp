#include <iostream>
#include <string>

void salut(std::string &a){

    std::cout << "salut " << a << std::endl;

}

int main(){

    std::string b;
    std::cout << "Entrez votre nom : ";
    std::cin >> b;
    salut(b);
    


    
    return 0;
    

}
