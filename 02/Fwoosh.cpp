#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void)
    :_name("fwoosh"), _effects("fwooshed") { 
}

Fwoosh::Fwoosh(const Fwoosh& fwoosh){
    *this = fwoosh;
}

Fwoosh& Fwoosh::operator=(const Fwoosh& fwoosh) {
    return *this;
}

Fwoosh::~Fwoosh(void){
}

ASpell* Fwoosh::clone(void) const {
    return (new Fwoosh());
}
