#on WSL you might need this option: -fcf-protection=none

CC = gcc
OBJECTS = main.c
CFLAGS = -O0 -S -fverbose-asm
CFLAGS2 = -O0 -S -fverbose-asm -mindirect-branch=thunk
CFLAGS3 = -O0 -S -fverbose-asm -fno-asynchronous-unwind-tables -fno-dwarf2-cfi-asm
#CFLAGS3 good for showing the code to others
NAME = indirect_branches
NAME2 = retpoline

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS)

$(NAME2): $(OBJECTS)
	$(CC) $(CFLAGS2) $(OBJECTS)

clean:
	rm *.o $(NAME)
	rm *.s $(NAME)
