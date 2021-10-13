# Aaron Slettebak
# CSIS 252


prog4:		main.o horsepowerTWatts.o
			g++ -o prog main.o

main.o:		main.cpp horsepowerTWatts.h
			g++ -c main.cpp

horsepowerTWatts.o:	horsepowerTWatts.cpp horsepowerTWatts.h
				g++ -c horsepowerTWatts.cpp

clean:		
		rm -rf *.o prog4
