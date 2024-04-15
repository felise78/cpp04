# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 19:28:45 by hemottu           #+#    #+#              #
#    Updated: 2024/04/15 16:51:06 by hemottu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	animal
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	inc/

RESET		=	\033[0m
GREEN		=	\033[32m

SRC_FILES	=	main.cpp \
				AAnimal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)  ____ ____  ____   ___  _  _                ___ ____ \n$(RESET)"
	@printf "$(GREEN) / ___|  _ \|  _ \ / _ \| || |     _____  __/ _ \___ \\n$(RESET)"
	@printf "$(GREEN)| |   | |_) | |_) | | | | || |_   / _ \ \/ / | | |__) |\n$(RESET)"
	@printf "$(GREEN)| |___|  __/|  __/| |_| |__   _| |  __/>  <| |_| / __/\n$(RESET)"
	@printf "$(GREEN) \____|_|   |_|    \___/   |_|    \___/_/\_\\____/_____|\n$(RESET)"
	@printf "\n"

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -I $(INC_DIR) -o $@ -c $<
	@printf "$(UP)$(CUT)"
	@printf "$(UP)$(CUT)"

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "$(BLUE)Deleting all objects from /ex02...$(RESET)"; else \
	echo "No objects to remove from /ex02."; \
	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(BLUE)Deleting $(NAME) from /ex02...$(RESET)"; else \
	echo "No Executable to remove from /ex02."; \
	fi;

re: fclean all

.PHONY: all clean fclean re