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

  int size = 3;

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

  cout << endl << "Item List: " << endl << endl;

  for (int i = 0; i < size; i++) {
    cout << "Item " << i + 1 << endl;

    ptrTemp->display(); // ? We can also use (*ptrTemp).display();

    ptrTemp++;
  }

  return 0;
}

// Output:

/*

Enter ID and Price of item 1
101
150.69
Enter ID and Price of item 2
102
250
Enter ID and Price of item 3
103
675.69

Item List:

Item 1
Id: 101         Price: 150.69
Item 2
Id: 102         Price: 250
Item 3
Id: 103         Price: 675.69

*/