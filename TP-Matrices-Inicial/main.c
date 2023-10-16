#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Variables globales
const int colum  = 5;
const int columChar = 4;
const int cantF = 5;
const int cantFChar = 4;
const int filaString = 20;
const int columnaString = 20;
const int dim = 20;

//Prototipado
void cargarMatriz(int matrix[][colum], int cantF);//Point 1
void mostrarMatrizNum(int matriz[][colum], int cantF);//Point 2
int sumaMatriz(int matrix[][colum], int cantF);//Point 4
float promedioMatricial(int matrix[][colum], int cantF, int total);//Point 5
int encontrarDato(int matrix[][colum], int cantF, int dato);//Point 6
void cargarMatrizChar(char matrix[][colum], int cantF);//Point 7
void mostrarMatrizChar(char matrix[][columChar], int cantFChar);//Point 8
int cargarMatrizString(char matriz[filaString][columnaString]);//Point 9
void mostrarMatrizString(char matrix[filaString][columnaString], int palabras);//Point 9
int encontrarString(char matrix[filaString][columnaString], int cantPalabras, char dato[]); //Point 9

/**______________________________________________________________________________________________________________________________________________________________________*/

int main() {

int matriz[5][colum]; //Filas y Columnas
char matrizChar[4][4];
int resultadoSumaMatriz; //Variable para capturar la suma total de elementos

/**1) Hacer una función que reciba como parámetro una matriz de números
enteros y permita que el usuario ingrese valores al mismo por teclado.
La función debe cargar la matriz por completo*/


//    cargarMatriz(matriz, cantF); //Lamamos a la matriz y a cantFilas!

/**2)Hacer una función que reciba como parámetro una matriz de números
enteros y la muestre por pantalla (en formato matricial)*/

//    cargarMatriz(matriz, cantF);
//    mostrarMatrizNum(matriz, cantF);

/**3) Hacer una función que reciba como parámetro una matriz de números
enteros y que cargue la misma con números aleatorios
(sin intervención del usuario). La función debe cargar la
matriz por completo.*/

//    cargarMatrizRandom(matriz, cantF);
//    printf("\n");
//    printf("Matriz de Orden 5 cargada Aleatoriamente: \n");
//    printf("\n");
//    mostrarMatrizNum(matriz, cantF);

/**4) Hacer una función tipo int que sume el contenido total de una matriz
de números enteros*/

//    int matrixResultado[5][colum];
//
//    cargarMatrizRandom(matriz, cantF);
//    printf("\n");
//    mostrarMatrizNum(matriz, cantF);
//
//    sumaMatriz(matriz, cantF);
//    resultadoSumaMatriz = sumaMatriz(matriz, cantF);
//    printf("Resultado de la Suma del contenido de la matriz: %i", resultadoSumaMatriz);
//    printf("\n");

/**5)Hacer una función tipo float que calcule el promedio de una matriz de números enteros*/
    /*
    float promedioMatriz;

    cargarMatrizRandom(matriz, cantF);
    printf("Matriz cargada aleatoriamente \n");
    printf("\n");
    mostrarMatrizNum(matriz, cantF);
    printf("\n");
    resultadoSumaMatriz = sumaMatriz(matriz, cantF);
    printf("La suma de todos los elementos es: %i \n", resultadoSumaMatriz);
    printf("\n");

    promedioMatriz = promedioMatricial(matriz, cantF, resultadoSumaMatriz);
    printf("El promedio de los elementos: %.2f porciento", promedioMatriz);
    printf("\n"); */

/**6) Hacer una función que determine si un elemento se encuentra dentro de
una matriz de números enteros. La función recibe la matriz y el dato a buscar*/
    /*
    cargarMatrizRandom(matriz, cantF);
    printf("\n");
    printf("Matriz cargada de forma aleatoria \n");
    printf("\n");
    mostrarMatrizNum(matriz, cantF);

    int dato, datoEncontrado;

    printf("Ingrese el numero a encontrar dentro de la matriz: ");
    fflush(stdin);
    scanf("%i", &dato);
    printf("\n");

    datoEncontrado = encontrarDato(matriz, cantF, dato);

    if(datoEncontrado == 1) {
        printf("Dato encontrado con exito");
        printf("\n");
    } else {
        printf("Dato no encontrado");
        printf("\n");
    }
    */
/**7)Hacer una función que cargue un arreglo de palabras (strings). La función debe
retornar cuantas palabras se cargaron. (puede ser a través del parámetro como puntero)*/
    /*
    cargarMatrizChar(matrizChar, cantFChar);

    printf("La cantidad de palabras ingresadas son: %i", cantFChar);
    printf("\n"); */

/**8) Hacer una función que muestre un arreglo de palabras.*/
    /*
    cargarMatrizChar(matrizChar, cantFChar);
    printf("Matriz cargada con Palabras \n");
    printf("\n");

    mostrarMatrizChar(matrizChar, cantFChar);*/

/**9)Hacer una función que determine si un string se encuentra dentro de un arreglo de strings.
La función recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar.
devuelve el índice de la fila en que se encuentra, de lo contrario -1 */
    /*
    int cantPalabras, result;
    char matrizString[filaString][columnaString];
    char palabra[dim];

    printf("Cargando matriz... \n");
    printf("\n");

    cantPalabras = cargarMatrizString(matrizString);

    printf("Mostrando Matriz con Strings \n");
    printf("\n");

    mostrarMatrizString(matrizString, cantPalabras);
    printf("\n");

    printf("Que palabra desea encontrar? ");
    fflush(stdin);
    gets(palabra); //Toma por parametro el arreglo de string, dimensión y el File
    printf("\n");

    printf("Buscando string dentro de la matriz.... \n");
    printf("\n");

    result = encontrarString(matrizString, cantPalabras, palabra);

    if(result == 1) {
        printf("Palabra encontrada: %s", palabra);
        printf("\n");
    }
    else{
        printf("Palabra no encontrada");
    } */


/**10)Hacer una función que determine si un string se encuentra dentro de un arreglo de strings
ordenado alfabéticamente. La función recibe el arreglo, la cantidad de palabras que contiene
y el string a buscar. ///devuelve el índice de la fila en que se encuentra, de lo contrario -1 */
//NO LO ENTIENDO

char MatrixS[filaString][columnaString];
char ArrayS[dim];

int cantidadFilas;

printf("Cargue la siguiente matriz con Palabras \n");
printf("\n");
cantidadFilas = cargarMatrizString(MatrixS);

printf("Mostrando palabras de la Matriz \n");
mostrarMatrizString(MatrixS, cantidadFilas);

//printf("Ingrese la palabra a encontrar ");
//gets(MatrixS);


/**11)Hacer una función (o varias) que ordene un arreglo de palabras por orden alfabético. (Por
selección o inserción, el que más te guste).
*/



}

