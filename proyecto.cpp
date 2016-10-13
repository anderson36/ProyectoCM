/*Autor: Jhon Anderson Sanchez
Funcion del programa: Proyecto Calculadora de matrices
Fecha:13/10/2016*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cmath>
// Definicion de la longitud maxima de las matricez
#define MAX 5
// Definicion de dimenciones de los metodos de ordenamiento
#define d 4
#define largo 100

using namespace std;

//declaracion de matriz
void llenarMatriz(int[MAX][MAX], int LM);
void mostrarMatriz(int[MAX][MAX], int LM);
void transpuestaM(int [MAX][MAX], int [][MAX],int LM);
void mostrarT(int [MAX][MAX],int LM);
int determinante(int matriz[MAX][MAX],int LM );
int cofactor(int matriz[MAX][MAX], int LM, int fila, int columna);
int menudematriz (int matriz[MAX][MAX], int );//funcion en proceso
void verMatriz (int matriz[MAX][MAX], int );//funcion en proceso
void Producto (int Escalar, int matriz [MAX], int );//funcion en preceso
void sumarMatriz(int, int [MAX][MAX], int [MAX][MAX],int [MAX][MAX]);
void restarMatriz(int, int [MAX][MAX], int [MAX][MAX],int [MAX][MAX]);
void MultMatriz(int , int [MAX][MAX],int [MAX][MAX], int [MAX][MAX]);
//funciones de metodos de ordenamiento
void burbuja();
void insercion();
void seleccion();
void shell();
void quicksort(int A[],int izq, int der );
// funcion para los vectores de metodos de ordenamiento
void leeCadena(int cant,int n[]);
void muestraCadena(int cant,int n[]);
// funciones secundarias
void Pausa ();
void limpiarPantalla ();

// Menu y funcion principal de la calculadora
int main(){
    int matriz [MAX][MAX];
    int T[MAX][MAX];
    int opcion;
    int LM;
    int op;
    int Escalar;
    int A[MAX][MAX];
    int B[MAX][MAX];
    int R[MAX][MAX];
    int M[MAX][MAX];

      cout << "Ingresa la longitud de la matriz (maximo " << MAX << "): ";
      cin >> LM;
   while (LM < 0 || LM > MAX) {
      cout << "\nLa lonngitud de la matriz no puede ser mayor que " << MAX << endl;
      cout << "Ingrese nuevamente la longitud  de la matriz: ";
      cin >> LM;
      }
    do{
    cout << "Menu Principal" << endl;
    cout << "Marque una opcion del menu" << endl;
    cout << "1.Llenar matriz" << endl;
    cout << "2.Mostrar matriz" << endl;
    cout << "3.Traspuesta de una Matriz" << endl;
    cout << "4.Determinante matriz" << endl;
    cout << "5.Multiplicar matriz escalar" << endl;
    cout << "6.potencia de matriz" << endl;
    cout << "7.matriz A + matriz B" << endl;
    cout << "8.matriz A - matriz B" << endl;
    cout << "9.matriz A * matriz B" << endl;
    cout << "10.metodos de ordenamiento" << endl;
    cout << "11.Limpieza" << endl;
    cout << "0.Salir" << endl;
    cin >> opcion;

    }while(opcion>11 || opcion<0);
    //llamado a las funciones en switch
    switch(opcion)
    {
        case 0: cout << "Has finalazido el programa " << endl;
                cout << " Muchas gracias"<< endl;
        exit(0);
        case 1: cout << "Llenar matriz" << endl;
            llenarMatriz(matriz,LM);
            mostrarMatriz(matriz,LM);
            Pausa ();

            //Requerimiento para volver al meno o cerrar el programa
            cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
            cout <<endl;
            cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
            cin >> op;
            if (op==1){
                main();
            }
            else{
                cout<< "PROGRAMA FINALIZADO"<<endl;
            }
        break;
        case 2: cout << "Mostrar matriz" << endl;
            llenarMatriz(matriz,LM);
            mostrarMatriz(matriz,LM);
            Pausa ();
                cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                cout <<endl;
                cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                cin >> op;
                if (op==1){
                    main();
                }
                else{
                    cout<< "PROGRAMA FINALIZADO"<<endl;
                }
        break;
        case 3: cout << "has seleccionado la transpuesta de una metriz" << endl;
                llenarMatriz(matriz,LM);
                transpuestaM(matriz, T,LM);
                cout<<"Matriz Original"<<endl;
                mostrarMatriz(matriz,LM);
                cout<<"Matriz Transpuesta"<<endl;
                mostrarT(T,LM);
                Pausa ();
                cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                cout <<endl;
                cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                cin >> op;
                if (op==1){
                    main();
                }
                else{
                    cout<< "PROGRAMA FINALIZADO"<<endl;
                }
        break;
        case 4: cout << "Determinante matriz" << endl;
            llenarMatriz(matriz,LM);
            mostrarMatriz(matriz,LM);
            cout << "La determinante es = "<< determinante(matriz,LM) << endl;
            Pausa ();
            cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
            cout <<endl;
            cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
            cin >> op;
            if (op==1){
                main();
            }
            else{
                cout<< "PROGRAMA FINALIZADO"<<endl;
            }
        break;
        case 5: cout << " escalar de una matriz"<< endl;
                cout << " Estamos Trabajando Para resolver la matriz" << endl;
               /* cout << menudematriz ((int*)matriz,orden);
               llenarMatriz(matriz,orden);
                cout << "Cual es la escarla de la matriz" << endl;
                cin >> Escalar;
                //cout << "Matriz * 2" << endl;
                Producto (Escalar,(int*) matriz, orden);
                verMatriz (matriz, orden);*/

                Pausa ();

                cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                cout <<endl;
                cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                cin >> op;
                    if (op==1){
                        main();
                    }
                    else{
                        cout<< "PROGRAMA FINALIZADO"<<endl;
                    }

        break;
        case 6: cout << " Potencia de una matriz"<< endl;
                cout << " Estamos Trabajando Para resolver la matriz" << endl;
                Pausa ();
                cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                cout <<endl;
                cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                cin >> op;
                if (op==1){
                    main();
                }
                else{
                    cout<< "PROGRAMA FINALIZADO"<<endl;
                }

        break;
        case 7:
                cout << "Sumar Matrices" << endl;
                sumarMatriz(LM,A,B,R);
                Pausa ();
                cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                cout <<endl;
                cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                cin >> op;
                if (op==1){
                    main();
                }
                else{
                    cout<< "PROGRAMA FINALIZADO"<<endl;
                }
        break;
        case 8:
                cout << "Restar Matrices" << endl;
                restarMatriz(LM,A,B,R);
                Pausa ();
                cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                cout <<endl;
                cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                cin >> op;
                if (op==1){
                    main();
                }
                else{
                    cout<< "PROGRAMA FINALIZADO"<<endl;
                }

        break;
        case 9:
                cout << "Multiplicacion de Matrices" << endl;
                MultMatriz(LM, A, B, M);
                Pausa ();
                cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                cout <<endl;
                cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                cin >> op;
                if (op==1){
                    main();
                }
                else{
                    cout<< "PROGRAMA FINALIZADO"<<endl;
                }
        break;

        // Al selecionar la opcion 10 nos lleva a otro menu
        case 10:limpiarPantalla () ;
                cout << "Bienvenido al Menu de Metodos de ordenamiento"<< endl;
                Pausa ();
                int x;
                cout<<"**************Menu*****************";
                cout<<endl;
                cout<<endl;
                cout<<"1.-Ordenamiento por Metodo Burbuja";
                cout<<endl;
                cout<<"2.-Ordenamiento por Metodo Insercion";
                cout<<endl;
                cout<<"3.-Ordenamiento por Metodo Seleccion";
                cout<<endl;
                cout<<"4.-Ordenamiento por Metodo Shell";
                cout << endl;
                cout << "5.-Ordenamiento por Metodo QuickSort";
                cout<<endl;
                cout<<endl;
                cout<<"ELIGE UNA OPCION:";
                cin>>x;
                cout<<endl;
                cout<<endl;


                switch (x){
                    case 1:cout << "HAS SELECIONADO EL METODO BURBUJA" <<endl;
                            burbuja();
                            cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                            cout <<endl;
                            cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                            cin >> op;
                            if (op==1){
                                main();
                            }
                            else{
                                cout<< "PROGRAMA FINALIZADO"<<endl;
                            }
                    break;
                    case 2:cout << "HAS SELECIONADO EL METODO DE INSERCION" <<endl;
                            insercion();
                            cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                            cout <<endl;
                            cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                            cin >> op;
                            if (op==1){
                                main();
                            }
                            else{
                                cout<< "PROGRAMA FINALIZADO"<<endl;
                            }
                    break;
                    case 3:cout << "HAS SELECIONADO EL METODO DE SELECCCION" <<endl;
                            seleccion();
                            cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                            cout <<endl;
                            cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                            cin >> op;
                            if (op==1){
                                main();
                            }
                            else{
                                cout<< "PROGRAMA FINALIZADO"<<endl;
                            }
                    break;
                    case 4:cout << "HAS SELECIONADO EL METODO DE SHELL" <<endl;
                            shell();
                            cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                            cout <<endl;
                            cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                            cin >> op;
                            if (op==1){
                                main();
                            }
                            else{
                                cout<< "PROGRAMA FINALIZADO"<<endl;
                            }
                    break;
                    case 5:cout << "HAS SELECIONADO EL METODO QUICKSORT" <<endl;
                        int A[largo],n;
                            do{
                                cout<<"Cantidad de numeros a ingresar: ";
                                cin>>n;
                                if(n<=0||n>largo)
                                    cout<<"Debe ingresar un valor > a 0 y < a "<<largo<<endl;
                                }
                                while(n<=0||n>largo);
                                    leeCadena(n,A);
                                    quicksort(A,0,n-1);
                                    muestraCadena(n,A);

                        cout << " DESEA VOLVER AL MENU PRINCIPAL"<<endl;
                        cout <<endl;
                        cout <<"1- menu principal     2-CERRAR PROGRAMA"<< endl;
                        cin >> op;
                        if (op==1){
                            main();
                        }
                        else{
                            cout<< "PROGRAMA FINALIZADO"<<endl;
                        }
                break;
                default: cout<<"ERROR EN LA SECCION";
        }
                Pausa ();
                main();
        break;

        case 11:
                cout << "Limpiar" << endl;
                limpiarPantalla () ;
               main ();
        break;
        default:cout << "Opcion no valida" << endl;

    }

    return 0;
}

