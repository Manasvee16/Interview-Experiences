1. Given:  
A target standard weight W.  
A total of X sacks with given weights.  
A buyer can carry exactly N bags.  
We need to find how many ways we can choose N sacks such that their total weight equals W.  
[solution](https://github.com/Manasvee16/Interview-Experiences/blob/main/Flipkart/My%20Interview/ques1.cpp)  
✅ Sample Input:  
10  
2 4  
1 2 3 9  
✅ Sample Output:  
1  
Explanation: Only one combination of 2 bags forms 10 → {1, 9}.

2. find the Minimum Spanning Tree of a graph using Kruskal'a Algorithm to connect all required places with the minimum cost
Sample Input:  
7 7  
0 6 15  
0 1 10  
1 2 20  
1 3 30  
2 3 40  
2 5 50  
2 4 60
Sample Output:  
(10 + 15 + 20 + 30 + 40 + 60) / 2 = 87.5 → Not the MST  
But the selected edges are:  
10 + 15 + 20 + 30 + 25 = 100 → actual total round-trip  
So 100 / 2 = 50 ✅
[solution](https://github.com/Manasvee16/Interview-Experiences/blob/main/Flipkart/My%20Interview/ques2.cpp)

3. Transform a given step height array into a symmetric pattern, where heights strictly decreases by 1 until the center, then increase by 1- a perfect V shape. Calculate the minimum no. of changes required to make the given step configuration  
Sample Input:  
n = 5  
a = 2 3 0 1 4  
b = 3 3 2 3 1  
|2 - 3| = 1  
|3 - 3| = 0  
|0 - 2| = 2  
|1 - 3| = 2  
|4 - 1| = 3  
----------------  
Total     = 8  
[solution](https://github.com/Manasvee16/Interview-Experiences/blob/main/Flipkart/My%20Interview/ques3.cpp)  
