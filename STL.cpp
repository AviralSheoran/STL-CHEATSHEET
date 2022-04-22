#include <bits/stdc++.h>
using namespace std;

    /* 
    * STL Parts - 
                1. Containers
                2. Iterators
                3. Algorithms
                4. Functors
                
    * 1. Containers - 
            TODO: Nested Containers
            -> Sequential
                    a). Vectors
                    b). Stack
                    c). Queue
                    d). Pair (Not a Container)

            -> Unordered (Used in Hashing Problems)
                    a). Unordered Map
                    b). Unordered Set
                    
            -> Ordered (Value are saved in ordered manner)
                    a). Maps
                    b). Multimap
                    c). Set
                    d). Multiset

    * 2. Iterators (Similar to Pointers) - 
                    -> Point to memory address of Containers
                    -> begin() , end() iterator
                    -> Continuity and discontinuity for Containers
                    ? Syntax -> vector <int>:: iterator it;

    * 3. Algorithms - 
                    -> Upper Bound and Lower Bound
                    -> Sort (Comparator)
                    -> max_element and min_element
                    -> accumulate - to directly find the sum of array
                    -> reverse
                    -> count 
                    -> find - position of element 
                    -> next permutaion
                    -> prev permutaion
                    and so on...

    ! WE DON"T NEED TO USE THIS👇
    * 4. Functors - Classes which can act as functions  

    */


int main () {

    /* 
    * Pairs 
    
    pair<int,string> p;
    
    // Declaration 
    // p = make_pair(12, "HOLA"); // ? Long form - So shouldn't used this 

    p = {123, "Hello"};
    cout << p.first << " " << p.second << endl; // Output

    // pair <int,string> p1 = p; // Copying pair p to p1
    pair <int,string> &p1 = p; // Refrancing pair p to p1

    p1.first = 3;// This will only work if the declared pair is reference pair

    cout << p1.first << endl;
    */

   


    cout << endl;
    return 0;
}