// determinacion de las funciones
// se realizan todas los operaciones
void llenarMatriz(int matriz[MAX][MAX],int LM){
    for (int j=0;j<LM;j++) {
        for (int i=0;i<LM;i++) {
               matriz [j][i]=rand ()%100;

               cout << matriz [j][i]<< "\t";

    }
    cout << endl;
    }
    cout << endl << "Matriz llenada con exito" << endl << endl << endl;
}
void mostrarMatriz(int matriz[MAX][MAX],int LM){
    for (int j=0;j<LM;j++) {
        for (int i=0;i<LM;i++) {
              cout << matriz [j][i]<< "\t";

    }
    cout << endl << endl;
    }
}

void transpuestaM(int matriz[MAX][MAX], int T[MAX][MAX], int LM){
    for(int j = 0; j < LM; j++){
        for(int i = 0; i < LM; i++){
           T[j][i] = matriz[i][j];
        }
    }
    cout << endl;
}

void mostrarT(int T[MAX][MAX], int LM){
    for(int j = 0; j < LM; j++){
        for(int i = 0; i < LM; i++){
            cout<<T[j][i]<< "\t";
        }
        cout<<endl;
    }
}
int determinante(int matriz[MAX][MAX], int LM)
{
   int det = 0.0;

   if (LM == 1) {
      det = matriz[0][0];
   } else {
      for (int j = 0; j < LM; j++) {
         det = det + matriz[0][j] * cofactor(matriz, LM, 0, j);
      }
   }

   return det;
}


