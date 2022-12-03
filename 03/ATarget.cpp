#include "ATarget.hpp"

ATarget::ATarget(void)
    :_type("") { 
}

ATarget::ATarget(std::string type)
    :_type(type){
}
ATarget::ATarget(const ATarget& atarget){
    *this = atarget;
}

ATarget& ATarget::operator=(const ATarget& atarget) {
    this->_type = atarget.getType();
    return *this;
}

ATarget::~ATarget(void){
}
    
std::string ATarget::getType(void)const{
    return this->_type;
}

void ATarget::getHitBySpell( const ASpell& aspell)const {
    std::cout << this->_type << " has been " << aspell.getEffects() << "!" << std::endl;
}
