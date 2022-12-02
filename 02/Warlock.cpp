#include "Warlock.hpp"

Warlock::Warlock(void)
    :_name(""), _title("") { 
        std::cout << this->_name << ": This looks like another boring day." << std::endl;  
}

Warlock::Warlock(std::string name, std::string title)
    :_name(name), _title(title){
    std::cout << this->_name << ": This looks like another boring day." << std::endl;  
}
Warlock::Warlock(const Warlock& warlock){
    *this = warlock;
}

Warlock& Warlock::operator=(const Warlock& warlock){
    this->_name = warlock.getName();
    this->_title = warlock.getTitle();
    return *this;
}

Warlock::~Warlock(void){
    std::cout << this->_name << ": My job here is done!" << std::endl;
}
    
std::string Warlock::getName(void)const{
    return this->_name;
}

std::string Warlock::getTitle(void)const{
    return this->_title;
}

void Warlock::setTitle(const std::string& title){
    this->_title = title;
}

void Warlock::introduce(void)const{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *aspell) {
    // for (int i = 0; i < _spells.length(); i++)
    //     if (_spells[i] == aspell)
    //         return ;
    
}

void Warlock::forgetSpell(std::string name) {

}

void Warlock::launcSpell(std::string name, ATarget& atarget) {

}