import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt('datos2.txt')
plt.figure()
plt.plot(datos[:,0], datos[:,1], label='valor final de u')
plt.legend()
plt.title('U = U(x, T=0.5)')
plt.savefig('t_final.pdf')
