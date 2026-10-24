NAME = sed

#ingredients 

SRCS =	main.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -Wpedantic -MP -MMD
ODIR = obj/
OBJS = $(SRCS:%.cpp=$(ODIR)%.o)
DEPS = $(OBJS:.o=.d)

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

-include $(DEPS)

clean:
		@$(RM) $(OBJS)
		@rm -rf $(ODIR)

fclean:	clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
