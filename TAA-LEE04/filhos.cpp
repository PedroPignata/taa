#include <bits/stdc++.h>
using namespace std;

class arvoreBinaria
{
private:
    vector<int> arvore;
    int pai(int i) { return i / 2; }
    int left(int i) { return 2 * i; }
    int right(int i) { return 2 * i + 1; }

public:
    arvoreBinaria()
    {
        arvore.push_back(0);
    }

    void
    colocar(int num)
    {
        arvore.push_back(num);
    }

    void consultar(int a)
    {
        int esq = left(a);
        int dir = right(a);
        if (arvore.size() == 2)
        {
            cout << "NULL" << endl;
            return;
        }

        if (esq < arvore.size() && arvore[esq] != -1)
        {
            cout << arvore[esq] << " ";
        }
        else
        {
            cout << "NULL ";
        }

        if (dir < arvore.size() && arvore[dir] != -1)
        {
            cout << arvore[dir] << endl;
        }
        else
        {
            cout << "NULL" << endl;
        }
    }
    int size()
    {
        return arvore.size();
    }
};

int main()
{
    int N, C;
    cin >> N >> C;

    arvoreBinaria arvore2;

    for (int i = 0; i < N; i++)
    {
        int V;
        cin >> V;

        arvore2.colocar(V);
    }

    for (int i = 0; i < C; i++)
    {
        int consulta;
        cin >> consulta;

        arvore2.consultar(consulta);
    }
    return 0;
}