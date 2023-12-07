# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 19:28:45 by hemottu           #+#    #+#              #
#    Updated: 2023/12/05 17:20:21 by hemottu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	animal
CXX			= 	c++
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
				Cat.cpp 

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

#paths
SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

#all rule
all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)  ____ ____  ____   ___  _  _                ___   ___  \n$(RESET)"
	@printf "$(GREEN) / ___|  _ \|  _ \ / _ \| || |     _____  __/ _ \ / _ \ \n$(RESET)"
	@printf "$(GREEN)| |   | |_) | |_) | | | | || |_   / _ \ \/ / | | | | | |\n$(RESET)"
	@printf "$(GREEN)| |___|  __/|  __/| |_| |__   _| |  __/>  <| |_| | |_| |\n$(RESET)"
	@printf "$(GREEN) \____|_|   |_|    \___/   |_|    \___/_/\_\\____/ \___/ \n$(RESET)"
	@printf "\n"

#compile the executable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

#compile objects
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -I $(INC_DIR) -o $@ -c $<

#clean rule
clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	fi;

#fclean rule
fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	fi;
	
#re rule
re: fclean all

#phony
.PHONY: all clean fclean re