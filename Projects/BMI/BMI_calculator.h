#include <cmath>
#include <iomanip> // For setprecision()
#include <iostream>

using namespace std;

class BMI {
  float bmi, weight, height;

public:
  BMI() { measurement(); }
  void kg_m(void);
  void lb_inch(void);
  void measurement(void);
  void bmi_ind(float bmi);
  void try_again(void);
};

void BMI::kg_m(void) {
  cout << "Enter weight in kg: ";
  cin >> weight;
  cout << "Enter height in meter: ";
  cin >> height;
  bmi = weight / pow(height, 2);
  bmi_ind(bmi);
}

void BMI::lb_inch(void) {
  cout << "Enter weight in lbs: ";
  cin >> weight;
  cout << "Enter height in inch: ";
  cin >> height;
  bmi = (weight / pow(height, 2)) * 703;
  bmi_ind(bmi);
}

void BMI::bmi_ind(float bmi) {
  string arr[] = {"Under Weight", "Normal Weight", "Over Weight", "Obesity"};

  cout << fixed << setprecision(1); // For 1 decimal place
  cout << "BMI Result: " << bmi << " ";
  if (bmi < 18.5) {
    cout << arr[0] << endl;
  } else if (bmi >= 18.5 and bmi < 25) {
    cout << arr[1] << endl;
  } else if (bmi >= 25 and bmi < 30) {
    cout << arr[2] << endl;
  } else if (bmi >= 30) {
    cout << arr[3] << endl;
  }
}

void BMI::measurement(void) {
  cout << "Enter" << endl
       << "(a). Kilograms and meters" << endl
       << "(b). Pounds and inches" << endl;
  cout << "a or b ? ";

  char measure;
  cin >> measure;

  (measure == 'a') ? kg_m() : (measure == 'b') ? lb_inch() : try_again();
}

void BMI::try_again(void) {
  cout << "Wrong Input ! Select again" << endl;
  measurement();
}