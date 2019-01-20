NAME		:= ft_retro

# directories
SRC_DIR		:= ./src
OBJ_DIR		:= ./obj

# src / obj files
SRC			:=	AUnit.cpp Background.cpp Bullet.cpp Control.cpp Enemy.cpp Entry.cpp Hero.cpp Map.cpp Model.cpp Star.cpp View.cpp main.cpp Level.cpp

OBJ			:= $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

# compiler
CXX			:= clang++
CXXFLAGS	:= -std=c++98 #-Wall -Wextra -Werror


.PHONY: all clean fclean re

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp
	@$(CXX) -o $@ -c $<

$(NAME): $(OBJ)
	@$(CXX) -o $(NAME) $(OBJ) -lncurses

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory
