#include <iostream>

using namespace std;

class JellyFilling
{
public:
  void flavor()
  {
    cout << "I am delicious! Yum yum yum!" << endl;
  }
};

class Doughnut
{
public:
  JellyFilling jelly_filling;
};

class SweetCoating
{
public:
  Doughnut doughnut;
};

class Sprinkles
{
public:
  SweetCoating coating;
};

void tell_me_your_flavor(Sprinkles sprinkles)
{
  cout << "I am a filled doughnut!" << endl;

  // This is a major violation of the Law of Demeter...
  // But we will ignore that for now!
  sprinkles.coating.doughnut.jelly_filling.flavor();
}

int main()
{
  cout << "But wait... some of these work but others don't???" << endl;
  JellyFilling jelly_filling;
  Doughnut doughnut;
  SweetCoating sweet_coating;
  Sprinkles sprinkles;

  // tell_me_your_flavor(jelly_filling);
  // tell_me_your_flavor(doughnut);
  // tell_me_your_flavor(sweet_coating);
  // tell_me_your_flavor(sprinkles);
}
