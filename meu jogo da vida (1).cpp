//http://legal.icmc.usp.br/lib/exe/fetch.php?media=slides:vida.pdf
#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;


void replicar (int dados[5][5])
{

	int k,l,i,j,cont=0;
	 int aux;
	for( i=0;i<5;i++)
	{
		for( j=0;j<5;j++)
		{
			dados[i][j]=0;
		}
	}
	
	for(i=0;i<5;i++)
		
		{
          for(j=0;j<5;j++)
		  {
		  	system("cls||clear");
		  	 cout<<"              JOGO DA VIDA                   "<<endl;
	         cout<<"REGRAS:\n\n * Celula com menos de 2 vizinhos__Morre\n * Celula com 2 ou 3 vizinhos______Vive\n * Celula com + de 3 vizinhos______Morre\n * Celula com 3 vizinhos___________Nasce "<<endl;
	         cout<<"Legenda:\n\n VIVO__1 \n MORTO__0\n "<<endl;  
	          if(cont==0)
			 {
			 	cout<<"\tMatriz inicial:\n\n";
			 	  for(k=0;k<5;k++)
			 {
			 	
			 	
			 	for(l=0;l<5;l++)
				 { 
				 	
					 	
					 	cout<<"\t"<<" "<<dados[k][l]<<" "; 
                  }
      	           
				 
				 cout<<endl;
			 }
			 }
			 else{
				 cout<<endl;
				  for(k=0;k<5;k++)
			 {
			 	
			 	
			 	for(l=0;l<5;l++)
				 { 
				 	
					 	
					 	cout<<"\t"<<" "<<dados[k][l]<<" "; 
                  }
      	           
				 
				 cout<<endl;
			 }
				 
			 }
	         cout<<"\nDigite  o valor da linha "<<i+1<<" coluna "<<j+1<<endl;
	         cin>>aux;
	         system("cls||clear");
	        
	       
	         while(aux!=0 && aux!=1)
			 {
			 	cout<<"ERRO,VALOR DIGITADO E' DIFERENTE DE 0 E 1 "<<endl;
			 	cout<<"\nDigite  novamente o valor  da linha "<<i+1<<" coluna "<<j+1<<endl;
	            cin>>aux;
	            system("cls||clear");
			 }
			 cont ++;
			 
			 dados[i][j]=aux;
		  }
		}
	system("cls||clear");

}

void imprime_replica(int r[5][5])
{
	system("clear||cls");
	cout<<"\n A Matrisz digitada foi: "<<endl;
      for(int k=0;k<5;k++)
			 {
			 	
			 	
			 	for(int l=0;l<5;l++)
				 { 
				 	
					 	
					 	cout<<r[k][l]; 
                  }
      	           
				 
				 cout<<endl;

			 }	
}

void copia(int re[5][5],int mund[22][80])
{
	int i,j,k,l;
	for(i=0;i<22;i++)
	{
		for(j=0;j<80;j++)
		{
			for(k=0;k<5;k++)
			{
				for(l=0;l<5;l++)
				{
					
					mund[i+k][j+l]=re[k][l];
				}
			}
			j=j+4;
		}
		i=i+4;
	}
}
void imprime_mundo(int mundo[22][80])
{
	int i,j;
	system("clear||cls");
	cout<<"A matriz gerada foi:"<<endl;
	for(i=0;i<22;i++)
	{
		for(j=0;j<80;j++)
		{
			cout<<mundo[i][j]; 
		}
		
		cout<<endl;
	}
}

