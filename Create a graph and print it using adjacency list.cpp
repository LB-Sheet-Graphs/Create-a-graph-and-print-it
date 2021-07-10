#include<iostream>
#include<vector>    //I am using vector bcoz its very cache friendly

using namespace std;

//Utility to add an edge in the graph (undirected here)
void add_edge(vector<int> ad[],int u,int v)         
{
	//Edge banega dono ends ko jodkar so add v into list[u] and u into list[v]
	ad[u].push_back(v);
	ad[v].push_back(u);
}

//Utility to print the graph (undirected here) in adjency list form
void printgraph(vector<int> ad[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"\nAdjacency list of vertex =>  "<<i<<"\nHead -> ";
		for(int j=0;j<ad[i].size();j++)
		{
			cout<<ad[i].at(j)<<" ";
		}
		cout<<"\n";
	}

}

int main()
{
	int size;
	cout<<"\nHow many vertices do you want in your undirected graph? => ";
	cin>>size;
	
	//ek array of vectors declare kar diya jiska har ek element ek list hoga and size of array = no. of vertices
	
	vector<int> ad[size];  
	
	//getting static inputs
	add_edge(ad,0,1);
	add_edge(ad,0,4);
	add_edge(ad,1,2);
	add_edge(ad,1,3);
	add_edge(ad,1,4);
	add_edge(ad,2,3);
	add_edge(ad,3,4);
	
	//calling our function
	printgraph(ad,size);
	
return 0;	
}
