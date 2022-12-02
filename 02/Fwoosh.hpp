#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell {

    public:
        Fwoosh(void);
        Fwoosh(const Fwoosh& fwoosh);
        Fwoosh &operator=(const Fwoosh& fwoosh);
        virtual ~Fwoosh(void);

        virtual ASpell* clone(void) const;

};

#endif