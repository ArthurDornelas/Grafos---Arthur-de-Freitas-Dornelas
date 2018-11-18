#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
#include <vector>
#include "Aresta.h"
using namespace std;

class No{

private:
    int id;
    int grau;

public:
    std::vector <Aresta> listaAresta;
    No();
    No(int id, int grau);
    ~No();
    int getId();
    int getGrau();
    void setId(int id);
    void setGrau(int g);
    void adicionaAresta(int id,float pesoA,int idLista);
    void removeAresta(int id);
    float getAresta(int index);
    bool eVizinho(int id);

};

#endif // NO_H_INCLUDED
