#on WSL you might need this option: -fcf-protection=none

CC = gcc
OBJECTS = main.c
CFLAGS = -O0 -S -fverbose-asm
CFLAGS2 = -O0 -S -fverbose-asm -mindirect-branch=thunk
NAME = indirect_branches
NAME2 = retpoline

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS)

$(NAME2): $(OBJECTS)
	$(CC) $(CFLAGS2) $(OBJECTS)

clean:
	rm *.o $(NAME)
	rm *.s $(NAME)
