#ifndef UNTITLED2_LISTOFPRODUCTS_H
#define UNTITLED2_LISTOFPRODUCTS_H

#include <vector>

#include "Product.h"

using namespace std;

class ListOfProducts {
private:
    vector<Product*>* _products;

public:
    ListOfProducts() {
        _products = new vector<Product*>();
    }

    void Add(Product* product) {
        for (auto prod : *_products) {
            if (prod->GetId() == product->GetId()) return;
        }

        _products->push_back(product);
    }

    void Delete(Product* product) {
        for (auto i = _products->begin(); i < _products->end(); ++i) {
            if ((*i)->GetId() == product->GetId()) {
                _products->erase(i);
                return;
            }
        }
    }

    Product* FindById(int id) {
        for (auto product : *_products) {
            if (product->GetId() == id) {
                return product;
            }
        }

        return nullptr;
    }

    Product* FindByTitle(string title) {
        for (auto product : *_products) {
            if (product->GetTitle() == title) {
                return product;
            }
        }

        return nullptr;
    }

    vector<Product*> GetAll() {
        return *_products;
    }

    void Update(Product* product) {
        for (auto prod : *_products) {
            if (prod->GetId() == product->GetId()) {
                prod = product;
            }
        }
    }
};

#endif //UNTITLED2_LISTOFPRODUCTS_H

// CRUD
// Create
// Read
// Update
// Delete