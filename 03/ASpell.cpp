#include "ASpell.hpp"

ASpell::ASpell(void)
    :_name(""), _effects("") { 
}

ASpell::ASpell(std::string name, std::string effects)
    :_name(name), _effects(effects){
}
ASpell::ASpell(const ASpell& ASpell){
    *this = ASpell;
}

ASpell& ASpell::operator=(const ASpell& ASpell) {
    this->_name = ASpell.getName();
    this->_effects = ASpell.getEffects();
    return *this;
}

ASpell::~ASpell(void){
}
    
std::string ASpell::getName(void)const{
    return this->_name;
}

std::string ASpell::getEffects(void)const{
    return this->_effects;
}

void ASpell::launch(const ATarget& atarget)const {
    atarget.getHitBySpell(*this);
}