void verifica(char v[22][80], int mundo[22][80])
{
	int i,j,vizinhos;
	int aux[22][80];
	for(i=0;i<22;i++)
	{
		for(j=0;j<80;j++)
		{
			aux[i][j]=mundo[i][j];
		}
	}

	for(i=0;i<22;i++)
	{
		for(j=0;j<80;j++)
		{
			vizinhos=0;
			if(i==0&&j==0)// posiçao A
			{
				
				if(aux[i][j+1]==1)
				{
					vizinhos++;
				}
				if(aux[i+1][j]==1)
				{
					vizinhos++;
					
				}
				if(aux[i+1][j+1]==1)
				{
					vizinhos++;
				}
			}
			if(i==0 && (j>0 && j<80))//posiçao B 
			{
               if(aux[i][j-1]==1)
				{
					vizinhos++;
				}
				if(aux[i][j+1]==1)
				{
					vizinhos++;
				}
				if(aux[i+1][j-1]==1)
				{
					vizinhos++;
				}
				
				if(aux[i+1][j]==1)
				{
					vizinhos++;
				}
				if(aux[i+1][j+1]==1)
				{
					vizinhos++;
				}
			}
			if(i==0 && j==80)//Posição C
			{
				if(aux[i][j-1]==1)
				{
					vizinhos++;
				}
				cout<<mundo[i][j];
                if(aux[i+1][j]==1)
				{
					vizinhos++;
				}
			
					if(aux[i+1][j-1]==1)
				{
					vizinhos++;
				}
			
			}
			if(i!=0 && i<22 && j==0)//posição D
			{
                if(aux[i-1][j]==1)
				{
					vizinhos++;
				}
				if(aux[i-1][j+1]==1)
				{
					vizinhos++;
				}
				if(aux[i][j+1]==1)
				{
					vizinhos++;
				}
                if(aux[i+1][j]==1)
				{
					vizinhos++;
				}
                if(aux[i+1][j+1]==1)
				{
					vizinhos++;
				}
               
			}
			if((i!=0 && j!=80) && (i!=22 &&j!=0) )//posição E
			{
               if(aux[i-1][j-1]==1)
				{
					vizinhos++;
				}
				if(aux[i-1][j]==1)
				{
					vizinhos++;
				}
				if(aux[i-1][j+1]==1)
				{
					vizinhos++;
				}
                if(aux[i][j+1]==1)
				{
					vizinhos++;
				}
                if(aux[i][j-1]==1)
				{
					vizinhos++;
				}
                if(aux[i+1][j]==1)
				{
					vizinhos++;
				}
				if(aux[i+1][j+1]==1)
				{
					vizinhos++;
				}
				if(aux[i+1][j-1]==1)
				{
					vizinhos++;
				}

			}
			if(i!=0 && i<22&&j==80)//Posição F
			{
				if(aux[i-1][j]==1)
				{
					vizinhos++;
				}
				if(aux[i-1][j-1]==1)
				{
					vizinhos++;
				}
				if(aux[i][j-1]==1)
				{
					vizinhos++;
				}
			
				if(aux[i+1][j]==1)
				{
					vizinhos++;
				}
				if(aux[i+1][j-1]==1)
				{
					vizinhos++;
				}


			}
			if(i==22 &&j==0)//posição G
			{
               
				if(aux[i-1][j]==1)
				{
					vizinhos++;
				}
				if(aux[i-1][j+1]==1)
				{
					vizinhos++;
				}
                if(aux[i][j+1]==1)
				{
					vizinhos++;
				}



			}
			if(i==22 && j!=0 &&j<80)//posição H 
			{
				
				if(aux[i-1][j]==1)
				{
					vizinhos++;
				}
					if(aux[i-1][j-1]==1)
				{
					vizinhos++;
				}
					if(aux[i-1][j+1]==1)
				{
					vizinhos++;
				}
				if(aux[i][j+1]==1)
				{
					vizinhos++;
				}
				if(aux[i][j-1]==1)
				{
					vizinhos++;
				}

			}
			if(i==22 && j==80)//posição I 
			{
				
					if(aux[i-1][j]==1)
				{
					vizinhos++;
				}
					if(aux[i-1][j-1]==1)
				{
					vizinhos++;
				}
					if(aux[i][j-1]==1)
				{
					vizinhos++;
				}
				
			}
		
        if((vizinhos<2) && (mundo[i][j]==1))
		{
			
			mundo[i][j]=0;
		}
		if(vizinhos>3 && mundo[i][j]==1)
		{
			mundo[i][j]=0;
		}
	
		 
		 if(vizinhos==3)
		 {
		 	mundo[i][j]=1;
		 }
		
				
		}
	  	
	}
	
	for(i=0;i<22;i++)
	{
		for(j=0;j<80;j++)
		{
			if(mundo[i][j]==0)
			{
				
				v[i][j]=' ';
			}
			if(mundo[i][j]==1)
			{
				
				v[i][j]='*';
			}
		
		}
	}

	

}

void imprime_jogo(char v[22][80])
{
	int i,j;
	
	for(i=0;i<22;i++)
	{
		
		for(j=0;j<80;j++)
		{
			cout<<v[i][j];
			
		}
	
	}
}



int main()
{
	int mundo[22][80];//Salva a matriz  que será lida 
	char vida[22][80];
	int replica[5][5];//matriz na qual o usuario digitara a sequencia que será replicada na matriz mundo
	int ciclos;//variável que irá verificar o numero de ciclos que serão gerados
	int i,j;
	char continua;
	for(i=0;i<22;i++)
	{
		for(j=0;j<80;j++)
		{
			mundo[i][j]='0';
		}
	}
	replicar(replica);
	imprime_replica(replica);
	cout<<"\n Deseja digitar uma nova matriz?(s ou n)"<<endl;
	cin>>continua;
	while(continua!='n' && continua!='N' && continua!='s' && continua!='S')
	{
		cout<<"ERRO!!RESPOSTA DIGITADA NAO E' VALIDA \n Deseja digitar uma nova matriz?(s ou n)"<<endl;
		cin>>continua;
	}
	while(continua=='s'||continua=='S')
	{
      replicar(replica);
      imprime_replica(replica);
	  cout<<"\n Deseja digitar uma nova matriz?(s ou n)"<<endl;
      cin>>continua;
	}
	if(continua=='n'||continua=='N')
	{
		copia(replica,mundo);
		imprime_mundo(mundo);
		
		system("pause");
		
	}
	system("clear||cls");
	verifica(vida,mundo);
	imprime_jogo(vida);
	ciclos=1;
	cout<<"\n\n* = Vivas\nEspaco=Mortas"<<endl;
	cout<<"Ciclos Gerados: "<<ciclos<<endl;
	cout<<"\n Deseja gerar um novo ciclo?(s ou n) "<<endl;
		cin>>continua;
	while(continua!='n' && continua!='N' && continua!='s' && continua!='S')
	{
		cout<<"ERRO!!RESPOSTA DIGITADA NAO E' VALIDA \n Deseja digitar uma nova matriz?(s ou n)"<<endl;
		cin>>continua;
	}
	while(continua=='s'||continua=='S')
	{
      system("clear||cls");
      verifica(vida,mundo);
      imprime_jogo(vida);
      ciclos++;
      cout<<"\n\n* = Vivas\nEspaco=Mortas"<<endl;
      cout<<"Ciclos Gerados: "<<ciclos<<endl;
      cout<<"\n Deseja gerar um novo ciclo?(s ou n) "<<endl;
      cin>>continua;
	}
	
	
	
 
    
}
           