#include <iostream>

#include "TreeMap.hpp"

int main(int argc, char** argv) {
	TreeMap tree; 
    // Insertion de quelques valeurs
    tree.put(50);  
    tree.put(30);
    tree.put(70);
    tree.put(20);
    tree.put(40);  
    tree.put(60);
    tree.put(80); 
    // Parcours en ordre
    std::cout << "infix display: ";
    tree.infixDisplay();
    if(tree.find(80)) 
    	cout << "data finded.." << endl;
    		
	
	return 0;   
}
