#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget {

    public:
        ATarget(void);
        ATarget(std::string type);
        ATarget(const ATarget& atarget);
        ATarget &operator=(const ATarget& atarget);
        virtual ~ATarget(void);
    
        std::string getType(void)const;

        virtual ATarget* clone(void) const = 0;
        void getHitBySpell( const ASpell& aspell)const;

    private:
        std::string _type;
};

#endif