CPP = g++
CFLAGS = -W -Wall -D list
COEFF = linkedlist

main: main.o polynome.o $(COEFF).o
	$(CPP) $(CFLAGS) -o main $^

main.o: main.cpp polynome.h
	$(CPP) $(CFLAGS) -c main.cpp -o main.o

polynome.o: polynome.cpp polynome.h contener.h $(COEFF).h
	$(CPP) $(CFLAGS) -c polynome.cpp -o polynome.o 
	
$(COEFF).o: $(COEFF).cpp $(COEFF).h contener.h
	$(CPP) $(CFLAGS) -c $(COEFF).cpp -o $(COEFF).o
	
	

	


.PHONY : clean
clean:
	rm -rf *.o main *~
