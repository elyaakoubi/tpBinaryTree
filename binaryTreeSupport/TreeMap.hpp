#pragma once
#include "Node.hpp"

class TreeMap {
	
private:
// Racine de l'arbre
    Node* root;
	// Fonction r�cursive pour ins�rer une valeur dans l'arbre
    Node* putData(Node* node, int value);
    // Fonction r�cursive pour effectuer un parcours en ordre
    void infixDisplay(Node* node) ;
    // Fonction r�cursive pour lib�rer la m�moire occup�e par l'arbre
    void destroy(Node* node) ;
    
    Node* findData(Node* node, int value);
    
public:
 
   TreeMap();
  
   ~TreeMap() ;
   
   void put(int) ;
   
   void infixDisplay() ;
   
   Node* find(int);
   
     
};

