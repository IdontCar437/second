
#include <iostream>
/*
 int main()
 {
 int seconds,minutes,hours;
      std::cout << "seconds";
      std::cin >> seconds;

       hours = seconds / 3600;
       minutes = (seconds % 3600) / 60;
       seconds = seconds % 60;
       std::cout << hours << ":" << minutes << ":" << seconds;
       return 0;
  }*/

#include <iostream>
/*
int main()
{
    double number;
    int dollars, cents;
    std::cout << "number : ";
    std::cin >> number;
    dollars = number;
    cents = (number - dollars) * 100;
    std::cout << "dollars " << dollars << "\n";
    std::cout << "cents " << cents << "\n";
    return 0;
}*/

#include <iostream>
/*
int main()
{
    int a, weeks, days;
    std::cout << "enter count of days: ";
    std::cin >> a;
    weeks = a / 7;
    days = a % 7;
    std::cout << "weeks " << weeks << "\n";
    std::cout << "days " << days << "\n";
    return 0;
}*/

#include <iostream>
/*
int main()
{
    int seconds, minutes;
    double time, speed,distance;
    std::cout << "enter distance";
    std::cin >> distance;

    std::cout << "enter time";
    std::cin >> time;

    minutes = (int)time; 
    seconds = (int)((time - minutes) * 100 + 0.5); // + 0.5

    int totalSeconds = minutes * 60 + seconds;
    speed = distance / totalSeconds * 3.6;
    speed = (int)(speed * 100 + 0.5) / 100.0;

    std::cout << minutes << " min " << seconds << " sec = " << totalSeconds << " seconds" << "\n";
    std::cout << speed << "\n";
    return 0;
}*/

#include <iostream>
/*
int main()
{
  double percentage,yourmoney, income;
  std::cout << "enter money that you gonna deposit: ";
  std::cin >> yourmoney;
  std::cout << "enter the persentage of your bank: ";
  std::cin >> percentage;

  income = (yourmoney * percentage) / 100 / 12;
  std::cout << "Monthly income: " << income << "\n";
  return 0;
}*/