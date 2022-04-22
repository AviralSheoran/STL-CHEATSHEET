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

int main()
{

    /*
    * Pairs

    pair<int,string> p; // Declaration

    // Taking Input
    // p = make_pair(12, "HOLA"); // ? Long form - So shouldn't used this

    p = {123, "Hello"}; // ? USe this one
    cout << p.first << " " << p.second << endl; // Output

    // pair <int,string> p1 = p; // Copying pair p to p1
    pair <int,string> &p1 = p; // Refrancing pair p to p1

    p1.first = 3;// This will only work if the declared pair is reference pair

    cout << p1.first << endl;


   * Vectors - Are like Array (Continous Memory Blocks) but they are dynamic (i.e. we can change its size)
    vector <int> v;

    int n;
    cin >> n;

    for (int i =0; i<n; ++i) { // Taking input
        int x;
        cin >> x;
        v.push_back(x);
    }

    // vector <int> v(10, 3); // ? This will declare a vector of size 10 having all elements as 3


    v.push_back(4); // Push the value at the end of vector
    v.pop_back(); // Removes the last element from vector

    // ! IMPORTANT
    // ? There are two method to make a copy a vector
        // ? 1. Direct Copy - O(n)
                vector <int> v1 = v; // Make a new copy of v and the changes in v1 won't have any effect on v

        // ? 2. Reference Copy - O(1)
                vector <int> &v1 = v; // Make a new vector v1 and if there is a change in v1 then it will also be reflected in v
    */

    /*
    * Nesting in Vectors

    vector <pair <int,int>> v;

   int n;
   cin >> n;

   for (int i =0; i < n; ++i) { // Taking Input
       int x,y;
       cin >> x >> y;
       v.push_back({x,y});
   }

     TODO: Array of Vectors
    // ? Function to Output
   int printVec(vector<int>& v) {
       for (int i =0; i < n; ++i) {
           cout << v.first << endl;
       }
   }

   int N;
   cin >> N;

   vector<int> v[N];

   for (int i = 0; i < N; ++i) { // Taking Input
       int n;
       cin >> n;

       for (int j = 0; j<n; ++j) {
           int x;
           cin >> x;
           v[i].push_back(x);
       }
   }

   for( int i=0;i<N ; ++i) { // Output
       printVec(v[i]);
   }

    TODO: Vector of Vectors
    int N;
    cin >> N;

    vector<vector <int> > v;
    for (int i=0;i<N ; ++i) { // Taking Input
        int n;
        cin >> n;

        vector <int> temp;
        for (int j=0;j<n;++j) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for( int i=0;i<N ; ++i) { // Output
       printVec(v[i]);
   }  */

    cout << endl;
    return 0;
}