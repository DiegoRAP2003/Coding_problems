/*
Vanya really likes math. One day when he was solving another math problem, he came up with an interesting tree. This tree is built as follows.

Initially, the tree has only one vertex with the number 1 — the root of the tree. Then, Vanya adds two children to it, assigning them consecutive numbers — 2 and 3, respectively.
 After that, he will add children to the vertices in increasing order of their numbers, starting from 2, 
assigning their children the minimum unused indices. 
As a result, Vanya will have an infinite tree with the root in the vertex 1, where each vertex will have exactly two children, 
and the vertex numbers will be arranged sequentially by layers.
*/

#include <iostream>

int main(){

    int t;
    std::cin>> t;

    while(t--){
        long long int n, sum = 0;
        std::cin>> n;
        while(n > 0){
            sum += n; //suma n y despues lo divide entre dos
            n/=2;
        }
        std::cout << sum << std::endl;
    }
}