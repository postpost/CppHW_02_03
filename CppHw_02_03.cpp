#include <iostream>
#include <string>
#include <Windows.h>

struct HomeAddress {
    std::string cityName;
    std::string streetName;
    int houseNum;
    int flatNum;
    int postalCode;
};

void PrintAddress(HomeAddress homeadd) {
    
    std::cout 
        << "Город: " << homeadd.cityName << '\n'
        << "Улица: " << homeadd.streetName << '\n'
        << "Номер дома: " << homeadd.houseNum << '\n'
        << "Номер квартиры: " << homeadd.flatNum << '\n'
        << "Индекс: " << homeadd.postalCode << std::endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HomeAddress* homeadd = new HomeAddress[2];
    homeadd[0] = { "Москва", "Арбат", 12, 8, 123456 };
    homeadd[1] = { "Ижевск", "Пушкина", 59, 143, 953769 };

    for (int i = 0; i < 2; i++) {
        PrintAddress(homeadd[i]);
        std::cout<< std::endl;
    }

    delete[] homeadd;
       
}
