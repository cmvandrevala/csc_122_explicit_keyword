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

  // The explicit keyword forces me to specify the jelly filling
  explicit Doughnut(JellyFilling jelly_filling)
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

  // This now fails
  tell_me_your_flavor(filling);
}
