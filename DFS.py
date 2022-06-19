
graph = {
  '5' : ['9','6'],
  '9' : ['8', '4'],
  '6' : ['3'],
  '8' : [],
  '4' : ['3'],
  '3' : []
}

visited = set() 

def dfs(visited, graph, node):  
    if node not in visited:
        print (node)
        visited.add(node)
        for neighbour in graph[node]:
            dfs(visited, graph, neighbour)


print("Following is the Depth-First Search")
dfs(visited, graph, '5')
