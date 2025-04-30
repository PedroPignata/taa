#include <bits/stdc++.h>
using namespace std;

void counting_sort(vector<int> & tab)
{
    // vector<int> count(max(tab), 0);
    // vector<int> count(tab.size(), 0);
    vector<int> count(*max_element(tab.begin(), tab.end()) + 1, 0);

    for(int i = 0; i < tab.size(); i++)
    {
        count[tab[i]]++;
    }

    vector<int> aux(tab.size());
    for (int i = 0, j = 0; i < count.size(); i++)
    {
        for (int k = 0; k < count[i]; k++)
        {
            aux[j++] = i;
        }
    }

    tab = aux;

}

int main()
{
    vector<int> tab = {4, 2, 2, 8, 3, 3, 1};
    counting_sort(tab);
    for (auto &x: tab)
    {
        cout << x << " ";
    }
    cout << endl;
}