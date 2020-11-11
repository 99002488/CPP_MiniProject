all: all.out
all.out : medical.o sickTreat.o medicalDb.o medical-test.o medicalDb-test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
medicalDb-test.o: medicalDb-test.cpp medical.h sickTreat.h medicalDb.h
	g++ $< -c
medical-test.o: medical-test.cpp medical.h sickTreat.h
	g++ $< -c
medicalDb.o: medicalDb.cpp medicalDb.h sickTreat.h medical.h
	g++ $< -c
sickTreat.o: sickTreat.cpp sickTreat.h medical.h
	g++ $< -c
medical.o: medical.cpp medical.h
	g++ $< -c
clean:
	rm -rf *.o *.out
