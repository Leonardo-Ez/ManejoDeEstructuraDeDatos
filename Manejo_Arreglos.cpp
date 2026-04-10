void OrdenamientoPorIntercambio(int numDatos,int *arr){
  for(int i=0;i<numDatos-1;i++){
    for(int j=i+1;j<numDatos;j++){
      if(arr[i]<arr[j]){//condicion de intercambio
        IntercambiarInt(arr[i],arr[j]);
      }
    }
  }
}

void IntercambiarInt(int dato1,int dato2){
  int aux=dato1;
  dato1=dato2;
  dato2=aux;
}

