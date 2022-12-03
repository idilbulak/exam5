#include "Dummy.hpp"

Dummy::Dummy(void) :ATarget("Target Practice Dummy") { 
}

Dummy::Dummy(const Dummy& dummy){
    *this = dummy;
}

Dummy& Dummy::operator=(const Dummy& dummy) {
    if (this != &dummy)
        *this = dummy;
    return *this;
}

Dummy::~Dummy(void){
}

ATarget* Dummy::clone(void) const {
    return (new Dummy());
}
