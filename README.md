# Create-a-graph-and-print-it

There are two way to represent it :

>> adjacency matrix Representation  TC = O(1) for removing edges and to check whether there is an edge from vertex u to v
									SC = O(v*v) as matrix is stored in a 2D array space
									
>> adjacency List Representation   TC = O(v) for queries like whether there is an edge from vertex u to v
								   SC = O(|V|+|E|) and its O(v*v) in worst case
								   
								   I am using list representation here
                   
 EXAMPLE GRAPH: (in list form)

if size is 5

0 [] -> [1][]->[4][/]
1 [] -> [0][]->[4][ ]->[2][ ]->[3][/]
2 [] -> [1][]->[3][/]
3 [] -> [1][]->[4][ ]->[2][/]
4 [] -> [3][]->[0][ ]->[1][/]
