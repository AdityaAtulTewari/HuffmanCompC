//
// Created by Thomas Rousey on 1/16/2018
//

// Header Guard
#ifndef HUFFPQ_H
#define HUFFPQ_H
#ifdef _cplusplus
extern "C" {
#endif

// Constructs an empty PQ
huffPQ* createHuffPQ();

// Destructs a PQ
void destructHuffPQ(huffPQ* pq);

// Inserts a node with the desired data into the HuffPQ returns null if succeeded, else self
pqNode* pushHuffPQNode(void* data, int freq, huffPQ* pq);

// Removes the node a the head of the PQ, returns pqNode deleted or null if PQ is empty
pqNode* popHuffPQNode(huffPQ* pq);

#ifdef _cplusplus
}
#endif

#endif
