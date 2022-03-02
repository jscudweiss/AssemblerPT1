assembler: assembler.c IO.c IO.h command.c command.h
	gcc -o assembler assembler.c IO.c IO.h command.c command.h
