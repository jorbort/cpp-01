NAME = Zombie
CFLAG = -Wall -Werror -Wextra -g -std=c++98 -fsanitize=address
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
CC = c++
OBJS = $(SRC:.cpp=.o)
HEADER = Zombie.hpp

%.o: %.cpp
	$(CC) -I. $(CFLAG) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f *.o

git: fclean
	git add *
	git commit -m "auto commit"
	git push

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean