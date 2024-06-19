#include <iostream>

using namespace std;

class CWH {
protected:
  string title;
  float rating;

public:
  CWH(string title, float rating) {
    this->title = title;
    this->rating = rating;
  }

  virtual void display(void) {}
};

class CWHVideo : public CWH {
  float videoLength;

public:
  CWHVideo(string title, float rating, float videoLength) : CWH(title, rating) {
    this->videoLength = videoLength;
  }

  void display(void) {
    cout << "Video Title : " << title << endl;
    cout << "Video Length : " << videoLength << " minutes" << endl;
    cout << "Rating : " << rating << " out of 5" << endl << endl;
  }
};

class CWHText : public CWH {
  int words;

public:
  CWHText(string title, float rating, int words) : CWH(title, rating) {
    this->words = words;
  }

  void display(void) {
    cout << "Text Title : " << title << endl;
    cout << "Text words : " << words << " words" << endl;
    cout << "Rating : " << rating << " out of 5" << endl << endl;
  }
};

int main() {

  string title;
  float rating, videoLength;
  int words;

  title = "C++ Tutorial";
  rating = 4.5;
  videoLength = 4.56;

  CWHVideo video(title, rating, videoLength);
  //   video.display();

  title = "C++ Text Tutorial";
  rating = 3.69;
  words = 1285;

  CWHText text(title, rating, words);
  //   text.display();

  CWH *tutorials[2]; // Creating an array of pointers of CWH class;

  tutorials[0] = &video;
  tutorials[1] = &text;

  tutorials[0]->display();
  tutorials[1]->display();

  return 0;
}