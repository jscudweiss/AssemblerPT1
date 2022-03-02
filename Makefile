assembler: assembler.c command.c IO.C cleaner.c command.h IO.h cleaner.h
	gcc -o assembler assembler.c command.c IO.C cleaner.c command.h IO.h cleaner.h
