#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,
        M,
        r = 0;

    cin >> N >> M;

    while (N-- > 0) {
        bool golEmTodas = true;

        for (int i = 0; i < M; i++) {
            int gols;

            cin >> gols;

            golEmTodas = golEmTodas && gols > 0;
        }

        if (golEmTodas) r++;
    }

    cout << r << '\n';

    return EXIT_SUCCESS;
}