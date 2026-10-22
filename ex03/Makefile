NAME = weapon

#ingredients 

SRCS =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
ODIR = obj/
OBJS = $(SRCS:%.cpp=$(ODIR)%.o)

#utensils

RM = rm -f
MAKEFLAGS = --no-print-directory
DIR_DUP = mkdir -p $(@D)

#recipe

all: $(NAME)

$(ODIR)%.o: %.cpp
			@$(DIR_DUP)
			@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		 @$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		@$(RM) $(OBJS)
		@rm -rf $(ODIR)

fclean:	clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re