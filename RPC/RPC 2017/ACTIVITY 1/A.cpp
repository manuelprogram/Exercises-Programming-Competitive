#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

typedef vector<int> Fila;
typedef vector< Fila > matriz;
int filas, cols, op;

int movI[] = { 0, 0, 0, -1, -1, -1, 1, 1, 1 };
int movJ[] = { 0, 1, -1, 0, 1, -1, 0, 1, -1 };

int moduloFilas( int num ){
	return (( num % filas ) + filas)%filas;
}

int moduloCols( int num ){
	return (( num % cols ) + cols)%cols;
}

void average( matriz& orig ){
	matriz temp( filas, Fila( cols, 0 ) );
	for( int i = 0; i < filas; i++ ){
		for( int j = 0; j < cols; j++ ){
			for( int k = 0; k < 9; k++ ){
				temp[i][j] += orig[ moduloFilas(i + movI[ k ]) ][ moduloCols(j + movJ[k]) ];
			}
		}
	}

	for( int i = 0; i < filas; i++ )
		for( int j = 0; j < cols; j++ )
			orig[i][j] = temp[i][j];
}

int diferentes( matriz& orig ){
	set<int> dif;

	for( int i = 0; i < filas; i++ )
		for( int j = 0; j < cols; j++ )
			dif.insert( orig[i][j] );

	return (int)dif.size();

}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> cols >> filas >> op;
	matriz original( filas, Fila( cols ) );
	
	for( int i = 0; i < filas; i++ )
		for( int j = 0; j < cols; j++ )
			cin >> original[i][j];

	for( int i = 0; i < op; i++ ){
		average( original );
	}

	cout << diferentes( original ) << '\n';

	return 0;
}