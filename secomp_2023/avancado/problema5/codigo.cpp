#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int numCards;
	cin >> numCards;

	vector<int> cards(numCards);
	for (int i = 0; i < numCards; i++) {
		cin >> cards[i];
		//cout << cards[i] << " ";
	}
	//cout << endl;

	vector<int> dp(numCards, 0); // Vetor para armazenar a maior pontuação até cada posição

	int MAX;

	MAX = dp[0] = cards[0];
	//cout << dp[0] << " ";
	for (int i = 1; i < numCards; i++) {
		dp[i] = cards[i]; // Inicializa com a pontuação da carta atual

		// Verifica se é possível incluir a carta anterior
		if(cards[i-1] != cards[i])
			if(dp[i-1] + cards[i] > 0 )
				dp[i] = max(dp[i-1] + cards[i], cards[i]);
		
		//cout << dp[i] << " ";
		if(dp[i] > MAX)
			MAX = dp[i];

	}
	//cout << endl;

	cout << MAX << endl;
    

    return 0;
}
