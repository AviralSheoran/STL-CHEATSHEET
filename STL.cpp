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

    p = {123, "Hello"}; // ? Use this one
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

    /*
    * Iterators

     vector<int> v = {2, 3, 5, 6, 7};
     vector<int>::iterator it = v.begin();

     for (it = v.begin(); it != v.end(); ++it)
     {
         cout << *it << endl;
     }

     // ? it++ and it +1 are completely two different things, Let me Explain
     // ? it++ is used for next iteration and it+1 is used for next location
     // ? In the case of containers and pairs both will work the same as vector is continous
     // ? But in the case of map and sets the it++ will point to the next iteration and it+1 will point to the next location which may be invalid
     // ? As in the maps and set they aren't continous like vectors in memory

     vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
     vector<pair<int, int>>::iterator it = v_p.begin();

     for (it = v_p.begin(); it != v_p.end(); ++it)
     {
         cout << (*it).first << " " << (*it).second << endl;
         // ? OR
         cout << (it->first) << " " << (it->second) << endl;
     }

     // (*it).first <=> it->first
     */

    /*
    TODO:Range Based Iterators
    vector<int> v = {1, 2, 3, 5, 5, 3};
    for (int value : v)
    {
        cout << value << endl;
    }

    // ? We could use only auto keyword instead of range based loops
    TODO: Auto Keyword
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    for (auto &it : v_p)
    {
        cout << it.first << " " << it.second << endl;
    }
    */

    /*
    * Ordered Maps

    map<int, string> m; // Declaration

    // Time Complexity - 0(Logn)
    m[1] = "abc"; // Insertion
    m[5] = "adc";
    m[3] = "akc";
    m.insert({4, "afg"}); // Another Insertion method

    for (auto &it : m) // Time Complexity - 0(logn)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;

    TODO: m.find() and m.erase()
    auto it = m.find(3); // find the pair and assign it to iterator
    m.erase(it);         // Erases the entire pair

    for (auto &it : m) // Time Complexity - 0(logn)
    {
        cout << it.first << " " << it.second << endl;
    }

    m.clear();         // Clears/deletes the map
    for (auto &it : m) // Time Complexity - 0(logn)
    {
        cout << it.first << " " << it.second << endl;
    }
 */

    /*
    * Unordered Maps
    ? Time Complexity is 0(1)

    unordered_map<string, int> m;
     ! And everything is same as ordered map
 */

    /*
    * Ordered Sets
    set<string> s; // Delaration

    * Unordered sets
    ? Same as Unordered Maps

    * Multi Sets
    multiset<string> s; // Declaration
    ? Used instead of Priority Queues
    */

    cout << endl;
    return 0;
}