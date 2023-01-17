#on WSL you might need this option: -fcf-protection=none
#intel syntax: first target then source

CC = gcc
OBJECTS = main.c
CFLAGS = -O0 -S -masm=intel-fverbose-asm
CFLAGS2 = -O0 -S -masm=intel -fverbose-asm -mindirect-branch=thunk
CFLAGS3 = -O0 -S -masm=intel -fverbose-asm -fno-asynchronous-unwind-tables -fno-dwarf2-cfi-asm -mindirect-branch=thunk
#CFLAGS3 good for showing the code to others
NAME = indirect_branches
NAME2 = retpoline
NAME3 = retpoline_clean

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS)

$(NAME2): $(OBJECTS)
	$(CC) $(CFLAGS2) $(OBJECTS)
	
$(NAME3): $(OBJECTS)
	$(CC) $(CFLAGS3) $(OBJECTS)

clean:
	rm *.o $(NAME)
	rm *.s $(NAME)
