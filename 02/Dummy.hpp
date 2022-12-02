#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget {

    public:
        Dummy(void);
        Dummy(const Dummy& dummy);
        Dummy &operator=(const Dummy& dummy);
        virtual ~Dummy(void);

        virtual ATarget* clone(void) const;

};

#endif