import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt('datos1.txt')
plt.figure()
plt.plot(datos[:,0], datos[:,1], label ='valor inicial de u')
plt.legend()
plt.title('U = U(x, t=0)')
plt.savefig('t_cero.pdf')