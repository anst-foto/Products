#include <iostream>

#include "ListOfProducts.h"

using namespace std;

int main() {
    auto* products = new ListOfProducts();

    products->Add(new Product("P1", 1));
    products->Add(new Product("P2", 1));
    products->Add(new Product("P3", 1));

    for (auto p : products->GetAll()) {
        cout << p->GetId() << " -> " << p->GetTitle() << " : " << p->GetPrice() << endl;
    }

    auto product = products->FindByTitle("P1");
    products->Delete(product);
    for (auto p : products->GetAll()) {
        cout << p->GetId() << " -> " << p->GetTitle() << " : " << p->GetPrice() << endl;
    }


    return 0;
}
