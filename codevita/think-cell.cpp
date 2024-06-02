#include <iostream>
#include <map>
#include <random>
#include <cassert>
using namespace std;
template <typename K, typename V>
class interval_map
{
    friend void IntervalMapTest();
    V m_valBegin;
    std::map<K, V> m_map;

public:
    // constructor associates whole range of K with val
    interval_map(V const &val)
        : m_valBegin(val)
    {
    }

    // Assign value val to interval [keyBegin, keyEnd).
    // Overwrite previous values in this interval.
    // Conforming to the C++ Standard Library conventions, the interval
    // includes keyBegin, but excludes keyEnd.
    // If !( keyBegin < keyEnd ), this designates an empty interval,
    // and assign must do nothing.
    void assign(K const &keyBegin, K const &keyEnd, V const &val)
    {
        // INSERT YOUR SOLUTION HERE 
        if(!(keyBegin < keyEnd))
            return;
        else if(m_map.size() == 0)
        {
            m_map.insert({keyBegin,val});
            m_map.insert({keyEnd,m_valBegin});
            return;
        }
        else
        {
            K last_key;
            V last_val = m_map[keyBegin];
            cout<<"init = "<<last_val<<endl;
            int fl = 0;

            auto it1 = m_map.find(keyBegin);

            if(it1 == m_map.end())
            {
                m_map.insert({keyBegin,val});
                it1 = m_map.find(keyBegin);
            }
            else
            {
                last_key = it1->first;
                last_val = it1->second;
                cout<<keyBegin<<" bf "<<m_map[keyBegin]<<endl;
                m_map.erase(keyBegin);
                m_map.insert({keyBegin,val});
                cout<<keyBegin<<" af "<<m_map[keyBegin]<<endl;
            }

            auto it2 = m_map.find(keyEnd);

            if(it2 == m_map.end())
            {
                cout<<m_map[keyEnd]<<" last bf "<<last_val<<"  k = "<<keyEnd<<endl;
                m_map.insert({keyEnd,last_val});
                it2 = m_map.find(keyEnd);
                cout<<m_map[keyEnd]<<" last af "<<last_val<<endl;
                fl = 1;
                cout<<"No End"<<endl;
            }
            

            for(auto &it = it1;it != it2;)
            {
                if(it == it1)
                {
                    ++it;
                }
                if(it != it2)
                {
                    last_key = it->first;
                    last_val = it->second;
                    cout<<last_key<<" x "<<last_val<<endl;
                    m_map.erase(it++);
                }
               
            }

            if(fl){
                cout<<keyEnd<<" end - bf "<<m_map[keyEnd]<<endl;
                m_map.erase(keyEnd);
                m_map.insert({keyEnd,last_val});
                cout<<keyEnd<<" end - af "<<m_map[keyEnd]<<endl;
               // cout<<"A "<<keyEnd <<endl;
            }

            return ;
        }
    }

    // look-up of the value associated with key
    V const &operator[](K const &key) const
    {
        cout<<"a"<<endl;
        auto it = m_map.upper_bound(key);
        if (it == m_map.begin())
        {
            
            return m_valBegin;
        }
        else
        {
            return (--it)->second;
        }
    }
};
/*
// Test function for interval_map class
void intervalMapTest()
{
    interval_map<int, char> myMap('A'); // Create an interval_map with default value 'A'
    std::map<int, char> referenceMap;   // Reference map for validation

    // Seed for random number generation
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100); // Random keys in range [1, 100]
    std::uniform_int_distribution<char> charDis('A', 'Z'); // Random characters in range ['A', 'Z']

    // Assign random intervals with random values
    for (int i = 0; i < 10; ++i)
    {
        int keyBegin = dis(gen);
        int keyEnd = dis(gen);
        if (keyBegin >= keyEnd) continue; // Skip invalid intervals

        char value = charDis(gen);
        myMap.assign(keyBegin, keyEnd, value);
        for (int key = keyBegin; key < keyEnd; ++key)
        {
            referenceMap[key] = value;
        }
    }

    // Validate the assignments
    for (const auto &entry : referenceMap)
    {
        assert(myMap[entry.first] == entry.second);
    }

    std::cout << "All assignments validated successfully!" << std::endl;
}
*/
void interval(map<int,char> &m,int l,int r,char x,interval_map<int,char> &myMap)
{
    myMap.assign(l, r, x);
    for(int i = l;i<r;i++)
        m[i] = x;
}
void IntervalMapTest() {
	interval_map<int, char> myMap('A');
    map<int,char> confirm;
	// Test Case 1: Single assignment
    

	//myMap.assign(5, 10, 'B');
    int l,r;
    l = 0;
    r = 50;

    for(int i = l;i<=r;i++)
        confirm[i] = 'A';

   // interval(confirm,l,r,'A',myMap);
  //  interval(confirm,5,10,'B',myMap);
   // interval(confirm,8,15,'C',myMap);
    interval(confirm,20,40,'D',myMap);
    interval(confirm,25,35,'E',myMap);
    // for(int i = 5;i<10;i++)
    //     confirm[i] = 'B';
    
	// Test Case 2: Overlapping intervals
	//myMap.assign(8, 15, 'C');
    // for(int i = 8;i<15;i++)
    //     confirm[i] = 'C';

	// Test Case 3: Empty interval (should not change anything)
	//myMap.assign(20, 20, 'D');
    //  for(int i = 20;i<20;i++)
    //     confirm[i] = 'D';
	// Test Case 4: Non-overlapping intervals
	//myMap.assign(25, 30, 'E');
    // for(int i = 25;i<30;i++)
    //     confirm[i] = 'E';

	// Print the map for verification
	cout << "Interval Map err:\n";
	for(int i = l;i<=r;i++)
    {
        //if(confirm[i] != myMap[i])
            cout<<i<<" : "<<confirm[i]<<" -> "<<myMap[i]<<endl;
    }
}
int main()
{
    IntervalMapTest(); // Run the interval_map test
    return 0;
}
