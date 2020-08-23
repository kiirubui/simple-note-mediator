#include <vector>
#include <iostream>
#include <math.h >
//////////////////////////////////
using namespace std;
///////////////////////////////////
int e1,x;
int nump,nrep;
///////////////////////////////////
int main(){

inicio: // to use goto

cout << "digite a nota do aluno" << endl;
cin >> e1;

if (e1>=6)
{nump+=1; // (nump=nump+1;) to (nump+=1;)
}

else{
    nrep+=1;
}

cout << "numero de aprovados: "<< nump << endl;
cout << "numero de reprovados: "<< nrep << endl;

goto inicio;
///////////////////////////////////////////////////////////////////////
    return 0;
}