int cofactor(int matriz[MAX][MAX], int LM, int fila, int columna)
{
   int submatriz[MAX][MAX];
   int n = LM - 1;

   int x = 0;
   int y = 0;
   for (int i = 0; i < LM; i++) {
      for (int j = 0; j < LM; j++) {
         if (i != fila && j != columna) {
            submatriz[x][y] = matriz[i][j];
            y++;
            if (y >= n) {
               x++;
               y = 0;
            }
         }
      }
   }

   return pow(-1.0, fila + columna) * determinante(submatriz, n);
}
//funcion en construcion
int menudematriz (int matriz[MAX][MAX], int LM)
{
        int Escalar;
            for (int  j=0;j<LM;j++){
                for (int i=0;i<LM;i++) {
                    matriz [j][i]=rand ()%100;
                }
            }
            cout << "Matriz" << endl;
           // verMatriz (matriz, orden);
            cout << endl;
            cout << "Cual es la escarla de la matriz" << endl;
            cin >> Escalar;
            //cout << "Matriz * 2" << endl;
            Producto (Escalar, (int *) matriz, LM);
            //verMatriz ( matriz, orden);
            cout << endl;
            Pausa ();
}
//Funcion de matriz Escalar en construccion

void verMatriz (int matriz[MAX][MAX], int LM)
{
        for (int i = 0; i < LM; ++i){
            for (int j = 0; j < LM; ++j){
                cout << matriz [LM * i + j] << "\t";
                cout << endl;
            }
        }
}
//Funcion de matriz Escalar en construccion
void Producto (int Escalar, int matriz [MAX], int LM)
{
        int Total = LM * LM;
        for (int i = 0; i < Total; ++i){
            matriz [i] * Escalar ;
        }
}

