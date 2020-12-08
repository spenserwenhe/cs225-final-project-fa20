#pragma once

#include <vector>

#include "BFS.h"
#include "graph.h"
#include "edge.h"

class Landmark {
  public: 
    // Constructor to initialize graph to run landmark algorithm
    Landmark(std::vector<std::vector<std::string>> data);

    // Runs the landmark path algorithm
    std::vector<Edge> runLandmarkPath(Vertex start, Vertex end, Vertex landmark);

  private:
    Graph g_;

    // Helper function for runLandmarkPath to find a path given a starting and ending vertex
    std::vector<Edge> findBFSPathToVertex(Vertex start, Vertex end);

    // Helper function for runLandmarkPath to get a vector of edges given a map of previous visited vertices
    std::vector<Edge> getEdgePathFromMap(std::map<Vertex, Vertex> visited);
}