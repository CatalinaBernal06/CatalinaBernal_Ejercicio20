t_cero.pdf: datos.txt grafica1.py
	python grafica1.py

datos.txt : parciales.cpp
	c++ parciales.cpp -o p
	./p > datos.txt
