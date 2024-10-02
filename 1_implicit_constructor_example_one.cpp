#include <iostream>

using namespace std;

class JellyFilling
{
public:
  void flavor()
  {
    cout << "I am raspberry flavored! Yum yum yum!" << endl;
  }
};

class Doughnut
{
public:
  JellyFilling jelly_filling;
  Doughnut(JellyFilling jelly_filling)
  {
    this->jelly_filling = jelly_filling;
  }
};

void tell_me_your_flavor(Doughnut doughnut)
{
  cout << "I am a filled doughnut!" << endl;
  doughnut.jelly_filling.flavor();
}

int main()
{
  cout << "This works as we expect" << endl;
  JellyFilling filling;
  Doughnut *doughnut = new Doughnut(filling);
  tell_me_your_flavor(*doughnut);
  cout << endl;

  cout << "But wait... why the heck does this work???" << endl;
  tell_me_your_flavor(filling);
}
