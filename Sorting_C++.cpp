/*
Autor: Diego Alfaro
TEC de Monterrey
Sorting algorithms
11/3/2023
*/

/*
Problem: There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x1, the second friend lives at the point x2, and the third friend lives at the point x3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

Input
The first line of the input contains three distinct integers x1, x2 and x3 (1 ≤ x1, x2, x3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.
*/

#include <iostream>
#include<algorithm>

int main() {

    int numbers[100];
    std::string s;
    std::cin>>s;
    int count = 0;
    for(int i = 0; i<s.size();i++){
        if(s[i] == '+'){
            continue;
        }else{
            numbers[count++] = s[i]-'0';
        }
    }

    std::sort(numbers,numbers+count);

    for(int i=0; i<count;i++){
        std::cout<<numbers[i];
        if(i==count-1){
            break;
        }
        std::cout << "+";
    }

    return 0;

}