void sumarMatriz(int LM, int A[MAX][MAX],int B[MAX][MAX], int R[MAX][MAX])
{
        cout<<"llenar matriz A"<<endl;
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
               A[i][j]=rand ()%10;
        }
    }
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
              cout << A[i][j] << "\t";
        }
        cout << endl;
    }
        cout<<"llenar matriz B"<<endl;
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
                 B[i][j]=rand ()%30;
            }
        }
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
               cout <<B[i][j] << "\t";
            }
            cout << endl;
        }
        for( int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
                R[i][j]=A[i][j]+B[i][j];
            }
        }
        cout<<"el resultado de suma es"<<endl;
        for( int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
                cout<<R[i][j]<<" \t";
            }
            cout<<endl;
    }

}
void restarMatriz(int LM, int A[MAX][MAX],int B[MAX][MAX], int R[MAX][MAX])
{
        cout<<"llenar matriz A"<<endl;
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
               A[i][j]=rand ()%10;
        }
    }
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
              cout << A[i][j] << "\t";
        }
        cout << endl;
    }
        cout<<"llenar matriz B"<<endl;
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
                 B[i][j]=rand ()%30;
            }
        }
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
               cout <<B[i][j] << "\t";
            }
            cout << endl;
        }
        for( int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
                R[i][j]=A[i][j]-B[i][j];
            }
        }
        cout<<"el resultado de la resta es = "<<endl;
        for( int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
                cout<<R[i][j]<<" \t";
            }
            cout<<endl;
    }

}
void MultMatriz(int LM, int A[MAX][MAX],int B[MAX][MAX], int M[MAX][MAX])
{
        cout<<"llenar matriz A"<<endl;
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
               A[i][j]=rand ()%10;
            }
        }

        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
              cout << A[i][j] << "\t";
            }
            cout << endl;
        }

        cout<<"llenar matriz B"<<endl;
        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
                 B[i][j]=rand ()%30; //llenar una matriz aleatoreamente de con numero de 0 a 30
            }
        }

        for(int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
               cout <<B[i][j] << "\t";
            }
            cout << endl;
        }

        for( int i=0;i<LM;i++){
            int N=0;
            for(int j=0;j<LM;j++){
                M[i][j]=(A[i][j]*B[j][N]+
                         A[i][j]*B[j][N]+
                         A[i][j]*B[j][N]);
                N+=1;
            }
        }

        cout<<"el resultado de multiplicacion es"<<endl;
        for( int i=0;i<LM;i++){
            for(int j=0;j<LM;j++){
                cout<<M[i][j]<<" \t";
            }
            cout<<endl;
        }
}

//funcion de limpieza de pantalla
void limpiarPantalla ()
{
        system ("cls");
}

//funcion para dar pausa a un proceso
void Pausa ()
{
        cout << "Pulse una tecla para continuar...";
        if (!getch ())
            getch ();
            cout << endl;
}

