#include <iostream>
#include "classes.h"

Human::Human(): X(0), Y(0), Name("Unknown") {}
Human::Human(const char* name, double x, double y): X(x), Y(y), Name(name) {}
Human::~Human() {}
void Human::Move(double dx, double dy) {
    X += dx;
    Y += dy;
    std::cout << Name << " moved to point (" << X << ", " << Y << ")" << std::endl;
}
void Human::Info() {
    std::cout << "There is a human named " << Name;
    std::cout << " and his house is located in point (" << X << ", " << Y << ")." << std::endl;
}
void Human::GetStatus() {
    std::cout << "I am a human" << std::endl;
}

Player::Player(): Human(), Sport("Not specified") {}
Player::Player(const char* name, double x, double y, const char* sport): Human(name, x, y), Sport(sport) {}
void Player::Info() {
    std::cout << "There is a human named " << Name;
    std::cout << " and his house is located in point (" << X << ", " << Y << "). ";
    std::cout << Name << " loves playing " << Sport << "." << std::endl;
}
void Player::GetStatus() {
    std::cout << "I am a player" << std::endl;
}
