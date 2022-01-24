#include "Freezer.h"
Freezer::Freezer() :
    GoodBasic{ 0, 1, "noname", "nodescription" } {
    fillProperties(2, 5);
}

Freezer::Freezer(int id):
    GoodBasic{ id, 1, "noname", "nodescription" } {
    fillProperties(2, 5);
}

Freezer::Freezer(int id, int price) :
    GoodBasic{ id, price, "noname", "nodescription" } {
    fillProperties(2, 5);
}

Freezer::Freezer(int id, int price, string name) :
    GoodBasic{ 0, 1, "noname", "nodescription" } {
    fillProperties(2, 5);
}

Freezer::Freezer(int id, int price, string name, string description, int cam) :
    GoodBasic{ id, price, name, description } {
    fillProperties(cam, 5);
}

Freezer::Freezer(int id, int price, string name, string description, int cam, int weight) :
    GoodBasic{ id, price, name, description } {
    fillProperties(cam, weight);
}

Freezer::Freezer(int id, int price, string name, string description, int cam, int weight, string newValue) 
{
    fillProperties(cam, weight, newValue);
}

void Freezer::fillProperties(int cam, int weight)
{
    _cameras = cam;
    _weight = weight;
}

void Freezer::fillProperties(int cam, int weight)
{
    _cameras = cam;
    _weight = weight;
    _newProperty = newVal;
}

int Freezer::getCameras() {
    return _cameras;
}

int Freezer::getWeight() {
    return _weight;
}

void Freezer::setCameras(int cam) {
    _cameras = cam;
}

void Freezer::setWeight(int weight) {
    _weight = weight;
}

void Freezer::printHello() {
    std::cout << "Hello from class!\n";
}

void Freezer::printString(string dataToPrint) {
    std::cout << dataToPrint + "\n";
}

void Freezer::toString() {
    cout << "toString inside FreezeOld: id" << getItemId() << " Price:" << getPrice() << " Name:" << getName() << " Descr:" << getDescription() << " Sections:" << getCameras() << " Weight:" << getWeight() << "\n";
}