#include <iostream>

void valor_u(float x);

int main(){
 
  float x = 0;
  float delta_x = 0.1;
  float delta_t = 0.01;
  float T = 0.5;
  float N_x = 2.0/delta_x;
  float N_t = 0.5/delta_t;
  double * u = new double[float N_x];

  
   
  }
}

void valor_u(double *u){
  float x = 0;
  for(int i=0; i<N_x ; i++){ 
  if((x>=0) && (x<=0.75)){
    u[i] = 0.0;
    x += delta_x
  }

  if((x>1.25) && (x<=2.0)){
    u[i] = 0.0;
  }
  if((x>0.75) && (x<=1.25)){
    u[i] = 1.0;
  }
  }
    return u;
}
  