//FUNCIONES
/**1- Cargar Matriz Numérica*/
void cargarMatriz(int matrix[][colum], int cantF){//Si o si pasar dentro de las llaves la cant columnas

    int i; //Contador filas
    int j; //Contador columnas

//Debemos crear 2 For, uno dentro de otro para iterar sobre filas y columnas

    for(i = 0; i < cantF; i++){//FOR P/FILAS

    printf("Cargar datos de la Fila N %i\n", i);
    printf("\n");

    for(j = 0; j < colum; j++){//FOR P/COLUMNAS

        printf("Ingrese el dato a N %i \n", j);
        fflush(stdin);
        scanf("%i", &matrix[i][j]); //Cargamos el mismo dato en la posición (a)ij
        printf("\n");
    }
}
}
/**2- Mostrar Matriz Numérica*/
void mostrarMatrizNum(int matriz[][colum], int cantF){

    int i, j;

    for(i = 0; i < cantF; i++){
        for(j = 0; j < colum; j++) {
            printf(" |%i| ", matriz[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}

/**3- Cargar matriz numérica Aleatoria*/
void cargarMatrizRandom(int matriz[][colum], int cantF) {

    srand(time(NULL));
    int i, j;

    for(i = 0; i < cantF; i++){
        for(j = 0; j < colum; j++){

            matriz[i][j] = rand()% 10;
        }
    }
}
/**4- Suma matricial*/
int sumaMatriz(int matrix[][colum], int cantF) {

    int i, j;
    int acumulador = 0;

    for(i = 0; i < cantF; i++) {

        for(j = 0; j < colum; j++) {

            acumulador = acumulador + matrix[i][j];
        }
    }
    return acumulador;
}

/**5- Promedio Matricial*/
float promedioMatricial(int matrix[][colum], int cantF, int total) {

    int i, j, cantElementos;
    float promedio;

    cantElementos = colum * cantF;
    promedio = total / cantElementos;

    return promedio;
}
/**6- Retornar si un dato se encuentra en la matriz*/
int encontrarDato(int matrix[][colum], int cantF, int dato) {
    int flag, i, j;
    flag = 0;
    for(i = 0; i < cantF; i++){

    for(j = 0; j < colum; j++) {

        if(matrix[i][j] == dato ) { //Si encuentra el  dato nos retorna 1(True)
            flag = 1;
        }
    }
}
    return flag;
}
/**7- Cargar una matriz de tipo char*/
void cargarMatrizChar(char matrix[][columChar], int  cantFChar) {

    int i, j;

    for(i = 0; i < cantFChar; i++) {

        printf("Usted se encuentra en la Fila N %i \n", i);
        printf("\n");

        for(j = 0; j < columChar; j++){

        printf("Ingrese un caracter: ");
        fflush(stdin);
        scanf("%c", &matrix[i][j]);
        printf("\n");
        }
    }
}
/**8-Mostrar una matriz de tipo Char*/
void mostrarMatrizChar(char matrix[][columChar], int cantFChar) {
    int i, j;

    for(i = 0; i < cantFChar; i++) {
            printf("\n");
        for(j = 0; j < columChar; j++) {

            printf(" |%c| ", matrix[i][j]);
        }
        printf("\n");
    }
}
/**9- Cargar una matriz string*/

int cargarMatrizString(char matriz[filaString][columnaString]) {

char eleccion = 's';
int i = 0;

while(i < filaString && eleccion == 's') {

    printf("Ingrese una palabra: ");
    fflush(stdin);
    gets(matriz[i]);
    printf("\n");

    printf("Para continuar pulse 's' (s/n) ");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");

    i++;
}
    return i;
}
/**Mostrar una matriz string*/
void mostrarMatrizString(char matrix[filaString][columnaString], int palabras) {
int i;

for(i = 0; i < palabras; i++) {
    printf("%s \n",  matrix[i]);
}
}
/**Encontrar un string dentro de una Matriz*/
int encontrarString(char matrix[filaString][columnaString], int cantPalabras, char dato[]) {
int i;
int flag = 0;

for(i = 0; i < cantPalabras; i++) {

    if(strcmp(matrix[i], dato)  == 0) {
        flag = 1;
    }
}
    return flag;
}
/**10-*/


