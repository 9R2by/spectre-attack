#https://www.c-howto.de/tutorial/makefiles/
#https://wiki.ubuntuusers.de/Makefile/
#write assembly and compile it with nasm ?
#better control instead of C
#on WSL you might need this option: -fcf-protection=none
#differenz call and jump explain

CC = gcc
OBJECTS = main.c
CFLAGS = -O0 -S -fverbose-asm
CFLAGS2 = -O0 -S -fverbose-asm -mindirect-branch=thunk -fcf-protection=none
NAME = indirect_branches
NAME2 = retpoline

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS)

$(NAME2): $(OBJECTS)
	$(CC) $(CFLAGS2) $(OBJECTS)

clean:
	rm *.o $(NAME)
	rm *.s $(NAME)
