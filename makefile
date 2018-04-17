final: t_final.pdf
t_final.pdf : datos2.txt grafica2.py
    python grafica2.py
    
datos2.txt : parciales.cpp
    c++ parciales.cpp -o par
    ./par > datos2.txt

inicial: t_cero.pdf    
t_cero.pdf : datos1.txt grafica1.py
    python grafica1.py
    
datos1.txt : parciales_inicial.cpp
    c++ parciales_inicial.cpp -o pi
    ./pi > datos1.txt
