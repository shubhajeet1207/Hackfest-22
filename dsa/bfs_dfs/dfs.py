adj_list={
    "A":["B","C"],
    "B":["D","E"],
    "C":["B","F"],
    "D":[],
    "E":["F"],
    "F":[]
}

visited={}
parent={}
stack=[]
dfs_traversal_output=[]

for node in adj_list.keys():
    visited[node]=False
    parent[node]=None




def dfs_travel(u):
    visited[u]=True
    dfs_traversal_output.append(u)


    for v in adj_list[u]:
        if visited[v]==False:
            parent[v]=u
            dfs_travel(v)
        
   
print("dfs traversal node A to Goal node F")
dfs_travel("A")
print(dfs_traversal_output)
print("each node:parent node in above dfs traversal",parent)
