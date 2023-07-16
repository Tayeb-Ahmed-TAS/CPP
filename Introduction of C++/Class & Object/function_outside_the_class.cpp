#include <conio.h>
#include <iostream>

using namespace std;

class cars {

public:
  string brand, color;

  long long int price;

  cars(string b, string c, long long int p) {

    brand = b;

    color = c;

    price = p;
  }

  void show();
};

void cars::show() {

  cout << "Brand: " << brand << endl
       << "Color: " << color << endl
       << "Price: " << price << endl
       << endl;
}

int main() {

  cars car1("Toyota", "Black", 1000000), car2("Honda", "White", 2000000);

  car1.show(), car2.show();

  getch();

  return 0;
}