#include "TreeMap.hpp"

TreeMap::TreeMap() : root(NULL) {}

TreeMap::~TreeMap() {
        destroy(root);
    }

void TreeMap::infixDisplay(Node* node) {
        if (node != NULL) {
            infixDisplay(node->left);
            std::cout << node->data << " ";
            infixDisplay(node->right);
        }
    }

// Fonction récursive pour libérer la mémoire occupée par l'arbre
void TreeMap::destroy(Node* node) {
        if (node != NULL) {
            destroy(node->left);
            destroy(node->right);
            delete node;
        }
    }

Node* TreeMap::putData(Node* node, int value) {
        // Si l'arbre est vide, créer un nouveau nœud
        if (node == NULL) {
            return new Node(value);
        }
        // Sinon, descendre dans le sous-arbre approprié
        if (value < node->data) {
            node->left = putData(node->left, value);
        } else if (value > node->data) {
            node->right = putData(node->right, value);
        }
        // Retourner le nœud mis à jour
        return node;
    }
    
void TreeMap::put(int value) {
        root = putData(root, value);
    }
    
void TreeMap::infixDisplay() {
        infixDisplay(root);
        std::cout << std::endl;
    }

Node* TreeMap::findData(Node* node, int value) {
        if (node == NULL) {
            return NULL;
        }
        if (value == node->data) {
            return node;
        } else if (value < node->data) {
            return findData(node->left, value);
        } else {
            return findData(node->right, value);
        }
    }

Node* TreeMap::find(int value)  {
        return findData(root, value);
    }
    

