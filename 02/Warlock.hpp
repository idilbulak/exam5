#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock {

    public:
        Warlock(void);
        Warlock(std::string name, std::string title);
        Warlock(const Warlock& warlock);
        Warlock &operator=(const Warlock& warlock);
        ~Warlock(void);
    
        std::string getName(void)const;
        std::string getTitle(void)const;

        void setTitle(const std::string& title);
        void introduce(void)const;
        void learnSpell(ASpell *aspell);
        void forgetSpell(std::string name);
        void launcSpell(std::string name, ATarget& atarget);

    private:
        std::string _name;
        std::string _title;
        // ????? _spells;
};

#endif