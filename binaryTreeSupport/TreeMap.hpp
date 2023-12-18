#pragma once
#include "Node.hpp"

class TreeMap {
	
private:
// Racine de l'arbre
    Node* root;
	// Fonction récursive pour insérer une valeur dans l'arbre
    Node* putData(Node* node, int value);
    // Fonction récursive pour effectuer un parcours en ordre
    void infixDisplay(Node* node) ;
    // Fonction récursive pour libérer la mémoire occupée par l'arbre
    void destroy(Node* node) ;
    
    Node* findData(Node* node, int value);
    
public:
 
   TreeMap();
  
   ~TreeMap() ;
   
   void put(int) ;
   
   void infixDisplay() ;
   
   Node* find(int);
   
     
};

