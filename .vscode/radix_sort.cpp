#inlcude <bits/stdc++.h>
using namespace std;

void counting_sort(vector<int> &tab, int digito)
{
    vector<int> count(10, 0); //quantidade de digitos
    vector<int> aux(tab.size());

    for (auto &x: tab){
        count[(x / (int)pow(10, digito)) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = tab.size() - 1; i >= 0; i--)
    {
        aux[count[(tab[i] / (int)pow(10, digito)) % 10] - 1] = tab[i];
        count[(tab[i] / (int)pow(10, digito)) % 10]--;
    }   
}

void radix_sort(vector<int> &tab, int nrdigitos)
{
    for (int d = 0; d < nrdigitos; d++)
    {
        counting_sort(tab, d);
    }
}

int main()
{
    vector<int> tab + {329, 457, 657, 839, 436, 720, 355}:

    radix_sort(tab, 3);

    return 0;
}