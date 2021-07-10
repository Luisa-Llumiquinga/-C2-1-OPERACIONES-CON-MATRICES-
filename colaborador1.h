void ingresar(float (*m1)[5], float (*m2)[5])
{
	int filas=5,columnas=5;
  
	cout<<"||-----MATRICES-----||\n";
  
	cout<<"\nIngresar matriz #1\n\n";
	//Rellenando la matriz	
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m1[i][j];
		}
	}	 
	cout<<"\nIngresar matriz #2\n\n";
	//Rellenando la matriz	
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m2[i][j];
		}
	} 
	cout<<"\n MATRIZ #1\n\n";
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			cout<<m1[j][i]<<" ";
		}
		cout<<"\n\n";
	}
	cout<<"\nMATRIZ #2\n\n";
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			cout<<m2[j][i]<<" ";
		}
		cout<<"\n\n";
	}
