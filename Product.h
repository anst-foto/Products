#ifndef UNTITLED2_PRODUCT_H
#define UNTITLED2_PRODUCT_H

#include <string>

using namespace std;

class Product {
private:
    int _id;
    string _title;
    double _price;
public:
    Product(string title, double price) {
        _title = title;
        _price = price;

        _id = 1 + rand() % 10000;
    }

    int GetId() {
        return _id;
    }

    string GetTitle() {
        return _title;
    }

    double GetPrice() {
        return _price;
    }
};


#endif //UNTITLED2_PRODUCT_H
