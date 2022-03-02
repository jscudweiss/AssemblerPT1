assembler: assembler.c command.c Reader.c cleaner.c command.h Reader.h cleaner.h
	gcc -o assembler assembler.c command.c Reader.c cleaner.c command.h Reader.h cleaner.h
