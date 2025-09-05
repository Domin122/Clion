#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product {
private:
    string name;
public:
    Product(const string& ) : name(name) {}

    string getName() const {
        return name;
    }
};

class Cart {
private:
    vector<Product> products;
public:
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    void listProducts() const {
        for (const auto& product : products) {
            cout << product.getName() << endl;
        }
    }
};

int main() {
    Cart koszyk;
    koszyk.addProduct(Product("Product 1"));
    koszyk.addProduct(Product("Product 2"));
    koszyk.addProduct(Product("Product 3"));

    koszyk.listProducts();

    return 0;
}