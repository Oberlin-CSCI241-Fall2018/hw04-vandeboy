TARGETS = count encode_bits decode_bits tobinary todecimal tooctal tohex

all: $(TARGETS)

count: count.o
	gccx -o count count.o

count.o: count.c
	gccx -c count.c

encode_bits: encode_bits.o bits.o
	gccx -o encode_bits encode_bits.o bits.o

decode_bits: decode_bits.o bits.o
	gccx -o decode_bits decode_bits.o bits.o

encode_bits.o: encode_bits.c bits.h
	gccx -c encode_bits.c

decode_bits.o: decode_bits.c bits.h
	gccx -c decode_bits.c

bits.o: bits.c bits.h
	gccx -c bits.c

tobinary: tobinary.o getnum.o
	gccx -o tobinary tobinary.o getnum.o

todecimal: todecimal.o getnum.o
	gccx -o todecimal todecimal.o getnum.o

tooctal: tooctal.o getnum.o
	gccx -o tooctal tooctal.o getnum.o

tohex: tohex.o getnum.o
	gccx -o tohex tohex.o getnum.o

tohex.o: tohex.c getnum.h
	gccx -c tohex.c

tooctal.o: tooctal.c getnum.h
	gccx -c tooctal.c

todecimal.o: todecimal.c getnum.h
	gccx -c todecimal.c

tobinary.o: tobinary.c getnum.h
	gccx -c tobinary.c

getnum.o: getnum.c getnum.h
	gccx -c getnum.c

clean: 
	rm bits.o decode_bits.o encode_bits.o count.o count encode_bits decode_bits tohex todecimal tobinary tooctal tobinary.o todecimal.o tooctal.o tohex.o getnum.o
