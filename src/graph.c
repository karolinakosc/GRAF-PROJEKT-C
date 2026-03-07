#include "../include/graph.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

Graph* create_graph(int num_vertices, int num_edges) {
    
    Graph *graph = (Graph*)malloc(sizeof(Graph));
    if (graph == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory for the main graph structure!\n");
        return NULL;
    }

    graph->num_vertices = num_vertices;
    graph->num_edges = num_edges;
    graph->vertices = NULL;
    graph->edges =NULL;

    if (num_vertices > 0) {
        graph->vertices = (Vertex*)malloc(num_vertices * sizeof(Vertex));
        if (graph->vertices == NULL) { 
            fprintf(stderr, "Error: Memory allocation failed for vertices!\n");
            free(graph);
            return NULL;
        }
    }

    if (num_edges > 0) {
        graph->edges = (Edge*)malloc(num_edges * sizeof(Edge));
        if (graph->edges == NULL) {
            fprintf(stderr, "Error: Memory allocation failed for edges!\n");
            free(graph->vertices);
            graph->vertices = NULL;
            free(graph);
            return NULL;
        }
    }

    return graph;
}


void destroy_graph(Graph **graph) {
    if (graph == NULL || *graph == NULL) {
        return;
    }

    if ((*graph)->vertices != NULL) {
        free((*graph)->vertices);
        (*graph)->vertices = NULL; 
    }

    if ((*graph)->edges != NULL) {
        free((*graph)->edges);
        (*graph)->edges = NULL;
    }

    free(*graph);
    *graph = NULL; 
}

bool is_graph_valid(const Graph *graph) {
    if (graph == NULL) {
        fprintf(stderr, "Error: Graph pointer is NULL.\n");
        return false;
    }

    if (graph->num_vertices <= 0) {
        fprintf(stderr, "Error: Graph must have at least 1 vertex.\n");
        return false;
    }

    if (graph->num_edges < 0) {
        fprintf(stderr, "Error: Number of edges cannot be negative.\n");
        return false;
    }

    for (int i = 0; i < graph->num_edges; i++) {
        int from = graph->edges[i].from;
        int to = graph->edges[i].to;

        if (from < 0 || from >= graph->num_vertices || to < 0 || to >= graph->num_vertices) {
            fprintf(stderr, "Error: Edge %d connects invalid vertices (%d to %d).\n", i, from, to);
            return false;
        }
    }

    return true;
}