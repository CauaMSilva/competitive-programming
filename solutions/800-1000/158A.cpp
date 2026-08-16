#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, valor, ref;
    int posicao = 1;
    int saida = 0;
    cin >> n;
    cin >> k;

    while (n--) {
        cin >> valor;
        if (!valor){
            posicao++;
            continue;
        }
        if (posicao <= k) {
            posicao++;
            saida++;
            ref = valor;
        } else {
            if (valor >= ref) {
                saida++;
            }
        }
        
    }

    cout << saida << endl;

    return 0;
}