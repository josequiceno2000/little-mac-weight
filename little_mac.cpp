#include <iostream>
#include <string>

int main() {
  
  // Initialize standard weight variable WORKS
  double earth_weight;

  // Ask for weight WORKS
  std::cout << "Hey Little Mac! What's your weight on earth? ";
  std::cin >> earth_weight;

  // Ask what number planet he wants to fight on WORKS
  int planet_number;
  std::cout << "\nPerfect. What planet we fightin' on? ";
  std::cin >> planet_number;

  // Use switch for planets
  double planet_weight;
  std::string planet_name;
  switch (planet_number) {
    case 1:
      planet_name = "Mercury";
      planet_weight = earth_weight * 0.38;
      break;
    case 2:
      planet_name = "Venus";
      planet_weight = earth_weight * 0.91;
      break;
    case 3:
      planet_name = "Mars";
      planet_weight = earth_weight * 0.38;
      break;
    case 4:
      planet_name = "Jupiter";
      planet_weight = earth_weight * 2.34;
      break;
    case 5:
      planet_name = "Saturn";
      planet_weight = earth_weight * 1.06;
      break;
    case 6:
      planet_name = "Uranus";
      planet_weight = earth_weight * 0.92;
      break;
    case 7:
      planet_name = "Neptune";
      planet_weight = earth_weight * 1.19;
      break;
    default:
      break;
  }
  
  if (planet_number <= 7 && planet_number >= 1) {

    std::cout << "\nYour weight on " << planet_name << " is " << planet_weight << "\n"; 

  }
  else {

    std::cout << "\nThat's not a planet, and you know it!\n";

  }
  
  
  
  
  
  
  
  
  
  
  
}