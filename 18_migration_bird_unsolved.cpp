#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void migratoryBirds(vector<int> arr){
    set<int> s;
    long long i=0 , size_set=0;
    
    for(int x : arr)
    s.insert(x);
    
    for(int y : s)
    size_set++;
    
    long long a[size_set][2];
    
    for(int x : s){
        int f = 0;
        for(int y : arr){
            if(x == y)
                f++;
        }
        a[i][0] = x;
        a[i++][1] = f;
    }
    
    for(i=1 ; i<size_set ; i++){
        if(a[i][1] > a[0][1 ]){
            a[0][0] = a[i][0];
            a[0][1] = a[i][0];
        }
    }      
        
    cout<<(a[0][0]);
}

int main()
{
    int n;
    vector<int> bird;

    cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        bird.push_back(x);
    }

    migratoryBirds(bird);

    return 0;
}
