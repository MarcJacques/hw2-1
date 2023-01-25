#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  double temp, velocity;
  const double VELOCITY_FACTOR =  331.3;
  cout << "Enter Celsius temperature: ";
  cin >> temp;
  //calculate velocity
  velocity = VELOCITY_FACTOR + (0.61 * temp);
  
  cout << fixed << showpoint << setprecision(2);
  cout <<"At "<<temp<<" degrees Celsius the velocity of sound is " <<velocity<< " m/s.";


  
  return 0; 
  
}