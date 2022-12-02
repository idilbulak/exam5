#include "Dummy.hpp"

Dummy::Dummy(void)
    :_type("Target Practice Dummy") { 
}

Dummy::Dummy(const Dummy& dummy){
    *this = Dummy;
}

Dummy& Dummy::operator=(const Dummy& dummy) {
    this->_type = Dummy.getType();
    return *this;
}

Dummy::~Dummy(void){
}

ATarget* Dummy::clone(void) const {
    return (new Dummy());
}
