# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 19:28:45 by hemottu           #+#    #+#              #
#    Updated: 2023/12/10 17:27:01 by hemottu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	animal
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

# directories
SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	inc/

# controll codes
RESET		=	\033[0m
GREEN		=	\033[32m

#source files
SRC_FILES	=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

#paths
SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

#all rule
all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)  ____ ____  ____   ___  _  _                ___  _\n$(RESET)"
	@printf "$(GREEN) / ___|  _ \|  _ \ / _ \| || |     _____  __/ _ \/ |\n$(RESET)"
	@printf "$(GREEN)| |   | |_) | |_) | | | | || |_   / _ \ \/ / | | | |\n$(RESET)"
	@printf "$(GREEN)| |___|  __/|  __/| |_| |__   _| |  __/>  <| |_| | |\n$(RESET)"
	@printf "$(GREEN) \____|_|   |_|    \___/   |_|    \___/_/\_\\____/|_|\n$(RESET)"
	@printf "\n"

#compile the executable
$(NAME): $(OBJ)
#	@echo "$(YELLOW)Compiling [$(NAME)]...$(RESET)"
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
#	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"

#compile objects
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
#	@echo "$(YELLOW)Compiling [$@]...$(RESET)"
	$(CXX) $(CXXFLAGS) -I $(INC_DIR) -o $@ -c $<
#	@printf "$(UP)$(CUT)"
#	@echo "$(GREEN)Finished [$@]$(RESET)"
#	@printf "$(UP)$(CUT)"

#clean rule
clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	fi;
#	echo "$(BLUE)Deleting all objects from /ex01...$(RESET)"; else \
	echo "No objects to remove from /ex01."; \

#fclean rule
fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	fi;
#	echo "$(BLUE)Deleting $(NAME) from /ex01...$(RESET)"; else \
	echo "No Executable to remove from /ex01."; \

#re rule
re: fclean all

#phony
.PHONY: all clean fclean re