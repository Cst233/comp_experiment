all:sqrt sqrt.s sqrt.o

sqrt:sqrt.c
	riscv64-unknown-elf-gcc -o sqrt sqrt.c -march=rv64g
sqrt.s:sqrt.c
	riscv64-unknown-elf-gcc -o sqrt.s -S sqrt.c
sqrt.o:sqrt.c
	riscv64-unknown-elf-gcc -o sqrt.o -C sqrt.c -march=rv64g

.PHONY:clean
clean:
	rm -rf sqrt sqrt.o sqrt.s
