OBJ=test1 test2
all:$(OBJ)

test1:vld_cpp.h test1.cpp
	g++ -o test1 test1.cpp -lvld_cpp
test2:vld_c.h test2.c
	gcc -o test2 test2.c -lvld_c
clean:
	rm $(OBJ)
