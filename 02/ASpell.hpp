#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {

    public:
        ASpell(void);
        ASpell(std::string name, std::string effects);
        ASpell(const ASpell& aspell);
        ASpell &operator=(const ASpell& aspell);
        virtual ~ASpell(void);
    
        std::string getName(void)const;
        std::string getEffects(void)const;

        virtual Aspell* clone(void) const = 0;
        void launch(const ATarget &atarget)const;

    private:
        std::string _name;
        std::string _effects;
};

#endif