#include <iostream>

using namespace std;

class JellyFilling
{
public:
  string type;
  JellyFilling()
  {
    this->type = "sardine";
  }
  JellyFilling(string type)
  {
    this->type = type;
  }
  void flavor()
  {
    cout << "I am " << this->type << " flavored! Yum yum yum!" << endl;
  }
};

class Doughnut
{
public:
  JellyFilling jelly_filling;
};

void tell_me_your_flavor(Doughnut doughnut)
{
  cout << "I am a filled doughnut!" << endl;
  doughnut.jelly_filling.flavor();
}

int main()
{
  cout << "But wait... why the heck does this work???" << endl;
  Doughnut doughnut;
  tell_me_your_flavor(doughnut);
}
