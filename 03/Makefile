NAME			= warlock

CPP				= c++

FLAGS			= -std=c++98 -Wall -Wextra -Werror

SRC				= Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp \
					main.cpp Fireball.cpp Polymorph.cpp BrickWall.cpp \
					SpellBook.cpp TargetGenerator.cpp

INC				= Warlock.hpp ASpell.hpp ATarget.hpp Fwoosh.hpp Dummy.hpp \
					Fireball.hpp Polymorph.hpp BrickWall.hpp \
					SpellBook.hpp TargetGenerator.hpp

OBJ_DIR			= obj
OBJ				= $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)

$(OBJ_DIR)/%.o : %.cpp 
	@mkdir -p $(dir $@)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ_DIR)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : clean, fclean, all, re