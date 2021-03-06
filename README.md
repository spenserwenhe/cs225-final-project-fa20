# CS 225 Fall 2020 Final Project
Contributors: Daniel Bargon, Spenser Fong, Justin Kim, Lilian Shen

## Overview
Our project looks at the musae-twitch dataset obtained from http://snap.stanford.edu/data/twitch-social-networks.html. The undirected, unweighted dataset is given through a CSV file, and the data format is **Vertex,Vertex**, representing edges formed from 2 vertices, which are digits. Our goal was to simulate the logic behind the follow/subscription recommendation system in the Twitch network.

Our presentation video: https://mediaspace.illinois.edu/media/1_yxuh7zqk

All testing and running of our code can be done within the individual test case files, located in the tests folder. The musae-twitch dataset, as well as other data used for testing, can be found in */tests/data*. To run our test cases, do **module load llvm/6.0.1**, then use **make test**, then do **./test [stuff]**, with stuff replaced with *fileio*, *BFS*, *dijkstras*, or *landmark*.
- - - -
## Fileio
### Files: fileio.h/cpp

The file I/O system makes use of two functions. The **file_to_vector** function takes in a file and extracts each line from it into a vector of strings. The **csv_to_tokens** takes a vector of strings and tokenizes them by a comma delimiter, meaning it is completely compatible with CSV type data. Its usage is in other source files, where the namespace fileio contains the two functions and is used to parse the graph data into vertex and edge data.
- - - -
## Breadth First Search (BFS)
### Files: BFS.h/cpp
Create a BFS object using either the constructor that takes a vector of vertices and a starting point or the constructor that takes a vector of vertices, a starting point, and a vector of edges. One acn add edges using ***addEdge*** and inputting either two vertices or an Edge. You can then either use ***nextVertex*** if you want to traverse one vertex at a time, or you could run ***start*** to run the full aglorithm.
- - - -
## Dijkstra's Implementation
### Files: dijkstras.h/cpp
For each dataset/graph, create a new Dijkstras object with the constructor and input data (vector of vectors of strings) using the fileio namespace. The test cases are examples for running the code. Use the all-in-one function ***runDijkstras*** if you only want the path (vector of Edges). The ***Dijkstras_Helper*** function (and therefore ***runDijkstras***) will print the shortest path for you. If you want to see the current vertices (including adjacent vertices) being visited, uncomment the print statements in ***dijkstras.cpp***. More information can be found in the ***testDijkstras.cpp***.

IMPORTANT: The dataset we used is unweighted. If you want to test for weighted graphs, input the data like the dataset but with the weight after it: **Vertex,Vertex,Weight**, with each component being a string of digits if data is hardcoded in the test file. Examples are given in the test file.
- - - -
## Landmark Path Implementation
### Files: landmark.h/cpp
Similar to Djikstra's, create a Landmark object using the constructor and use the fileio namespace to input data and generate a graph. Make use of the **runLandmarkPath** method to run the algorithm and get back a path of edges stored in a vector of Edge objects. The test cases included have examples of usage, testing for the generation of the graph and path generation. 