//Funcion para los metodos de ordenamiento

void burbuja()
{
        char salir;
        int N,Aux,J,opcion;
        int V[10];
        int I;

        cout<<"¿Cuantos numeros va a ingresar al vector?, maximo 10:";
        cin>>N;
        for(I=0; I<N; I++){
            cout<<"Ingrese dato "<<I+1<<":";
            cin>>V[I];
        }
        for (I=0; I<N-1; I++){
            for (J=0; J<(N-1)-I; J++){
                if (V[J]>V[J+1]){
                    Aux=V[J];
                    V[J]=V[J+1];
                    V[J+1]=Aux ;
                }
            }
        }

        cout<<"Los numeros de forma ordenada son:";
        for(I=0; I<N; I++){
            cout<<endl<<V[I];

        }
        getch();
}

void insercion()
{
        int N,Aux,J,SW;
        int V[10];
        int I;


        cout<<"¿Cuantos numeros va a ingresar al vector?, maximo 10:";
        cin>>N;
        for(I=0; I<N; I++){
            cout<<"Ingrese dato "<<I+1<<":";
            cin>>V[I];
        }

        for (I=1; I<N;I++){
            Aux=V[I];
            J=I-1;
            SW=1;
            while (SW&&J>=0){
                if (Aux<V[J]){
                    V[J+1]=V[J];
                    J--;
                }
                else{
                    SW=0;
                }
            }
            V[J+1]=Aux;
        }



        cout<<"Los numeros de forma ordenada son:";
        for(I=0; I<N; I++){
            cout<<endl<<V[I];
        }

        getch();
}

void seleccion()
{
        int J,I,N,K;
        int V[10];
        int Sw;
        int Aux;

        cout<<"¿Cuantos numeros va a ingresar al vector?, maximo 10:";
        cin>>N;
        for(I=0; I<N; I++){
            cout<<"Ingrese dato "<<I+1<<":";
            cin>>V[I];
        }

        for(I=0; I<N-1; I++){
            K=I;
            for (J=I+1; J<N; J++){
                if (V[J]<V[K]){
                    K=J;
                    Aux=V[I];
                    V[I]=V[K];
                    V[K]=Aux;
                }
            }
        }

        cout<<"Los numeros de forma decrecciente son:";
        for(I=N-1; I>=0; I--){
            cout<<endl<<V[I];
        }
        getch();
}

void shell()
{
        int J,I,N,K,INC,TMP;
        int V[10];
        int Sw;
        int Aux;

        cout<<"¿Cuantos numeros va a ingresar al vector?, maximo 10:";
        cin>>N;
        for(I=0; I<N; I++){
            cout<<"Ingrese dato "<<I+1<<":";
            cin>>V[I];
        }

        INC=N/2;
        do{
            for(I=INC; I<N; I++){
                TMP=V[I];
                J=I-INC;
                while ((J>=0)&&(TMP<V[J])){
                    V[J+INC]=V[J];
                    J-=INC;
                }
                V[J+INC]=TMP;
            }
            INC/=2;
        }
        while(INC!=0);

        cout<<"Los numeros de forma decrecciente son:";
        for(I=0; I<N; I++){
            cout<<endl<<V[I];
        }
        getch();
}

void quicksort(int A[],int izq, int der )
{
        int i, j, x , aux;
        i = izq;
        j = der;
        x = A[ (izq + der) /2 ];
            do{
                while( (A[i] < x) && (j <= der)){
                    i++;
                }

                while( (x < A[j]) && (j > izq)){
                    j--;
                }

                if( i <= j ){
                    aux = A[i]; A[i] = A[j]; A[j] = aux;
                    i++;  j--;
                }

            }
            while( i <= j );

            if( izq < j )
                quicksort( A, izq, j );
            if( i < der )
                quicksort( A, i, der );
}

void leeCadena(int cant,int n[])
{
        int i;
        for(i=0;i<cant;i++){
            cout<<"Ingresa numero "<<i+1<<": ";
            cin>>n[i];
        }
}
void muestraCadena(int cant,int n[])
{
        int i;
        for(i=0;i<cant;i++){
            cout<<n[i]<<endl;
        }
}









