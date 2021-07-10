//MODIFICACION HECHA POR FERNANDO LÓPEZ //
void potencia(float (*m1)[5], float(*r)[5])
{
	cout<<"||-----POTENCIA DE LAS MATRICES-----||\n";
	int Nfilas=5,Ncolumnas=5;

	cout<<"Mostrar Matriz Original:\n";
  for (int i=0; i<Nfilas;i++)
	{
      for (int j=0;j<Ncolumnas;j++)
	    {
      		cout<<m1[i][j]<<"  ";
	    }
		  cout<<"\n";
	}
	for(int i=0;i<Nfilas;i++)
	{
	    for(int j=0;j<Ncolumnas;j++)
	    {
			    for(int k=0;k<Nfilas;k++)
			    {
			        r[i][j]=pow(m1[i][j],2);
	    	  }
		  } 
	}		
	cout<<" \n\nMostrar la potencia de la matriz:\n";
	for (int i=0; i<Nfilas;i++)
	{
      for (int j=0;j<Ncolumnas;j++)
		  {
      		cout<<r[i][j]<<" ";
      }
      cout<<"\n";
  }
}
