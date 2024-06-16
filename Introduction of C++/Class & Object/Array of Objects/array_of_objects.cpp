#include <iostream>

using namespace std;

class ShopItem {
  int id;
  float price;

public:
  void setData(int i, float p) {
    id = i;
    price = p;
  }

  void display() { cout << "Id: " << id << "\t\tPrice: " << price << endl; }
};

int main() {

  int size = 5;

  ShopItem *ptr = new ShopItem[size];

  ShopItem *ptrTemp = ptr;

  for (int i = 0; i < size; i++) {
    int id;
    float price;

    cout << "Enter ID and Price of item " << i + 1 << endl;
    cin >> id >> price;

    ptr->setData(id, price); // ? We can also use (*ptr).setData(id,price);

    ptr++;
  }

  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << "Item " << i + 1 << endl;

    ptrTemp->display(); // ? We can also use (*ptrTemp).display();

    ptrTemp++;
  }

  return 0;
}