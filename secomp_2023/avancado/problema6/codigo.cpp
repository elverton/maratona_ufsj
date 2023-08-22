#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int numCases;
    cin >> numCases;

    for (int i = 0; i < numCases; i++) {
        int A, B;
        cin >> A >> B;
		//printf("%d %d\n", A, B);
		string symbols;
		getline(cin, symbols);

        //string symbols;
        //cin >> symbols;
		getline(cin, symbols);
		//printf("%s\n", symbols.c_str());

		
        int guess = (A + B) / 2; // Começa com a média dos limites

        for (char symbol : symbols) {
            //cout << guess << endl;

            if (symbol == '>') {
                A = guess + 1;
				guess = (A + B) / 2;
            } else if (symbol == '<') {
                B = guess - 1;
				guess = (A + B) / 2;
            } else if (symbol == '=') {
				cout << guess << endl;
                break;
            }
             // Atualiza a tentativa com base nas respostas
        }
    }

    return 0;
}
