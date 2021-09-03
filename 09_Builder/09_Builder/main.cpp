#include <iostream>

#include <HouseConstructor.h>
#include <StoneHouseBuilder.h>
#include <WoodHouseBuilder.h>

using namespace std;

int main() {
    cout << "09_Builder" << endl;
    HouseConstructor stone_house_constructor(new StoneHouseBuilder);
    stone_house_constructor.ConstructHouse();

    HouseConstructor wood_house_constructor(new WoodHouseBuilder);
    wood_house_constructor.ConstructHouse();
    return 0;
}
