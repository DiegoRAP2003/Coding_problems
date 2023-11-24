/*
Autor: Diego Alfaro
TEC de Monterrey
Sorting algorithms
11/3/2023
*/

/*
Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.
*/

#include <iostream>
#include<algorithm>

int main() {

    int numbers[100];
    std::string s;
    std::cin>>s;
    int count = 0;
    for(int i = 0; i<s.size();i++){
        if(s[i] == '+'){ //nos saltamos los inputs "+"
            continue;
        }else{
            numbers[count++] = s[i]-'0'; //guardamos en el arreglo los valores de la string "s"
        }
    }

    std::sort(numbers,numbers+count); //ordenamos el vector numeros

    for(int i=0; i<count;i++){//ciclo va desde 0 hasta count ya que count es el la cantidad de numeros que se agregaron al arreglo
        std::cout<<numbers[i];
        if(i==count-1){
            break;
        }
        std::cout << "+";
    } //ciclo imprime los numeros en el arreglo usando un "+" en medio de cada uno

    return 0;

}