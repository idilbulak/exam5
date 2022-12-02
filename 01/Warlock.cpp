#include "Warlock.hpp"

Warlock::Warlock(void)
    :_name(""), _title("") { 
        std::cout << _name << ": This looks like another boring day." << std::endl;  
}

Warlock::Warlock(std::string name, std::string title)
    :_name(name), _title(title){
    std::cout << _name << ": This looks like another boring day." << std::endl;  
}
Warlock::Warlock(const Warlock& warlock){
    *this = warlock;
}

Warlock& Warlock::operator=(const Warlock& warlock){
    _name = warlock.getName();
    _title = warlock.getTitle();
    return *this;
}

Warlock::~Warlock(void){
    std::cout << _name << ": My job here is done!" << std::endl;
}
    
std::string Warlock::getName(void)const{
    return _name;
}

std::string Warlock::getTitle(void)const{
    return _title;
}

void Warlock::setTitle(const std::string& title){
    _title = title;
}

void Warlock::introduce(void)const{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
