array_sum:array_sum.o

	g++ -o array_sum array_sum.o

array_sum.o:array_sum.cpp

	g++ -c array_sum.cpp

clean:

	rm array_sum.o

