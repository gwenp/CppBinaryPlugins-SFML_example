example: main.cpp libCircle.so libSquare.so Shape.hpp
	g++ -o example main.cpp -ldl -lsfml-graphics -lsfml-window -lsfml-system

libCircle.so: libCircle.cpp libCircle.hpp Shape.hpp
	g++ -shared -o libCircle.so libCircle.cpp Shape.cpp -lsfml-graphics -lsfml-window -lsfml-system

libSquare.so: libSquare.cpp libSquare.hpp Shape.hpp
	g++ -shared -o libSquare.so libSquare.cpp Shape.cpp -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f example libCircle.so libSquare.so
