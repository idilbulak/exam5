#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed"){
}

Fwoosh::Fwoosh(const Fwoosh& fwoosh) : ASpell(fwoosh) {
}

Fwoosh& Fwoosh::operator=(const Fwoosh& fwoosh) {
    if (this != &fwoosh)
        *this = fwoosh;
    return *this;
}

Fwoosh::~Fwoosh(void){
}

ASpell* Fwoosh::clone(void) const {
    return (new Fwoosh());
}
