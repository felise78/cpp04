# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: felise <felise@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 12:01:45 by felise            #+#    #+#              #
#    Updated: 2023/12/01 12:08:31 by felise           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# color codes
RESET		=	\033[0m
GREEN		=	\033[32m

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp
		
NAME = fragtrap
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)  ____ ____  ____   ___  _  _                ___   ___  \n$(RESET)"
	@printf "$(GREEN) / ___|  _ \|  _ \ / _ \| || |     _____  __/ _ \ / _ \ \n$(RESET)"
	@printf "$(GREEN)| |   | |_) | |_) | | | | || |_   / _ \ \/ / | | | | | |\n$(RESET)"
	@printf "$(GREEN)| |___|  __/|  __/| |_| |__   _| |  __/>  <| |_| | |_| |\n$(RESET)"
	@printf "$(GREEN) \____|_|   |_|    \___/   |_|    \___/_/\_\\____/ \___/ \n$(RESET)"
	@printf "\n"

$(NAME): $(OBJS)
	c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

%.o : %.cpp
	c++ $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean re all





