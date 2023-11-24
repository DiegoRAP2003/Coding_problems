/*
Autor: Diego Alfaro
TEC de Monterrey
Sorting algorithms
11/3/2023
*/

/*
Problem: Three guys play a game: first, each person writes down n distinct words of length 3. Then, they total up the number of points as follows:

if a word was written by one person — that person gets 3 points,
if a word was written by two people — each of the two gets 1 point,
if a word was written by all — nobody gets any points.

In the end, how many points does each player have?
Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤1000
) — the number of words written by each person.

The following three lines each contain n
 distinct strings — the words written by each person. Each string consists of 3
 lowercase English characters.

Output
For each test case, output three space-separated integers — the number of points each of the three guys earned. You should output the answers in the same order as the input; the i
-th integer should be the number of points earned by the i
-th guy.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include<set>

int main(){

    const int N = 3; // numero de jugadores
    long t; std::cin >> t; //numero de tests
    while(t--){
        long n; std::cin >> n; //cantidad de palabras a usar en el juego
        std::vector<std::set<std::string> > v(N); //estructura donde se guardaran las palabras
        for(long a = 0; a < N; a++){
            for(long b = 0; b < n; b++){
                std::string s; std::cin >> s; //ciclo para poder ingresar las cadenas al set v
                v[a].insert(s);
            }
        }

        std::vector<long> score(N, 0);
        for(long a = 0; a < N; a++){
            for(std::set<std::string>::iterator it = v[a].begin(); it != v[a].end(); it++){//se crea un iterador desde el principio del set v, hasta que sea igual que el final de v
                std::string x = *it;
                long count(0);
                for(long b = 0; b < N; b++){
                    if(b == a){continue;}
                    count += v[b].count(x); //count es usado para saber si la palabra que esta en x esta repetida en el set
                }

                if(count == 0){score[a] += 3;}
                else if(count == 1){score[a] += 1;}
            }
        }
    

        for(long p = 0; p < N; p++){std::cout << score[p] << " ";} //ciclo para imprimir los resultados
        std::cout << std::endl;

    }
    


    return 0;
}